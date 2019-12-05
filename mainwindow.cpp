#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "utilities.h"
#include "defines.h"
#include <QSerialPortInfo>
#include <QMessageBox>
#include "initparameterstxtloader.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_pSerial = std::make_unique<Serial>(ui);
    m_pModule1 = std::make_unique<Module>();
    m_pModule2 = std::make_unique<Module>();
    m_pModule3 = std::make_unique<Module>();
    m_pTableView = std::make_unique<TableView>(ui);

    m_pSerial->initPortList();

    connect(m_pSerial.get(), SIGNAL(readyRead()), this, SLOT(serialDataReceived()));

    updateGUI();

    ui->groupBox_ModuleControls->setEnabled(false);
    ui->groupBox_CustomPacketControls ->setEnabled(false);
    ui->groupBox_GraphControls->setEnabled(false);
    ui->groupBox_PacketDisplay->setEnabled(false);
    ui->groupBox_Module1->setEnabled(false);
    ui->groupBox_Module2->setEnabled(false);
    ui->groupBox_Module3->setEnabled(false);

    m_pTableView->initPacketDisplay();

    setInputValidators();

    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setInputValidators()
{
    m_pCustomIntegerValidator = std::make_unique<CustomIntegerValidator>();
    m_pCustomFloatingPointValidator = std::make_unique<CustomFloatingPointValidator>();

    /*Input widgets accepting only integers*/
    ui->lineEdit_RangeMinimum->setValidator(m_pCustomIntegerValidator.get());
    ui->lineEdit_RangeMaximum->setValidator(m_pCustomIntegerValidator.get());
    ui->lineEdit_StartDegrees->setValidator(m_pCustomIntegerValidator.get());
    ui->lineEdit_StopDegrees->setValidator(m_pCustomIntegerValidator.get());

    /*Input widgets accepting floating point values*/
    ui->lineEdit_StartLinear->setValidator(m_pCustomFloatingPointValidator.get());
    ui->lineEdit_StopLinear->setValidator(m_pCustomFloatingPointValidator.get());
    ui->lineEdit_StepLinear->setValidator(m_pCustomFloatingPointValidator.get());
    ui->lineEdit_MultiplierSine->setValidator(m_pCustomFloatingPointValidator.get());
    ui->lineEdit_CustomPacketPayload->setValidator(m_pCustomFloatingPointValidator.get());
}

void MainWindow::fullPacketReceived(QByteArray & receivedBytes)
{
    qDebug("FULL PACKET RECEIVED");

    UartPacket uartPacket(reinterpret_cast<const uint8_t*>(receivedBytes.constData()));

    qDebug("Received Packet is: %.16s", receivedBytes.constData());

    uint8_t uartReceivedPacket[PACKET_SIZE] = {0};

    for(int i=0; i<PACKET_SIZE; i++)
    {
        uartReceivedPacket[i] = receivedBytes.at(i);
    }

    if(checkCrc32(uartReceivedPacket) == false)
    {
        qDebug("CRC1: %d", uartReceivedPacket[16]);
        qDebug("CRC2: %d", uartReceivedPacket[17]);
        qDebug("CRC3: %d", uartReceivedPacket[18]);
        qDebug("CRC4: %d", uartReceivedPacket[19]);

        QMessageBox::warning(this, "Bad CRC", "Received packet discarded. It has wrong CRC checksum.");
        return;
    }

    m_pTableView->updatePacket(uartReceivedPacket, true);

    QCoreApplication::processEvents();

    Module* p_CurrentModule = nullptr;

    ModuleID moduleID = uartPacket.getModule();

    if(moduleID == ModuleID::MODULE1)
    {
        qDebug() << "Module 1";
        p_CurrentModule = m_pModule1.get();
    }
    else if(moduleID == ModuleID::MODULE2)
    {
        qDebug() << "Module 2";
        p_CurrentModule = m_pModule2.get();
    }
    else if(moduleID == ModuleID::MODULE3)
    {
        qDebug() << "Module 3";
        p_CurrentModule = m_pModule3.get();
    }
    else
    {
        QMessageBox::warning(this, "Incorrect packet", "Wrong module field in received packet. Packet discarded");
        return;
    }

    Function function = uartPacket.getFunction();
    Parameter parameter = uartPacket.getParameter();

    double valueDouble = 0;

    switch(function)
    {
    case Function::DATA_PACKET:
        qDebug() << "Data transfer packet";
        break;

    case Function::ENABLE_PARAMETER_PACKET:
        qDebug() << "Enable parameter";

        p_CurrentModule->enableParameter(parameter);

        break;

    case Function::DISABLE_PARAMETER_PACKET:
        qDebug() << "Disable parameter";

        p_CurrentModule->disableParameter(parameter);

        break;

    case Function::SET_PARAMETER_PACKET:
        qDebug() << "Set parameter";

        valueDouble = double(std::stof((char*)(uartPacket.getPayload())));

        if(uartPacket.getSign() == Sign::NEGATIVE_SIGN)
        {
            /*Make value negative if it was marked as negative in UART Packet*/
            valueDouble = valueDouble * (-1);
        }

        p_CurrentModule->setParameter(parameter,valueDouble);

        break;

    default:
        char wrongValue = char(function);

        QString errorMessage = QString("Wrong function field in received packet. Value: ") + QString(wrongValue);

        QMessageBox::warning(this, "Incorrect packet", errorMessage);
    }

    updateGUI();
}

