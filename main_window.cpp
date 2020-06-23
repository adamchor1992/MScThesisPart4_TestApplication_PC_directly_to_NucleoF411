#include "main_window.h"
#include "ui_main_window.h"
#include "packet_field_definitions.h"
#include <QSerialPortInfo>
#include <QMessageBox>
#include "init_parameters_xml_loader.h"
#include <cmath> //for sin()
#include "windows.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), m_Serial(ui)
{
    ui->setupUi(this);

    m_Serial.InitPortList();

    m_pTableView = std::make_unique<TableView>(ui);

    //connect(&m_Serial, &Serial::FullPacketReceived, this, &MainWindow::ProcessReceivedPacket);

    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*Slot*/
void MainWindow::ProcessReceivedPacket(QByteArray& receivedBytes)
{
    qDebug() << "Processing received packet";

    UartPacket uartPacket(reinterpret_cast<const uint8_t*>(receivedBytes.constData()));

    uint8_t uartReceivedPacket[PACKET_SIZE] = {0};

    for(int i=0; i<PACKET_SIZE; i++)
    {
        uartReceivedPacket[i] = static_cast<uint8_t>(receivedBytes.at(i));
    }

    if(uartPacket.CheckCrc32() == true)
    {
        m_pTableView->UpdatePacketDisplay(uartReceivedPacket, true, true);
    }
    else
    {
        m_pTableView->UpdatePacketDisplay(uartReceivedPacket, true, false);

        qDebug("Wrong CRC, packet discarded");

        return;
    }

    QCoreApplication::processEvents();

    Module* p_CurrentModule = nullptr;

    ModuleID moduleID = uartPacket.GetModule();

    if(moduleID == ModuleID::MODULE1)
    {
        qDebug() << "Module 1";
        p_CurrentModule = &m_Module1;
    }
    else if(moduleID == ModuleID::MODULE2)
    {
        qDebug() << "Module 2";
        p_CurrentModule = &m_Module2;
    }
    else if(moduleID == ModuleID::MODULE3)
    {
        qDebug() << "Module 3";
        p_CurrentModule = &m_Module3;
    }
    else
    {
        qDebug() << "ERROR - Incorrect received packet - Wrong module field in received packet. Packet discarded";
        return;
    }

    Function function = uartPacket.GetFunction();
    Parameter parameter = uartPacket.GetParameter();

    double valueDouble = 0;

    switch(function)
    {
    case Function::DATA_PACKET:
        qDebug() << "Data transfer packet";
        break;

    case Function::ENABLE_PARAMETER_PACKET:
        qDebug() << "Enable parameter";

        p_CurrentModule->EnableParameter(parameter);

        break;

    case Function::DISABLE_PARAMETER_PACKET:
        qDebug() << "Disable parameter";

        p_CurrentModule->DisableParameter(parameter);

        break;

    case Function::SET_PARAMETER_PACKET:
        qDebug() << "Set parameter";

        try
    {
        /*Try to convert packet payload to real number*/
        valueDouble = std::stod(reinterpret_cast<const char*>(uartPacket.GetPayload()));
    }
        catch (std::invalid_argument)
        {
            QMessageBox::warning(this, "ERROR", "Packet payload could not be converted to number, aborting");
            return;
        }

        if(uartPacket.GetSign() == Sign::NEGATIVE_SIGN)
        {
            /*Make value negative if it was marked as negative in UART Packet*/
            valueDouble = valueDouble * (-1);
        }

        p_CurrentModule->SetParameter(parameter,valueDouble);

        break;

    default:
        qDebug() << "ERROR - Incorrect received packet - Wrong function type";
    }

    UpdateGUI();
}

void MainWindow::InitConnectionModule(ModuleID module)
{
    qDebug("InitConnectionModule");

    SendString("#InitModule", QString(static_cast<int>(module)));
}

void MainWindow::DeinitConnectionModule(ModuleID module)
{
    qDebug("DeinitConnectionModule");

    SendString("#DeinitModule", QString(static_cast<int>(module)));
}

void MainWindow::SetRangeMinimum()
{
    QString module = ui->comboBox_GraphModule->currentText();
    QString enteredMinimumRange = ui->lineEdit_RangeMinimum->text();

    if(!ValidateIntegerInput(enteredMinimumRange, "SetRangeMinimum"))
    {
        return;
    }

    SendString("#SetGraphMin", module, enteredMinimumRange);
}

void MainWindow::SetRangeMaximum()
{
    QString module = ui->comboBox_GraphModule->currentText();
    QString enteredMaximumRange = ui->lineEdit_RangeMaximum->text();

    if(!ValidateIntegerInput(enteredMaximumRange, "SetRangeMaximum"))
    {
        return;
    }

    SendString("#SetGraphMax", module, enteredMaximumRange);
}

void MainWindow::SetRangeTime()
{
    QString module = ui->comboBox_GraphModule->currentText();
    QString enteredTimeRangeString = ui->comboBox_TimeRange->currentText();

    if(!ValidateIntegerInput(enteredTimeRangeString, "SetRangeTime"))
    {
        return;
    }

    SendString("#SetGraphTime", module, enteredTimeRangeString);
}

void MainWindow::GraphLinear()
{
    QString strModule= ui->comboBox_GraphModule->currentText();
    QString strSignalCount = ui->comboBox_GraphSignalCount->currentText();
    QString strStartValue = ui->lineEdit_LinearStart->text();
    QString strStopValue = ui->lineEdit_LinearStop->text();
    QString strStepValue = ui->lineEdit_LinearStep->text();

    QString functionName = "GraphLinear";

    if(!ValidateFloatingPointInput(strStartValue, functionName) ||
            !ValidateFloatingPointInput(strStopValue, functionName) ||
            !ValidateFloatingPointInput(strStepValue, functionName))
    {
        return;
    }

    double startValue = strStartValue.toDouble();
    double stopValue = strStopValue.toDouble();
    double stepValue = strStepValue.toDouble();

    if(startValue >= stopValue)
    {
        QMessageBox::warning(this, "ERROR", "GenerateLinearGraph: Start values is higher than or equal to stop value, aborting");
        return;
    }

    if(stepValue < 0)
    {
        QMessageBox::warning(this, "ERROR", "GenerateLinearGraph: Negative step value not supported, aborting");
        return;
    }

    SendString("#GraphLinear", strModule, strSignalCount, strStartValue, strStopValue, strStepValue);
}

void MainWindow::GraphSine()
{
    QString strModule= ui->comboBox_GraphModule->currentText();
    QString strSignalCount = ui->comboBox_GraphSignalCount->currentText();
    QString strStartDegrees = ui->lineEdit_SineStartDegrees->text();
    QString strStopDegrees = ui->lineEdit_SineStopDegrees->text();
    QString strAmplitude = ui->lineEdit_SineAmplitude->text();

    QString functionName = "GenerateSineGraph";

    if(!ValidateIntegerInput(strStartDegrees, functionName) ||
            !ValidateIntegerInput(strStopDegrees, functionName) ||
            !ValidateFloatingPointInput(strAmplitude, functionName))
    {
        return;
    }

    int startDegrees = strStartDegrees.toInt();
    int stopDegrees = strStopDegrees.toInt();
    double amplitude = strAmplitude.toDouble();

    if(startDegrees > stopDegrees)
    {
        QMessageBox::warning(this, "ERROR", "GenerateSineGraph: Start values is higher than stop value, aborting");
        return;
    }

    if(amplitude <= 0)
    {
        QMessageBox::warning(this, "ERROR", "GenerateSineGraph: Amplitude cannot be less than or equal 0, aborting");
        return;
    }

    SendString("#GraphSine", strModule, strSignalCount, strStartDegrees, strStopDegrees, strAmplitude);
}

void MainWindow::GraphSquare()
{
    QString strModule= ui->comboBox_GraphModule->currentText();
    QString strSignalCount = ui->comboBox_GraphSignalCount->currentText();
    QString strStartValue = ui->lineEdit_SquareStart->text();
    QString strStopValue = ui->lineEdit_SquareStop->text();
    QString strAmplitude = ui->lineEdit_SquareAmplitude->text();
    QString strPeriod = ui->lineEdit_SquarePeriod->text();

    QString functionName = "GenerateSquareGraph";

    if(!ValidateIntegerInput(strStartValue, functionName) ||
            !ValidateIntegerInput(strStopValue, functionName) ||
            !ValidateFloatingPointInput(strAmplitude, functionName) ||
            !ValidateIntegerInput(strPeriod, functionName))
    {
        return;
    }

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();
    double amplitude = strAmplitude.toDouble();
    int period = strPeriod.toInt();

    if(startValue > stopValue)
    {
        QMessageBox::warning(this, "ERROR", "GenerateSquareGraph: Start values is higher than stop value, aborting");
        return;
    }

    if(amplitude <= 0)
    {
        QMessageBox::warning(this, "ERROR", "GenerateSquareGraph: Amplitude cannot be less than or equal 0, aborting");
        return;
    }

    if(period < 1)
    {
        QMessageBox::warning(this, "ERROR", "GenerateSquareGraph: Period cannot be less than 1, aborting");
        return;
    }

    SendString("#GraphSquare", strModule, strSignalCount, strStartValue, strStopValue, strAmplitude, strPeriod);
}

void MainWindow::StopGraph()
{
    SendString("#StopGraph");
}

void MainWindow::SendCustomPacket()
{    
    QString module = ui->comboBox_CustomPacketModule->currentText();
    QString parameter = ui->comboBox_CustomPacketParameter->currentText();
    QString enteredPayload = ui->lineEdit_CustomPacketPayload->text();

    if(!ValidateFloatingPointInput(enteredPayload, "SendCustomPacket"))
    {
        return;
    }

    SendString("#SendPacket",
               module,
               parameter,
               enteredPayload);
}

void MainWindow::SendWrongCrcDataPacket()
{
    SendString("#SendWrongCrc");
}

void MainWindow::UpdateGUI()
{
    QWidget* module1ParameterStateLabelsTable[PAYLOAD_SIZE];
    QWidget* module2ParameterStateLabelsTable[PAYLOAD_SIZE];
    QWidget* module3ParameterStateLabelsTable[PAYLOAD_SIZE];
    QWidget* module1ParameterValueLabelsTable[PAYLOAD_SIZE];
    QWidget* module2ParameterValueLabelsTable[PAYLOAD_SIZE];
    QWidget* module3ParameterValueLabelsTable[PAYLOAD_SIZE];

    for(int i = 0; i<PAYLOAD_SIZE; i++)
    {
        module1ParameterStateLabelsTable[i] = ui->Module1ParameterStates->itemAt(i)->widget();
        module2ParameterStateLabelsTable[i] = ui->Module2ParameterStates->itemAt(i)->widget();
        module3ParameterStateLabelsTable[i] = ui->Module3ParameterStates->itemAt(i)->widget();
        module1ParameterValueLabelsTable[i] = ui->ValuesModule1Parameters->itemAt(i)->widget();
        module2ParameterValueLabelsTable[i] = ui->ValuesModule2Parameters->itemAt(i)->widget();
        module3ParameterValueLabelsTable[i] = ui->ValuesModule3Parameters->itemAt(i)->widget();
    }

    for(int i = 0; i<PAYLOAD_SIZE; i++)
    {
        if((m_Module1.GetParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        if((m_Module2.GetParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        if((m_Module3.GetParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module3ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module3ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        dynamic_cast<QLCDNumber*>(*(module1ParameterValueLabelsTable + i))->display((m_Module1.GetParameterValuesTable())[i]);
        dynamic_cast<QLCDNumber*>(*(module2ParameterValueLabelsTable + i))->display((m_Module2.GetParameterValuesTable())[i]);
        dynamic_cast<QLCDNumber*>(*(module3ParameterValueLabelsTable + i))->display((m_Module3.GetParameterValuesTable())[i]);
    }
}

/*Button slots*/
void MainWindow::on_pushButton_Open_clicked()
{
    InitParametersXmlLoader initParametersXmlLoader(ui);

    if(initParametersXmlLoader.InitModuleParametersList(m_Module1, m_Module2, m_Module3) == false)
    {
        QMessageBox::warning(this, ".xml load error", "Error, parameters list could not be read from XML");
        return;
    }

    m_Serial.OpenPort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Close_clicked()
{
    m_Serial.ClosePort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Send_pressed()
{
    SendCustomPacket();
}

void MainWindow::on_pushButton_InitConnectionModule1_clicked()
{
    InitConnectionModule(ModuleID::MODULE1);
}

void MainWindow::on_pushButton_InitConnectionModule2_clicked()
{
    InitConnectionModule(ModuleID::MODULE2);
}

void MainWindow::on_pushButton_InitConnectionModule3_clicked()
{
    InitConnectionModule(ModuleID::MODULE3);
}

void MainWindow::on_pushButton_DeinitConnectionModule1_clicked()
{
    DeinitConnectionModule(ModuleID::MODULE1);
}

void MainWindow::on_pushButton_DeinitConnectionModule2_clicked()
{
    DeinitConnectionModule(ModuleID::MODULE2);
}

void MainWindow::on_pushButton_DeinitConnectionModule3_clicked()
{
    DeinitConnectionModule(ModuleID::MODULE3);
}

void MainWindow::on_pushButton_StartLinear_clicked()
{
    GraphLinear();
}

void MainWindow::on_pushButton_StartSine_clicked()
{
    GraphSine();
}

void MainWindow::on_pushButton_StartSquare_clicked()
{
    GraphSquare();
}

void MainWindow::on_pushButton_Stop_clicked()
{
    StopGraph();
}

void MainWindow::on_pushButton_SendWrongCrcPacket_clicked()
{
    SendWrongCrcDataPacket();
}

void MainWindow::on_pushButton_SetRanges_clicked()
{
    QString rangeMinimumStr = ui->lineEdit_RangeMinimum->text();
    QString rangeMaximumStr = ui->lineEdit_RangeMaximum->text();

    QString functionName = "SetRanges";

    if(!ValidateIntegerInput(rangeMinimumStr, functionName) ||
            !ValidateIntegerInput(rangeMaximumStr, functionName))
    {
        return;
    }

    long long int rangeMinimumInt = rangeMinimumStr.toLongLong();
    long long int rangeMaximumInt = rangeMaximumStr.toLongLong();

    if(rangeMinimumInt >= rangeMaximumInt)
    {
        QMessageBox::warning(this, "Warning", "Minimum range value is higher than or equal to maximum range value, aborting");
        return;
    }

    SetRangeMinimum();
    Sleep(1000);
    SetRangeMaximum();
    Sleep(1000);
    SetRangeTime();
}

void MainWindow::on_pushButton_ClearTable_clicked()
{
    m_pTableView->ClearPacketDisplay();
}

bool MainWindow::ValidateFloatingPointInput(QString input, QString functionName)
{
    /*Remove sign*/
    if(input.at(0).toLatin1() == '-' || input.at(0).toLatin1() == '+')
    {
        input.remove(0,1);
    }

    if(input.size() > PAYLOAD_SIZE)
    {
        QString errorMessage = "Payload too long";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    if(input.isEmpty())
    {
        QString errorMessage = "Payload is empty";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    QString floatingPointPattern = "^(?!0\\d)(\\d{1,10})(\\.\\d{1,8})?$";
    QRegularExpression regExp(floatingPointPattern);

    if(!regExp.match(input).hasMatch())
    {
        QString errorMessage = "Regex does not match";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    bool conversionSuccessFlag = true;

    double numericValue = input.toDouble(&conversionSuccessFlag);

    //qDebug() << "Numeric value after conversion: " << numericValue;

    if(!conversionSuccessFlag)
    {
        QString errorMessage = "Input floating point numeric value is not convertable to numeric value";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    return true;
}

bool MainWindow::ValidateIntegerInput(QString input, QString functionName)
{
    /*Remove sign*/
    if(input.at(0).toLatin1() == '-' || input.at(0).toLatin1() == '+')
    {
        input.remove(0,1);
    }

    if(input.size() > PAYLOAD_SIZE)
    {
        QString errorMessage = "Payload too long";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    if(input.isEmpty())
    {
        QString errorMessage = "Payload is empty";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    QString integerPattern = "^(0|[1-9][0-9]{0,9})$";
    QRegularExpression regExp(integerPattern);

    if(!regExp.match(input).hasMatch())
    {
        QString errorMessage = "Regex does not match";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    bool conversionSuccessFlag = true;

    int numericValue = input.toLongLong(&conversionSuccessFlag);

    //qDebug() << "Numeric value after conversion: " << numericValue;

    if(!conversionSuccessFlag)
    {
        QString errorMessage = "Input numeric value is not convertable to numeric value";
        QMessageBox::warning(this, "VALIDATION ERROR", functionName + ": " + errorMessage);
        return false;
    }

    return true;
}

void MainWindow::SendString(QString command)
{
    SendString(command, "", "", "", "", "", "");
}

void MainWindow::SendString(QString command, QString arg1)
{
    SendString(command, arg1, "", "", "", "", "");
}

void MainWindow::SendString(QString command, QString arg1, QString arg2)
{
    SendString(command, arg1, arg2, "", "", "", "");
}

void MainWindow::SendString(QString command, QString arg1, QString arg2, QString arg3)
{
    SendString(command, arg1, arg2, arg3, "", "", "");
}

void MainWindow::SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4)
{
    SendString(command, arg1, arg2, arg3, arg4, "", "");
}

void MainWindow::SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4, QString arg5)
{
    SendString(command, arg1, arg2, arg3, arg4, arg5, "");
}

void MainWindow::SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4, QString arg5, QString arg6)
{
    QByteArray commandBuffer;

    commandBuffer.append(command);

    if(!arg1.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg1);
    }

    if(!arg2.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg2);
    }

    if(!arg3.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg3);
    }

    if(!arg4.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg4);
    }

    if(!arg5.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg5);
    }

    if(!arg6.isEmpty())
    {
        commandBuffer.append(",");
        commandBuffer.append(arg6);
    }

    if(commandBuffer.size() > 50)
    {
        assert(false);
    }

    while(commandBuffer.size() != COMMAND_LENGTH)
    {
        commandBuffer.append('\0');
    }

    qDebug() << "Full command size: " << commandBuffer.size();
    qDebug() << "Full command: " << commandBuffer;

    m_Serial.write(commandBuffer);

    m_Serial.waitForBytesWritten(1000);
}

//void MainWindow::on_pushButton_getparameters_clicked()
//{
//    SendString("#getparameters",
//               ui->tableWidget->item(6, 1)->text());
//}
