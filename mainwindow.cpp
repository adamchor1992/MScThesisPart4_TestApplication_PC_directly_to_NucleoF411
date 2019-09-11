#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "crc32.h"
#include <iostream>
#include <QSerialPortInfo>
#include <assert.h>

#define FRAME_SIZE 20

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    module1 = new Module;
    module2 = new Module;

    initPortList();

    connect(serial,SIGNAL(readyRead()), this, SLOT(serialReceived()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete module1;
    delete  module2;
}

void MainWindow::appendCRCtoFrame(uint8_t frame[])
{
    uint32_t CRC_Value_Calculated = Calculate_CRC32((char*)frame, 16);
    uint32_t* CRC_Address = &CRC_Value_Calculated;
    uint8_t *p1, *p2, *p3, *p4;

    p1 = ((uint8_t*)CRC_Address);
    p2 = ((uint8_t*)CRC_Address + 1);
    p3 = ((uint8_t*)CRC_Address + 2);
    p4 = ((uint8_t*)CRC_Address + 3);

    frame[19] = *p1;
    frame[18] = *p2;
    frame[17] = *p3;
    frame[16] = *p4;
}

void MainWindow::convertFrameTableToUARTstruct(const uint8_t frameTable[],UARTFrameStruct_t & frameStructure)
{
    //not used currently
}

void MainWindow::convertUARTstructToFrameTable(const UARTFrameStruct_t & frameStructure, uint8_t frame[])
{
    frame[0] = frameStructure.source;
    frame[1] = frameStructure.module;
    frame[2] = frameStructure.function;
    frame[3] = frameStructure.parameter;
    frame[4] = frameStructure.sign;
    frame[5] = frameStructure.length;

    uint8_t length_int = frameStructure.length - '0';

    QString enteredPayload = ui->lineEdit_Payload->text();

    for(uint8_t i=0; i < length_int; i++)
    {
        frame[6 + i] = uint8_t(enteredPayload[i].toLatin1()); //payload starts from 6th element up to [6 + length] element
    }
}

void MainWindow::serialReceived()
{
    static QByteArray receivedBytes;

    receivedBytes += serial->readAll();

    if(receivedBytes.size() == FRAME_SIZE)
    {
        fullFrameReceived(receivedBytes);
        receivedBytes.clear();
    }
}

void MainWindow::fullFrameReceived(QByteArray & receivedBytes)
{
    convertFrameTableToUARTstruct(reinterpret_cast<const uint8_t*>(receivedBytes.constData()), s_UARTFrame);
    float value_float;

    Module* currentModule;

    if(s_UARTFrame.module == '1')
    {
        qDebug() << "Module 1";
        currentModule = module1;
    }
    else if(s_UARTFrame.module == '2')
    {
        qDebug() << "Module 2";
        currentModule = module2;
    }
    else
    {
        qDebug("Wrong module");
        assert(false);
    }

    switch(s_UARTFrame.function)
    {
    case '1':
        qDebug() << "Data transfer frame";
        break;

    case '4':
        qDebug() << "Enable parameter";

        switch(s_UARTFrame.parameter)
        {
        case '1':
            qDebug() << "Parameter 1";
            currentModule->enableParameter(0);
            break;
        case '2':
            qDebug() << "Parameter 2";
            currentModule->enableParameter(1);
            break;
        case '3':
            qDebug() << "Parameter 3";
            currentModule->enableParameter(2);
            break;
        case '4':
            qDebug() << "Parameter 4";
            currentModule->enableParameter(3);
            break;
        case '5':
            qDebug() << "Parameter 5";
            currentModule->enableParameter(4);
            break;
        case '6':
            qDebug() << "Parameter 6";
            currentModule->enableParameter(5);
            break;
        case '7':
            qDebug() << "Parameter 7";
            currentModule->enableParameter(6);
            break;
        case '8':
            qDebug() << "Parameter 8";
            currentModule->enableParameter(7);
            break;
        case '9':
            qDebug() << "Parameter 9";
            currentModule->enableParameter(8);
            break;
        case 'a':
            qDebug() << "Parameter 10";
            currentModule->enableParameter(9);
            break;
        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }
        break;

    case '5':
        qDebug() << "Disable parameter";

        switch(s_UARTFrame.parameter)
        {
        case '1':
            qDebug() << "Parameter 1";
            currentModule->disableParameter(0);
            break;
        case '2':
            qDebug() << "Parameter 2";
            currentModule->disableParameter(1);
            break;
        case '3':
            qDebug() << "Parameter 3";
            currentModule->disableParameter(2);
            break;
        case '4':
            qDebug() << "Parameter 4";
            currentModule->disableParameter(3);
            break;
        case '5':
            qDebug() << "Parameter 5";
            currentModule->disableParameter(4);
            break;
        case '6':
            qDebug() << "Parameter 6";
            currentModule->disableParameter(5);
            break;
        case '7':
            qDebug() << "Parameter 7";
            currentModule->disableParameter(6);
            break;
        case '8':
            qDebug() << "Parameter 8";
            currentModule->disableParameter(7);
            break;
        case '9':
            qDebug() << "Parameter 9";
            currentModule->disableParameter(8);
            break;
        case 'a':
            qDebug() << "Parameter 10";
            currentModule->disableParameter(9);
            break;
        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }
        break;

    case '6':
        qDebug() << "Set parameter";

        value_float = std::stof((char*)(s_UARTFrame.payload));

        switch(s_UARTFrame.parameter)
        {
        case '1':
            qDebug() << "Parameter 1";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(0,value_float);
            break;
        case '2':
            qDebug() << "Parameter 2";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(1,value_float);
            break;
        case '3':
            qDebug() << "Parameter 3";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(2,value_float);
            break;
        case '4':
            qDebug() << "Parameter 4";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(3,value_float);
            break;
        case '5':
            qDebug() << "Parameter 5";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(4,value_float);
            break;
        case '6':
            qDebug() << "Parameter 6";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(5,value_float);
            break;
        case '7':
            qDebug() << "Parameter 7";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(6,value_float);
            break;
        case '8':
            qDebug() << "Parameter 8";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(7,value_float);
            break;
        case '9':
            qDebug() << "Parameter 9";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(8,value_float);
            break;
        case 'a':
            qDebug() << "Parameter 10";
            qDebug() << "Value: " << s_UARTFrame.payload;
            currentModule->setParameter(9,value_float);
            break;

        default:
            qDebug() << "Wrong parameter number";
            assert(false);
        }
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
    serial->setPortName(portName);

    if(serial->isOpen())
    {
        return;
    }

    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if(serial->open(QIODevice::ReadWrite))
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
    QString enteredPayload = ui->lineEdit_Payload->text();

    uint8_t length_int = enteredPayload.length();

    s_UARTFrame.source = '1';
    s_UARTFrame.module = module + '0'; //convert int to ascii representation
    s_UARTFrame.function = '1';
    s_UARTFrame.parameter = '1';
    s_UARTFrame.sign = '1';
    s_UARTFrame.length = length_int + '0'; //convert int to ascii representation of the int

    ui->lineEdit_Length->setText(QString::number(length_int));

    convertUARTstructToFrameTable(s_UARTFrame,UART_MessageToTransmit);
    appendCRCtoFrame(UART_MessageToTransmit);

    qDebug("Init Frame is: %s", UART_MessageToTransmit);

    serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
}

void MainWindow::sendMessage()
{
    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};

    s_UARTFrame.source = '1';
    s_UARTFrame.module = ui->comboBox_Module->currentText().at(0).toLatin1();
    s_UARTFrame.function = '2';
    s_UARTFrame.parameter = ui->comboBox_Parameter->currentText().at(0).toLatin1();;
    s_UARTFrame.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    uint8_t length_int = ui->lineEdit_Payload->text().length();

    s_UARTFrame.length = length_int + '0'; //convert int to ascii representation of the int

    ui->lineEdit_Length->setText(QString::number(length_int));

    convertUARTstructToFrameTable(s_UARTFrame,UART_MessageToTransmit);
    appendCRCtoFrame(UART_MessageToTransmit);

    qDebug("Data Frame is: %s", UART_MessageToTransmit);

    serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
}

void MainWindow::on_pushButton_Open_clicked()
{
    openPort(ui->comboBox_Port->currentText());
}

void MainWindow::on_pushButton_Send_pressed()
{
    sendMessage();
}

void MainWindow::on_pushButton_InitConnectionModule1_clicked()
{
    InitConnectionModule(1);
}

void MainWindow::on_pushButton_InitConnectionModule2_clicked()
{
    InitConnectionModule(2);
}

void MainWindow::on_pushButton_StartLinear_clicked()
{
    QString strStartValue = ui->lineEdit_StartValue->text();
    QString strStopValue = ui->lineEdit_StopValue->text();

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();

    uint8_t UART_MessageToTransmit[FRAME_SIZE] = {0};

    s_UARTFrame.source = '1';
    s_UARTFrame.module = ui->comboBox_Module->currentText().at(0).toLatin1();
    s_UARTFrame.function = '1'; //data transfer frame
    s_UARTFrame.parameter = ui->comboBox_Parameter->currentText().at(0).toLatin1();;
    s_UARTFrame.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    //uint8_t length_int = ui->lineEdit_Payload->text().length();

    uint8_t length_int = s_UARTFrame.length - '0';

    s_UARTFrame.length = length_int + '0'; //convert int to ascii representation of the int

    ui->lineEdit_Length->setText(QString::number(length_int));

    //s_UARTFrame.payload()

    UART_MessageToTransmit[0] = s_UARTFrame.source;
    UART_MessageToTransmit[1] = s_UARTFrame.module;
    UART_MessageToTransmit[2] = s_UARTFrame.function;
    UART_MessageToTransmit[3] = s_UARTFrame.parameter;
    UART_MessageToTransmit[4] = s_UARTFrame.sign;
    UART_MessageToTransmit[5] = s_UARTFrame.length;

    QString enteredPayload = ui->lineEdit_Payload->text();

    int i;

    for(int i=startValue; i < stopValue; i++)
    {

        sprintf((char*)s_UARTFrame.payload, "%ld", i);

        appendCRCtoFrame(UART_MessageToTransmit);

        qDebug("Data Frame is: %s", UART_MessageToTransmit);

        serial->write((const char*)UART_MessageToTransmit, FRAME_SIZE);
        //frame[6 + i] = uint8_t(enteredPayload[i].toLatin1()); //payload starts from 6th element up to [6 + length] element
    }
}

void MainWindow::on_pushButton_StartSine_clicked()
{

}
