#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include "utilities.h"
#include "defines.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_serial = new QSerialPort(this);
    m_module1 = new Module;
    m_module2 = new Module;

    m_stopPressed = false;

    initPortList();

    connect(m_serial,SIGNAL(readyRead()), this, SLOT(serialDataReceived()));

    updateGUI();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_module1;
    delete m_module2;
    delete m_serial;
}

void MainWindow::fullFrameReceived(QByteArray & receivedBytes)
{
    convertFrameTableToUARTstruct(reinterpret_cast<const uint8_t*>(receivedBytes.constData()), m_s_UARTFrame);

    qDebug("Received Frame is: %s", receivedBytes.constData());

    double value_double;

    Module* currentModule = nullptr;

    if(m_s_UARTFrame.module == MODULE1)
    {
        qDebug() << "Module 1";
        currentModule = m_module1;
    }
    else if(m_s_UARTFrame.module == MODULE2)
    {
        qDebug() << "Module 2";
        currentModule = m_module2;
    }
    else
    {
        qDebug("Wrong module");
        assert(false);
    }

    switch(m_s_UARTFrame.function)
    {
    case DATA_FRAME:
        qDebug() << "Data transfer frame";
        break;

    case ENABLE_PARAMETER_FRAME:
        qDebug() << "Enable parameter";

        switch(m_s_UARTFrame.parameter)
        {
        case PARAMETER1:
            qDebug() << "Parameter 1";
            currentModule->enableParameter(0);
            break;
        case PARAMETER2:
            qDebug() << "Parameter 2";
            currentModule->enableParameter(1);
            break;
        case PARAMETER3:
            qDebug() << "Parameter 3";
            currentModule->enableParameter(2);
            break;
        case PARAMETER4:
            qDebug() << "Parameter 4";
            currentModule->enableParameter(3);
            break;
        case PARAMETER5:
            qDebug() << "Parameter 5";
            currentModule->enableParameter(4);
            break;
        case PARAMETER6:
            qDebug() << "Parameter 6";
            currentModule->enableParameter(5);
            break;
        case PARAMETER7:
            qDebug() << "Parameter 7";
            currentModule->enableParameter(6);
            break;
        case PARAMETER8:
            qDebug() << "Parameter 8";
            currentModule->enableParameter(7);
            break;
        case PARAMETER9:
            qDebug() << "Parameter 9";
            currentModule->enableParameter(8);
            break;
        case PARAMETER10:
            qDebug() << "Parameter 10";
            currentModule->enableParameter(9);
            break;
        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }

        updateGUI();
        break;

    case DISABLE_PARAMETER_FRAME:
        qDebug() << "Disable parameter";

        switch(m_s_UARTFrame.parameter)
        {
        case PARAMETER1:
            qDebug() << "Parameter 1";
            currentModule->disableParameter(0);
            break;
        case PARAMETER2:
            qDebug() << "Parameter 2";
            currentModule->disableParameter(1);
            break;
        case PARAMETER3:
            qDebug() << "Parameter 3";
            currentModule->disableParameter(2);
            break;
        case PARAMETER4:
            qDebug() << "Parameter 4";
            currentModule->disableParameter(3);
            break;
        case PARAMETER5:
            qDebug() << "Parameter 5";
            currentModule->disableParameter(4);
            break;
        case PARAMETER6:
            qDebug() << "Parameter 6";
            currentModule->disableParameter(5);
            break;
        case PARAMETER7:
            qDebug() << "Parameter 7";
            currentModule->disableParameter(6);
            break;
        case PARAMETER8:
            qDebug() << "Parameter 8";
            currentModule->disableParameter(7);
            break;
        case PARAMETER9:
            qDebug() << "Parameter 9";
            currentModule->disableParameter(8);
            break;
        case PARAMETER10:
            qDebug() << "Parameter 10";
            currentModule->disableParameter(9);
            break;
        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }

        updateGUI();
        break;

    case SET_PARAMETER_FRAME:
        qDebug() << "Set parameter";

        value_double = std::stof((char*)(m_s_UARTFrame.payload));

        switch(m_s_UARTFrame.parameter)
        {
        case PARAMETER1:
            qDebug() << "Parameter 1";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(0,value_double);
            break;
        case PARAMETER2:
            qDebug() << "Parameter 2";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(1,value_double);
            break;
        case PARAMETER3:
            qDebug() << "Parameter 3";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(2,value_double);
            break;
        case PARAMETER4:
            qDebug() << "Parameter 4";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(3,value_double);
            break;
        case PARAMETER5:
            qDebug() << "Parameter 5";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(4,value_double);
            break;
        case PARAMETER6:
            qDebug() << "Parameter 6";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(5,value_double);
            break;
        case PARAMETER7:
            qDebug() << "Parameter 7";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(6,value_double);
            break;
        case PARAMETER8:
            qDebug() << "Parameter 8";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(7,value_double);
            break;
        case PARAMETER9:
            qDebug() << "Parameter 9";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(8,value_double);
            break;
        case PARAMETER10:
            qDebug() << "Parameter 10";
            qDebug() << "Value: " << m_s_UARTFrame.payload;
            currentModule->setParameter(9,value_double);
            break;

        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }

        updateGUI();
        break;

    default:
        qDebug() << "Wrong function type";
        assert(false);
    }
}