void MainWindow::initConnectionModule(ModuleID module)
{
    UartPacket uartPacket[INIT_PACKETS_COUNT];

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    for(int i = 0; i < INIT_PACKETS_COUNT; i++)
    {
        uartPacket[i].setSource(Source::SOURCE_TARGET1);
        uartPacket[i].setModule(module);
        uartPacket[i].setFunction(Function::INIT_PACKET);
        uartPacket[i].setParameter(Parameter::NULL_PARAMETER);
        uartPacket[i].setSign(Sign::POSITIVE_SIGN);
    }

    QString initInfoValuesModule1[INIT_PACKETS_COUNT] = {ui->label_Module1InitParameter1Name->text(),
                                                         ui->label_Module1InitParameter2Name->text(),
                                                         ui->label_Module1InitParameter3Name->text(),
                                                         ui->label_Module1InitParameter4Name->text(),
                                                         ui->label_Module1InitParameter5Name->text(),
                                                         ui->lineEdit_Module1InitParameter1Value->text(),
                                                         ui->lineEdit_Module1InitParameter2Value->text(),
                                                         ui->lineEdit_Module1InitParameter3Value->text(),
                                                         ui->lineEdit_Module1InitParameter4Value->text(),
                                                         ui->lineEdit_Module1InitParameter5Value->text(),
                                                         ui->lineEdit_Module1Parameter1Name->text(),
                                                         ui->lineEdit_Module1Parameter2Name->text(),
                                                         ui->lineEdit_Module1Parameter3Name->text(),
                                                         ui->lineEdit_Module1Parameter4Name->text(),
                                                         ui->label_Module1_SettableParameter1Name->text(),
                                                         ui->label_Module1_SettableParameter2Name->text(),
                                                         ui->label_Module1_SettableParameter3Name->text(),
                                                         ui->label_Module1_SettableParameter4Name->text(),
                                                         ui->label_Module1_SettableParameter5Name->text(),
                                                         ui->label_Module1_SettableParameter6Name->text(),
                                                         ui->label_Module1_SettableParameter7Name->text(),
                                                         ui->label_Module1_SettableParameter8Name->text(),
                                                         ui->label_Module1_SettableParameter9Name->text(),
                                                         ui->label_Module1_SettableParameter10Name->text()
                                                        };

    for(auto value : initInfoValuesModule1)
    {
        if(value.size() > 10)
        {
            QMessageBox::warning(this, "Warning", "Module 1 initialization parameter value is too long,"
                                                  " maximum allowed length is 10. Aborting module initialization");
            return;
        }
    }

    QString initInfoValuesModule2[INIT_PACKETS_COUNT] = {ui->label_Module2InitParameter1Name->text(),
                                                         ui->label_Module2InitParameter2Name->text(),
                                                         ui->label_Module2InitParameter3Name->text(),
                                                         ui->label_Module2InitParameter4Name->text(),
                                                         ui->label_Module2InitParameter5Name->text(),
                                                         ui->lineEdit_Module2InitParameter1Value->text(),
                                                         ui->lineEdit_Module2InitParameter2Value->text(),
                                                         ui->lineEdit_Module2InitParameter3Value->text(),
                                                         ui->lineEdit_Module2InitParameter4Value->text(),
                                                         ui->lineEdit_Module2InitParameter5Value->text(),
                                                         ui->lineEdit_Module2Parameter1Name->text(),
                                                         ui->lineEdit_Module2Parameter2Name->text(),
                                                         ui->lineEdit_Module2Parameter3Name->text(),
                                                         ui->lineEdit_Module2Parameter4Name->text(),
                                                         ui->label_Module2_SettableParameter1Name->text(),
                                                         ui->label_Module2_SettableParameter2Name->text(),
                                                         ui->label_Module2_SettableParameter3Name->text(),
                                                         ui->label_Module2_SettableParameter4Name->text(),
                                                         ui->label_Module2_SettableParameter5Name->text(),
                                                         ui->label_Module2_SettableParameter6Name->text(),
                                                         ui->label_Module2_SettableParameter7Name->text(),
                                                         ui->label_Module2_SettableParameter8Name->text(),
                                                         ui->label_Module2_SettableParameter9Name->text(),
                                                         ui->label_Module2_SettableParameter10Name->text()
                                                        };

    for(auto value : initInfoValuesModule2)
    {
        if(value.size() > 10)
        {
            QMessageBox::warning(this, "Warning", "Module 2 initialization parameter value is too long,"
                                                  " maximum allowed length is 10. Aborting module initialization");
            return;
        }
    }

    QString initInfoValuesModule3[INIT_PACKETS_COUNT] = {ui->label_Module3InitParameter1Name->text(),
                                                         ui->label_Module3InitParameter2Name->text(),
                                                         ui->label_Module3InitParameter3Name->text(),
                                                         ui->label_Module3InitParameter4Name->text(),
                                                         ui->label_Module3InitParameter5Name->text(),
                                                         ui->lineEdit_Module3InitParameter1Value->text(),
                                                         ui->lineEdit_Module3InitParameter2Value->text(),
                                                         ui->lineEdit_Module3InitParameter3Value->text(),
                                                         ui->lineEdit_Module3InitParameter4Value->text(),
                                                         ui->lineEdit_Module3InitParameter5Value->text(),
                                                         ui->lineEdit_Module3Parameter1Name->text(),
                                                         ui->lineEdit_Module3Parameter2Name->text(),
                                                         ui->lineEdit_Module3Parameter3Name->text(),
                                                         ui->lineEdit_Module3Parameter4Name->text(),
                                                         ui->label_Module3_SettableParameter1Name->text(),
                                                         ui->label_Module3_SettableParameter2Name->text(),
                                                         ui->label_Module3_SettableParameter3Name->text(),
                                                         ui->label_Module3_SettableParameter4Name->text(),
                                                         ui->label_Module3_SettableParameter5Name->text(),
                                                         ui->label_Module3_SettableParameter6Name->text(),
                                                         ui->label_Module3_SettableParameter7Name->text(),
                                                         ui->label_Module3_SettableParameter8Name->text(),
                                                         ui->label_Module3_SettableParameter9Name->text(),
                                                         ui->label_Module3_SettableParameter10Name->text()
                                                        };

    for(auto value : initInfoValuesModule3)
    {
        if(value.size() > 10)
        {
            QMessageBox::warning(this, "Warning", "Module 3 initialization parameter value is too long,"
                                                  " maximum allowed length is 10. Aborting module initialization");
            return;
        }
    }

    uint8_t lengthInt;

    for(int i = 0; i < INIT_PACKETS_COUNT; i++)
    {
        if(module == ModuleID::MODULE1)
        {
            sprintf((char*)uartPacket[i].getPayload(), "%s", initInfoValuesModule1[i].toStdString().c_str());
        }
        else if(module == ModuleID::MODULE2)
        {
            sprintf((char*)uartPacket[i].getPayload(), "%s", initInfoValuesModule2[i].toStdString().c_str());
        }
        else if(module == ModuleID::MODULE3)
        {
            sprintf((char*)uartPacket[i].getPayload(), "%s", initInfoValuesModule3[i].toStdString().c_str());
        }

        lengthInt = strlen((char*)uartPacket[i].getPayload());

        uartPacket[i].setLengthAscii(lengthInt); // convert from int to ASCII

        uartPacket[i].convertToUartPacketTable(uartPacketTable);

        appendCrcToPacketTable(uartPacketTable);

        qDebug("Init Packet is: %s", uartPacketTable);

        m_pTableView->updatePacket(uartPacketTable, false);

        m_pSerial->sendPacket(uartPacketTable);

        Sleep(uint(20));

        QCoreApplication::processEvents();
    }
}