void MainWindow::initPortList()
{
    QString myPortDescription = "Prolific USB-to-Serial Comm Port";
    quint16 myPortIdentifier = 8963;

    qDebug() << "Number of serial ports available:" << QSerialPortInfo::availablePorts().count();

    QList<QSerialPortInfo> availablePortList = QSerialPortInfo::availablePorts();

    bool myPortFound = false;

    /*Check if my port is present in system*/
    for(auto port : availablePortList)
    {
        if(port.description() == myPortDescription && port.productIdentifier() == myPortIdentifier)
        {
            myPortFound = true;
        }
    }

    if(myPortFound)
    {
        /*Add only my port name to list*/
        for(auto port : availablePortList)
        {
            if(port.description() == myPortDescription)
            {
                ui->comboBox_Port->addItem(port.portName());
            }
        }
    }
    else
    {
        /*Add all present port names to list*/
        for(auto port : availablePortList)
        {
            ui->comboBox_Port->addItem(port.portName());
        }
    }
}

void MainWindow::openPort(QString portName)
{
    m_serial->setPortName(portName);

    if(m_serial->isOpen())
    {
        return;
    }

    m_serial->setBaudRate(QSerialPort::Baud115200);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);

    if(m_serial->open(QIODevice::ReadWrite))
    {
        qDebug("Opened successfully");
        ui->label_ShowStatus->setText("<font color='green'>Open</font>");
    }
    else
    {
        qDebug("Could not open port");
        ui->label_ShowStatus->setText("Closed");
    }
}

void MainWindow::InitConnectionModule(int module)
{
    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};

    m_s_UARTFrame.source = SOURCE_TARGET1;
    m_s_UARTFrame.module = module + '0'; //convert int to ascii representation
    m_s_UARTFrame.function = INIT_FRAME;
    m_s_UARTFrame.sign = POSITIVE_SIGN;

    ui->lineEdit_Length->setText("N/A - Init frame");

    const char initInfoValues[5][10] = {"Samsung",
                                        "Converter",
                                        "SP-200",
                                        "100Mhz",
                                        "1.2"};

    uint8_t length_int;

    for(int i = 0; i < 5; i++)
    {
        m_s_UARTFrame.parameter = '1' + i;

        /*Clear payload*/
        for(int i=0;i<10;i++)
        {
            m_s_UARTFrame.payload[i] = '\0';
        }

        /*Clear frame*/
        for(int i=0;i<10;i++)
        {
            UART_MessageToTransmit[6+i] = '\0';
        }

        sprintf((char*)m_s_UARTFrame.payload, "%s", initInfoValues[i]);

        length_int = strlen((char*)m_s_UARTFrame.payload);

        m_s_UARTFrame.length = length_int + '0'; // convert from int to ASCII

        convertUARTstructToFrameTable(m_s_UARTFrame, UART_MessageToTransmit);
        appendCRCtoFrame(UART_MessageToTransmit);

        qDebug("Init Frame is: %s", UART_MessageToTransmit);

        m_serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
        m_serial->waitForBytesWritten(3000);
        m_serial->flush();

        Sleep(uint(50));
    }
}

void MainWindow::sendCustomDataFrame()
{
    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};

    m_s_UARTFrame.source = SOURCE_TARGET1;
    m_s_UARTFrame.module = ui->comboBox_Module->currentText().at(0).toLatin1();
    m_s_UARTFrame.function = DATA_FRAME;
    m_s_UARTFrame.parameter = ui->comboBox_Parameter->currentText().at(0).toLatin1();

    QString enteredPayload = ui->lineEdit_Payload->text();

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        ui->lineEdit_Sign->setText("2");
        m_s_UARTFrame.sign = NEGATIVE_SIGN;

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        ui->lineEdit_Sign->setText("1");
        m_s_UARTFrame.sign = POSITIVE_SIGN;
    }

    uint8_t length_int = enteredPayload.length();

    m_s_UARTFrame.length = length_int + '0'; //convert int to ascii representation of the int

    for(int i=0; i<length_int;i++)
    {
        m_s_UARTFrame.payload[i] = enteredPayload.at(i).toLatin1();
    }

    ui->lineEdit_Length->setText(QString::number(length_int));

    convertUARTstructToFrameTable(m_s_UARTFrame,UART_MessageToTransmit);
    appendCRCtoFrame(UART_MessageToTransmit);

    qDebug("Data Frame is: %s", UART_MessageToTransmit);

    m_serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
}

void MainWindow::startLinearGraph(int signalCount)
{
    QString strStartValue = ui->lineEdit_StartValue->text();
    QString strStopValue = ui->lineEdit_StopValue->text();

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();

    if(startValue > stopValue)
        return;

    m_s_UARTFrame.source = SOURCE_TARGET1;
    m_s_UARTFrame.module = ui->comboBox_Module->currentText().at(0).toLatin1();
    m_s_UARTFrame.function = DATA_FRAME;
    m_s_UARTFrame.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    sendLinear(startValue, stopValue, signalCount);
}

void MainWindow::startSineGraph(int signalCount)
{
    QString strStartValue = ui->lineEdit_StartValue->text();
    QString strStopValue = ui->lineEdit_StopValue->text();

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();

    if(startValue > stopValue)
        return;

    m_s_UARTFrame.source = SOURCE_TARGET1;
    m_s_UARTFrame.module = ui->comboBox_Module->currentText().at(0).toLatin1();
    m_s_UARTFrame.function = DATA_FRAME;
    m_s_UARTFrame.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    sendSine(startValue, stopValue, signalCount);
}

void MainWindow::sendLinear(int startValue, int stopValue, int signalCount)
{
    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};
    uint8_t length_int;
    double value;
    uint8_t parameters[4] = {VOLTAGE_PARAMETER, CURRENT_PARAMETER, FREQUENCY_PARAMETER, POWER_PARAMETER};

    double multiplier = (ui->lineEdit_Multiplier->text()).toDouble();

    for(int i = startValue; i < stopValue; i++)
    {
        for(int j=0; j < signalCount;j++)
        {
            m_s_UARTFrame.parameter = parameters[j]; // send with one of 4 parameters

            value = multiplier * i;

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART frame*/
                value = value * (-1);
                m_s_UARTFrame.sign = NEGATIVE_SIGN;
            }
            else
            {
                m_s_UARTFrame.sign = POSITIVE_SIGN;
            }

            /*Change parameter values so that graph lines do not overlap each other*/
            switch(j)
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

            sprintf((char*)m_s_UARTFrame.payload, "%.1lf", value);

            length_int = strlen((char*)m_s_UARTFrame.payload);

            m_s_UARTFrame.length = length_int + '0'; // convert from int to ASCII

            convertUARTstructToFrameTable(m_s_UARTFrame, UART_MessageToTransmit);
            appendCRCtoFrame(UART_MessageToTransmit);

            qDebug("Data Frame is: %s", UART_MessageToTransmit);

            m_serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
            m_serial->waitForBytesWritten(3000);
            m_serial->flush();

            Sleep(uint(20));

            QCoreApplication::processEvents();

            if (m_stopPressed)
            {
                qDebug("STOP PRESSED");
                m_stopPressed = false;
                return;
            }
        }
    }
}