void MainWindow::deinitConnectionModule(ModuleID module)
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(Source::SOURCE_TARGET1);

    uartPacket.setModule(module);
    uartPacket.setFunction(Function::DEINIT_PACKET);
    uartPacket.setSign(Sign::POSITIVE_SIGN);
    uartPacket.setParameter(Parameter::NULL_PARAMETER);
    uartPacket.setLength(Length::NO_PAYLOAD);

    uartPacket.convertToUartPacketTable(uartPacketTable);

    appendCrcToPacketTable(uartPacketTable);

    qDebug("Deinit Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::setRangeMinimum()
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(Source::SOURCE_TARGET1);
    uartPacket.setModule(ui->comboBox_GraphModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(Function::SET_GRAPH_RANGE_MIN);
    uartPacket.setParameter(Parameter::NULL_PARAMETER);

    QString enteredPayload = ui->lineEdit_RangeMinimum->text();

    if(enteredPayload.isEmpty())
    {
        return;
    }

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        uartPacket.setSign(Sign::NEGATIVE_SIGN);

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        uartPacket.setSign(Sign::POSITIVE_SIGN);
    }

    int lengthInt = enteredPayload.length();

    uartPacket.setLengthAscii(lengthInt);

    for(int i=0; i<lengthInt;i++)
    {
        uartPacket.getPayload()[i] = enteredPayload.at(i).toLatin1();
    }

    uartPacket.convertToUartPacketTable(uartPacketTable);
    appendCrcToPacketTable(uartPacketTable);

    qDebug("Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::setRangeMaximum()
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(Source::SOURCE_TARGET1);
    uartPacket.setModule(ui->comboBox_GraphModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(Function::SET_GRAPH_RANGE_MAX);
    uartPacket.setParameter(Parameter::NULL_PARAMETER);

    QString enteredPayload = ui->lineEdit_RangeMaximum->text();

    if(enteredPayload.isEmpty())
    {
        return;
    }

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        uartPacket.setSign(Sign::NEGATIVE_SIGN);

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        uartPacket.setSign(Sign::POSITIVE_SIGN);
    }

    int lengthInt = enteredPayload.length();

    uartPacket.setLengthAscii(lengthInt);

    for(int i=0; i<lengthInt;i++)
    {
        uartPacket.getPayload()[i] = enteredPayload.at(i).toLatin1();
    }

    uartPacket.convertToUartPacketTable(uartPacketTable);
    appendCrcToPacketTable(uartPacketTable);

    qDebug("Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::setRangeTime()
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(Source::SOURCE_TARGET1);
    uartPacket.setModule(ui->comboBox_GraphModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(Function::SET_GRAPH_TIME_RANGE);
    uartPacket.setParameter(Parameter::NULL_PARAMETER);

    QString enteredPayload = ui->comboBox_TimeRange->currentText();

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        uartPacket.setSign(Sign::NEGATIVE_SIGN);

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        uartPacket.setSign(Sign::POSITIVE_SIGN);
    }

    int lengthInt = enteredPayload.length();

    uartPacket.setLengthAscii(lengthInt);

    for(int i=0; i<lengthInt;i++)
    {
        uartPacket.getPayload()[i] = enteredPayload.at(i).toLatin1();
    }

    uartPacket.convertToUartPacketTable(uartPacketTable);
    appendCrcToPacketTable(uartPacketTable);

    qDebug("Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::sendCustomDataPacket()
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(ui->comboBox_CustomPacketSource->currentText().at(0).toLatin1());
    uartPacket.setModule(ui->comboBox_CustomPacketModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(ui->comboBox_CustomPacketFunction->currentText().at(0).toLatin1());
    uartPacket.setParameter(ui->comboBox_CustomPacketParameter->currentText().at(0).toLatin1());

    QString enteredPayload = ui->lineEdit_CustomPacketPayload->text();

    if(enteredPayload.isEmpty())
    {
        return;
    }

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        ui->lineEdit_CustomPacketSign->setText("2");
        uartPacket.setSign(Sign::NEGATIVE_SIGN);

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        ui->lineEdit_CustomPacketSign->setText("1");
        uartPacket.setSign(Sign::POSITIVE_SIGN);
    }

    int lengthInt = enteredPayload.length();

    uartPacket.setLengthAscii(lengthInt); //convert int to ascii representation of the int

    for(int i=0; i<lengthInt;i++)
    {
        uartPacket.getPayload()[i] = enteredPayload.at(i).toLatin1();
    }

    ui->lineEdit_CustomPacketLength->setText(QString::number(lengthInt));

    uartPacket.convertToUartPacketTable(uartPacketTable);
    appendCrcToPacketTable(uartPacketTable);

    qDebug("Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::sendWrongCrcDataPacket()
{
    UartPacket uartPacket;

    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.setSource(ui->comboBox_CustomPacketSource->currentText().at(0).toLatin1());
    uartPacket.setModule(ui->comboBox_CustomPacketModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(ui->comboBox_CustomPacketFunction->currentText().at(0).toLatin1());
    uartPacket.setParameter(ui->comboBox_CustomPacketParameter->currentText().at(0).toLatin1());
    uartPacket.setLength(Length::NO_PAYLOAD);
    uartPacket.setSign(Sign::POSITIVE_SIGN);

    uartPacket.convertToUartPacketTable(uartPacketTable);

    /*Set wrong all zeros CRC*/
    uartPacketTable[19] = 0;
    uartPacketTable[18] = 0;
    uartPacketTable[17] = 0;
    uartPacketTable[16] = 0;

    qDebug("Wrong Crc Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);
}

void MainWindow::generateLinearGraph(int signalCount)
{
    UartPacket uartPacket;

    QString strStartValue = ui->lineEdit_StartLinear->text();
    QString strStopValue = ui->lineEdit_StopLinear->text();
    QString strStepValue = ui->lineEdit_StepLinear->text();

    if(strStartValue.isEmpty() || strStopValue.isEmpty() || strStepValue.isEmpty())
    {
        return;
    }

    double startValue = strStartValue.toDouble();
    double stopValue = strStopValue.toDouble();
    double stepValue = strStepValue.toDouble();

    if(startValue > stopValue)
    {
        QMessageBox::warning(this, "Warning", "Start values is higher than stop value, aborting");
        return;
    }

    if(stepValue < 0)
    {
        QMessageBox::warning(this, "Warning", "Negative step value not supported, aborting");
        return;
    }

    uartPacket.setSource(Source::SOURCE_TARGET1);
    uartPacket.setModule(ui->comboBox_GraphModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(Function::DATA_PACKET);

    int lengthInt;
    double value;

    uint8_t parameters[4] = {'b', 'c', 'd', 'e'};

    for(double x = startValue; x < stopValue; x = x + stepValue)
    {
        for(int signalNumber = 0; signalNumber < signalCount; signalNumber++)
        {
            uartPacket.setParameter(parameters[signalNumber]); // send with one of 4 parameters

            value = x;

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART packet*/
                value = value * (-1);
                uartPacket.setSign(Sign::NEGATIVE_SIGN);
            }
            else
            {
                uartPacket.setSign(Sign::POSITIVE_SIGN);
            }

            /*Change parameter values so that graph lines do not overlap each other*/
            switch(signalNumber)
            {
            case 1:
                value = value * 0.75;
                break;
            case 2:
                value = value * 0.5;
                break;
            case 3:
                value = value * 0.25;
                break;
            }

            sprintf((char*)uartPacket.getPayload(), "%.3lf", value);

            lengthInt = strlen((char*)uartPacket.getPayload());

            uartPacket.setLengthAscii(lengthInt);

            sendGraphPacket(uartPacket);
        }

        if (m_stopPressed)
        {
            qDebug("STOP PRESSED");
            m_stopPressed = false;
            return;
        }

        QCoreApplication::processEvents();
    }
}

void MainWindow::generateSineGraph(int signalCount)
{
    UartPacket uartPacket;

    QString strStartDegrees = ui->lineEdit_StartDegrees->text();
    QString strStopDegrees = ui->lineEdit_StopDegrees->text();
    QString strMultiplierSine = ui->lineEdit_MultiplierSine->text();

    if(strStartDegrees.isEmpty() || strStopDegrees.isEmpty() || strMultiplierSine.isEmpty())
    {
        return;
    }

    int startDegrees = strStartDegrees.toInt();
    int stopDegrees = strStopDegrees.toInt();
    double multiplierSine = strMultiplierSine.toDouble();

    if(strStartDegrees > strStopDegrees)
    {
        QMessageBox::warning(this, "Warning", "Start values is higher than stop value, aborting");
        return;
    }

    uartPacket.setSource(Source::SOURCE_TARGET1);
    uartPacket.setModule(ui->comboBox_GraphModule->currentText().at(0).toLatin1());
    uartPacket.setFunction(Function::DATA_PACKET);

    int lengthInt;
    double value;
    uint8_t parameters[4] = {'b', 'c', 'd', 'e'};

    constexpr double radianInverse = 3.14159/180;

    int phaseShift[4] = {0, 120, 240, 360};

    for(int x = startDegrees; x < stopDegrees; x++)
    {
        for(int signalNumber = 0; signalNumber < signalCount; signalNumber++)
        {
            uartPacket.setParameter(parameters[signalNumber]); // send with one of 4 parameters

            /*Multiply by radian inverse to get rid of radian unit and calculate sine of x measured in degrees*/
            value = multiplierSine * (sin(x * radianInverse + phaseShift[signalNumber]));

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART packet*/
                value = value * (-1);
                uartPacket.setSign(Sign::NEGATIVE_SIGN);
            }
            else
            {
                uartPacket.setSign(Sign::POSITIVE_SIGN);
            }

            sprintf((char*)uartPacket.getPayload(), "%.3lf", value);

            lengthInt = strlen((char*)uartPacket.getPayload());

            uartPacket.setLengthAscii(lengthInt);

            sendGraphPacket(uartPacket);
        }

        if (m_stopPressed)
        {
            qDebug("STOP PRESSED");
            m_stopPressed = false;
            return;
        }

        QCoreApplication::processEvents();
    }
}

void MainWindow::sendGraphPacket(UartPacket uartPacket)
{
    uint8_t uartPacketTable[PACKET_SIZE] = {0};

    uartPacket.convertToUartPacketTable(uartPacketTable);
    appendCrcToPacketTable(uartPacketTable);

    qDebug("Data Packet is: %s", uartPacketTable);

    m_pTableView->updatePacket(uartPacketTable, false);

    m_pSerial->sendPacket(uartPacketTable);

    Sleep(uint(20));
}

void MainWindow::updateGUI()
{
    QWidget* module1ParameterStateLabelsTable[10];
    QWidget* module2ParameterStateLabelsTable[10];
    QWidget* module3ParameterStateLabelsTable[10];
    QWidget* module1ParameterValueLabelsTable[10];
    QWidget* module2ParameterValueLabelsTable[10];
    QWidget* module3ParameterValueLabelsTable[10];

    for(int i = 0; i<10; i++)
    {
        module1ParameterStateLabelsTable[i] = ui->Module1ParameterStates->itemAt(i)->widget();
        module2ParameterStateLabelsTable[i] = ui->Module2ParameterStates->itemAt(i)->widget();
        module3ParameterStateLabelsTable[i] = ui->Module3ParameterStates->itemAt(i)->widget();
        module1ParameterValueLabelsTable[i] = ui->ValuesModule1Parameters->itemAt(i)->widget();
        module2ParameterValueLabelsTable[i] = ui->ValuesModule2Parameters->itemAt(i)->widget();
        module3ParameterValueLabelsTable[i] = ui->ValuesModule3Parameters->itemAt(i)->widget();
    }

    for(int i = 0; i<10; i++)
    {
        if((m_pModule1->getParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        if((m_pModule2->getParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        if((m_pModule3->getParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module3ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module3ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        dynamic_cast<QLCDNumber*>(*(module1ParameterValueLabelsTable + i))->display((m_pModule1->getParameterValuesTable())[i]);
        dynamic_cast<QLCDNumber*>(*(module2ParameterValueLabelsTable + i))->display((m_pModule2->getParameterValuesTable())[i]);
        dynamic_cast<QLCDNumber*>(*(module3ParameterValueLabelsTable + i))->display((m_pModule3->getParameterValuesTable())[i]);
    }
}

/*Slot*/
void MainWindow::serialDataReceived()
{
    static QByteArray receivedBytes;

    receivedBytes += m_pSerial->readAll();

    if(receivedBytes.size() >= PACKET_SIZE)
    {
        fullPacketReceived(receivedBytes);
        receivedBytes.clear();
    }
}

/*Button slots*/
void MainWindow::on_pushButton_Open_clicked()
{
    InitParametersTxtLoader initParametersTxtLoader(ui);

    if(initParametersTxtLoader.initModuleParametersList() == false)
    {
        QMessageBox::warning(this, ".txt load error", "Parameters text file could not be opened");
        return;
    }

    m_pSerial->openPort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Close_clicked()
{
    m_pSerial->closePort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Send_pressed()
{
    sendCustomDataPacket();
}

void MainWindow::on_pushButton_InitConnectionModule1_clicked()
{
    initConnectionModule(ModuleID::MODULE1);
}

void MainWindow::on_pushButton_InitConnectionModule2_clicked()
{
    initConnectionModule(ModuleID::MODULE2);
}

void MainWindow::on_pushButton_InitConnectionModule3_clicked()
{
    initConnectionModule(ModuleID::MODULE3);
}

void MainWindow::on_pushButton_DeinitConnectionModule1_clicked()
{
    deinitConnectionModule(ModuleID::MODULE1);
}

void MainWindow::on_pushButton_DeinitConnectionModule2_clicked()
{
    deinitConnectionModule(ModuleID::MODULE2);
}

void MainWindow::on_pushButton_DeinitConnectionModule3_clicked()
{
    deinitConnectionModule(ModuleID::MODULE3);
}

void MainWindow::on_pushButton_StartLinear_clicked()
{
    char signalCount = ui->comboBox_GraphSignalCount->currentText().at(0).toLatin1();

    switch(signalCount)
    {
    case '1':
        generateLinearGraph(1);
        break;
    case '2':
        generateLinearGraph(2);
        break;
    case '3':
        generateLinearGraph(3);
        break;
    case '4':
        generateLinearGraph(4);
        break;
    default:
        qDebug("Unsupported ammount of linear signals");
    }
}

void MainWindow::on_pushButton_StartSine_clicked()
{
    char signalCount = ui->comboBox_GraphSignalCount->currentText().at(0).toLatin1();

    switch(signalCount)
    {
    case '1':
        generateSineGraph(1);
        break;
    case '2':
        generateSineGraph(2);
        break;
    case '3':
        generateSineGraph(3);
        break;
    case '4':
        generateSineGraph(4);
        break;
    default:
        qDebug("Unsupported ammount of sine signals");
    }
}

void MainWindow::on_pushButton_Stop_clicked()
{
    m_stopPressed = true;
}

void MainWindow::on_pushButton_SendWrongCrcPacket_clicked()
{
    sendWrongCrcDataPacket();
}

void MainWindow::on_pushButton_SetRanges_clicked()
{
    setRangeMinimum();
    Sleep(100);
    setRangeMaximum();
    Sleep(100);
    setRangeTime();
}

void MainWindow::on_pushButton_ClearTable_clicked()
{
    m_pTableView->clearPacketDisplay();
}