void MainWindow::sendSine(int startValue, int stopValue, int signalCount)
{
    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};
    uint8_t length_int;
    double value;
    uint8_t parameters[4] = {VOLTAGE_PARAMETER, CURRENT_PARAMETER, FREQUENCY_PARAMETER, POWER_PARAMETER};

    double multiplier = (ui->lineEdit_Multiplier->text()).toDouble();

    for(int i = startValue; i < stopValue; i++)
    {
        for(int j=0; j < signalCount;j++)
        {
            m_s_UARTFrame.parameter = parameters[j]; // send with one of 4 parameters

            value = multiplier * (sin(i*3.14159/180) * 999.0); //scale by 999

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART frame*/
                value = value * (-1);
                m_s_UARTFrame.sign = NEGATIVE_SIGN;
            }
            else
            {
                m_s_UARTFrame.sign = POSITIVE_SIGN;
            }

            /*Change parameter values so that graph lines do not overlap each other*/
            switch(j)
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

            sprintf((char*)m_s_UARTFrame.payload, "%.1lf", value);

            length_int = strlen((char*)m_s_UARTFrame.payload);

            m_s_UARTFrame.length = length_int + '0'; // convert from int to ASCII

            convertUARTstructToFrameTable(m_s_UARTFrame, UART_MessageToTransmit);
            appendCRCtoFrame(UART_MessageToTransmit);

            qDebug("Data Frame is: %s", UART_MessageToTransmit);

            m_serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
            m_serial->waitForBytesWritten(3000);
            m_serial->flush();

            Sleep(uint(20));

            QCoreApplication::processEvents();

            if (m_stopPressed)
            {
                qDebug("STOP PRESSED");
                m_stopPressed = false;
                return;
            }
        }
    }
}

void MainWindow::updateGUI()
{
    /*Offset introduced to omit power, voltage etc. parameters*/
    int OFFSET = 4;

    QWidget* module1ParameterStateLabelsTable[10];
    QWidget* module2ParameterStateLabelsTable[10];
    QWidget* module1ParameterValueLabelsTable[10];
    QWidget* module2ParameterValueLabelsTable[10];

    for(int i = 0; i<10; i++)
    {
        module1ParameterStateLabelsTable[i] = ui->Module1ParameterStates->itemAt(i + OFFSET)->widget();
        module2ParameterStateLabelsTable[i] = ui->Module2ParameterStates->itemAt(i + OFFSET)->widget();
        module1ParameterValueLabelsTable[i] = ui->ValuesModule1Parameters->itemAt(i + OFFSET)->widget();
        module2ParameterValueLabelsTable[i] = ui->ValuesModule2Parameters->itemAt(i + OFFSET)->widget();
    }

    for(int i = 0; i<10; i++)
    {
        if((m_module1->getParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module1ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        if((m_module2->getParameterStatesTable())[i] == true)
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='green'>Enabled</font>");
        }
        else
        {
            dynamic_cast<QLabel*>(*(module2ParameterStateLabelsTable + i))->setText("<font color='red'>Disabled</font>");
        }

        dynamic_cast<QLCDNumber*>(*(module1ParameterValueLabelsTable + i))->display((m_module1->getParameterValuesTable())[i]);
        dynamic_cast<QLCDNumber*>(*(module2ParameterValueLabelsTable + i))->display((m_module2->getParameterValuesTable())[i]);
    }
}

/*Slot*/
void MainWindow::serialDataReceived()
{
    static QByteArray receivedBytes;

    receivedBytes += m_serial->readAll();

    if(receivedBytes.size() == FRAME_SIZE)
    {
        fullFrameReceived(receivedBytes);
        receivedBytes.clear();
    }
}

/*Button slots*/
void MainWindow::on_pushButton_Open_clicked()
{
    openPort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Send_pressed()
{
    sendCustomDataFrame();
}

void MainWindow::on_pushButton_InitConnectionModule1_clicked()
{
    InitConnectionModule(1);
}

void MainWindow::on_pushButton_InitConnectionModule2_clicked()
{
    InitConnectionModule(2);
}

void MainWindow::on_pushButton_StartLinear_1signal_clicked()
{
    startLinearGraph(1);
}

void MainWindow::on_pushButton_StartLinear_2signals_clicked()
{ 
    startLinearGraph(2);
}

void MainWindow::on_pushButton_StartLinear_3signals_clicked()
{
    startLinearGraph(3);
}

void MainWindow::on_pushButton_StartLinear_4signals_clicked()
{
    startLinearGraph(4);
}

void MainWindow::on_pushButton_StartSine_1signal_clicked()
{
    startSineGraph(1);
}

void MainWindow::on_pushButton_StartSine_2signals_clicked()
{
    startSineGraph(2);
}

void MainWindow::on_pushButton_StartSine_3signals_clicked()
{
    startSineGraph(3);
}

void MainWindow::on_pushButton_StartSine_4signals_clicked()
{
    startSineGraph(4);
}

void MainWindow::on_pushButton_Stop_clicked()
{
    m_stopPressed = true;
}

void MainWindow::on_pushButton_SimulateParametersSequence_clicked()
{
    startSineGraph(4);
}
