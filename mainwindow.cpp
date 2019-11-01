#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include "utilities.h"
#include "defines.h"
#include <fstream>
#include <string>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_pSerial = new Serial(ui);
    m_pModule1 = new Module;
    m_pModule2 = new Module;
    m_pModule3 = new Module;
    m_pTableView = new TableView(ui);

    m_pSerial->initPortList();

    connect(m_pSerial,SIGNAL(readyRead()), this, SLOT(serialDataReceived()));

    updateGUI();

    ui->groupBox_ModuleControls->setEnabled(false);
    ui->groupBox_CustomPacketControls ->setEnabled(false);
    ui->groupBox_GraphControls->setEnabled(false);
    ui->groupBox_Module1->setEnabled(false);
    ui->groupBox_Module2->setEnabled(false);
    ui->groupBox_Module3->setEnabled(false);

    m_pTableView->initPacketDisplay();

    this->setWindowState(Qt::WindowMaximized);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_pModule1;
    delete m_pModule2;
    delete m_pModule3;
    delete m_pSerial;
    delete m_pTableView;
}

void MainWindow::fullPacketReceived(QByteArray & receivedBytes)
{
    qDebug("FULL PACKET RECEIVED");

    convertUartPacketTableToUartStructure(reinterpret_cast<const uint8_t*>(receivedBytes.constData()), m_uartPacket);

    qDebug("Received Packet is: %.16s", receivedBytes.constData());

    uint8_t uartReceivedPacket[PACKET_SIZE] = {0};

    for(int i=0; i<PACKET_SIZE; i++)
    {
        uartReceivedPacket[i] = receivedBytes.at(i);
    }

    if(checkCrc32(uartReceivedPacket) == false)
    {
        QMessageBox::warning(this, "Bad CRC", "Received packet discarded. It has wrong CRC checksum.");
        return;
    }

    m_pTableView->updatePacket(uartReceivedPacket, true);

    QCoreApplication::processEvents();

    double valueDouble;

    Module* currentModule = nullptr;

    if(m_uartPacket.module == MODULE1)
    {
        qDebug() << "Module 1";
        currentModule = m_pModule1;
    }
    else if(m_uartPacket.module == MODULE2)
    {
        qDebug() << "Module 2";
        currentModule = m_pModule2;
    }
    else if(m_uartPacket.module == MODULE3)
    {
        qDebug() << "Module 3";
        currentModule = m_pModule3;
    }
    else
    {
        qDebug("Wrong module");
        assert(false);
    }

    switch(m_uartPacket.function)
    {
    case DATA_PACKET:
        qDebug() << "Data transfer packet";
        break;

    case ENABLE_PARAMETER_PACKET:
        qDebug() << "Enable parameter";

        switch(m_uartPacket.parameter)
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

    case DISABLE_PARAMETER_PACKET:
        qDebug() << "Disable parameter";

        switch(m_uartPacket.parameter)
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

    case SET_PARAMETER_PACKET:
        qDebug() << "Set parameter";

        valueDouble = std::stof((char*)(m_uartPacket.payload));

        if(m_uartPacket.sign == NEGATIVE_SIGN)
        {
            /*Make value negative if it was marked as negative in UART Packet*/
            valueDouble = valueDouble * (-1);
        }

        switch(m_uartPacket.parameter)
        {
        case PARAMETER1:
            qDebug() << "Parameter 1";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(0,valueDouble);
            break;
        case PARAMETER2:
            qDebug() << "Parameter 2";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(1,valueDouble);
            break;
        case PARAMETER3:
            qDebug() << "Parameter 3";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(2,valueDouble);
            break;
        case PARAMETER4:
            qDebug() << "Parameter 4";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(3,valueDouble);
            break;
        case PARAMETER5:
            qDebug() << "Parameter 5";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(4,valueDouble);
            break;
        case PARAMETER6:
            qDebug() << "Parameter 6";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(5,valueDouble);
            break;
        case PARAMETER7:
            qDebug() << "Parameter 7";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(6,valueDouble);
            break;
        case PARAMETER8:
            qDebug() << "Parameter 8";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(7,valueDouble);
            break;
        case PARAMETER9:
            qDebug() << "Parameter 9";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(8,valueDouble);
            break;
        case PARAMETER10:
            qDebug() << "Parameter 10";
            qDebug() << "Value: " << m_uartPacket.payload;
            currentModule->setParameter(9,valueDouble);
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

void MainWindow::initModuleParametersList()
{
    std::ifstream inputFile;

    inputFile.open("parameters.txt", std::ios_base::in);

    if(inputFile.is_open())
    {
        qDebug("parameters.txt opened successfully");

        std::string inputBuffer;

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module1InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1Parameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1Parameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1Parameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module1Parameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module1_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module1_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));

        //////////////////////////////////////////////////////////////////////////////////////////

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module2InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2Parameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2Parameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2Parameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module2Parameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module2_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module2_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));

        //////////////////////////////////////////////////////////////////////////////////////////

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module3InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3Parameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3Parameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3Parameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->lineEdit_Module3Parameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_CustomParameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        ui->label_Module3_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        ui->label_Module3_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
    }
    else
    {
        qDebug("Could not open parameters.txt");
        assert(false);
    }
}

void MainWindow::initConnectionModule(int module)
{
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = module + '0'; //convert int to ascii representation
    m_uartPacket.function = INIT_PACKET;
    m_uartPacket.sign = POSITIVE_SIGN;

    ui->lineEdit_Length->setText("N/A - Init packet");

    QString initInfoValues[MODULE_INIT_INFO_VALUE_COUNT] = {ui->label_Module1InitParameter1Name->text(),
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

    for(auto value : initInfoValues)
    {
        if(value.size() > 10)
        {
            QMessageBox::warning(this, "Warning", "Module initialization parameter value is too long,"
                                                  " maximum allowed length is 10. Aborting module initialization");
            return;
        }
    }

    uint8_t length_int;

    for(int i = 0; i < MODULE_INIT_INFO_VALUE_COUNT; i++)
    {
        m_uartPacket.parameter = 'a' + i;

        /*Clear payload*/
        for(int i=0;i<10;i++)
        {
            m_uartPacket.payload[i] = '\0';
        }

        /*Clear packet*/
        for(int i=0;i<10;i++)
        {
            UART_MessageToTransmit[6+i] = '\0';
        }

        sprintf((char*)m_uartPacket.payload, "%s", initInfoValues[i].toStdString().c_str());

        length_int = strlen((char*)m_uartPacket.payload);

        m_uartPacket.length = length_int + '0'; // convert from int to ASCII

        convertUartStructureToUartPacketTable(m_uartPacket, UART_MessageToTransmit);
        appendCrcToPacket(UART_MessageToTransmit);

        qDebug("Init Packet is: %s", UART_MessageToTransmit);

        m_pTableView->updatePacket(UART_MessageToTransmit, false);

        m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
        m_pSerial->waitForBytesWritten(3000);
        m_pSerial->flush();

        Sleep(uint(20));

        QCoreApplication::processEvents();
    }
}

void MainWindow::deinitConnectionModule(int module)
{
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = module + '0'; //convert int to ascii representation
    m_uartPacket.function = DEINIT_PACKET;
    m_uartPacket.sign = POSITIVE_SIGN;
    m_uartPacket.parameter = '0';
    m_uartPacket.payload[0] = '\0';
    m_uartPacket.length = '1';

    ui->lineEdit_Length->setText("N/A - Deinit packet");

    convertUartStructureToUartPacketTable(m_uartPacket, UART_MessageToTransmit);
    appendCrcToPacket(UART_MessageToTransmit);

    qDebug("Deinit Packet is: %s", UART_MessageToTransmit);

    m_pTableView->updatePacket(UART_MessageToTransmit, false);

    m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
    m_pSerial->waitForBytesWritten(3000);
    m_pSerial->flush();
}

void MainWindow::sendCustomDataPacket()
{
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = ui->comboBox_CustomPacketModule->currentText().at(0).toLatin1();
    m_uartPacket.function = DATA_PACKET;
    m_uartPacket.parameter = ui->comboBox_Parameter->currentText().at(0).toLatin1();

    QString enteredPayload = ui->lineEdit_Payload->text();

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        ui->lineEdit_Sign->setText("2");
        m_uartPacket.sign = NEGATIVE_SIGN;

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        ui->lineEdit_Sign->setText("1");
        m_uartPacket.sign = POSITIVE_SIGN;
    }

    uint8_t length_int = enteredPayload.length();

    m_uartPacket.length = length_int + '0'; //convert int to ascii representation of the int

    for(int i=0; i<length_int;i++)
    {
        m_uartPacket.payload[i] = enteredPayload.at(i).toLatin1();
    }

    ui->lineEdit_Length->setText(QString::number(length_int));

    convertUartStructureToUartPacketTable(m_uartPacket,UART_MessageToTransmit);
    appendCrcToPacket(UART_MessageToTransmit);

    qDebug("Data Packet is: %s", UART_MessageToTransmit);

    m_pTableView->updatePacket(UART_MessageToTransmit, false);

    m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
    m_pSerial->waitForBytesWritten(3000);
    m_pSerial->flush();
}

void MainWindow::sendWrongCrcDataPacket()
{
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = ui->comboBox_CustomPacketModule->currentText().at(0).toLatin1();
    m_uartPacket.function = DATA_PACKET;
    m_uartPacket.parameter = ui->comboBox_Parameter->currentText().at(0).toLatin1();

    QString enteredPayload = ui->lineEdit_Payload->text();

    if(enteredPayload.at(0).toLatin1() == '-')
    {
        ui->lineEdit_Sign->setText("2");
        m_uartPacket.sign = NEGATIVE_SIGN;

        /*Remove minus sign*/
        enteredPayload.remove(0,1);
    }
    else
    {
        ui->lineEdit_Sign->setText("1");
        m_uartPacket.sign = POSITIVE_SIGN;
    }

    uint8_t length_int = enteredPayload.length();

    m_uartPacket.length = length_int + '0'; //convert int to ascii representation of the int

    for(int i=0; i<length_int;i++)
    {
        m_uartPacket.payload[i] = enteredPayload.at(i).toLatin1();
    }

    ui->lineEdit_Length->setText(QString::number(length_int));

    convertUartStructureToUartPacketTable(m_uartPacket,UART_MessageToTransmit);

    /*Set wrong all zeros CRC*/
    UART_MessageToTransmit[19] = 0;
    UART_MessageToTransmit[18] = 0;
    UART_MessageToTransmit[17] = 0;
    UART_MessageToTransmit[16] = 0;

    qDebug("Wrong Crc Data Packet is: %s", UART_MessageToTransmit);

    m_pTableView->updatePacket(UART_MessageToTransmit, false);

    m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
    m_pSerial->waitForBytesWritten(3000);
    m_pSerial->flush();
}

void MainWindow::startLinearGraph(int signalCount)
{
    QString strStartValue = ui->lineEdit_StartValue->text();
    QString strStopValue = ui->lineEdit_StopValue->text();

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();

    if(startValue > stopValue)
    {
        QMessageBox::warning(this, "Warning", "Start values is higher than stop value, aborting");
        return;
    }

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = ui->comboBox_GraphModule->currentText().at(0).toLatin1();
    m_uartPacket.function = DATA_PACKET;
    m_uartPacket.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    sendLinear(startValue, stopValue, signalCount);
}

void MainWindow::startSineGraph(int signalCount)
{
    QString strStartValue = ui->lineEdit_StartValue->text();
    QString strStopValue = ui->lineEdit_StopValue->text();

    int startValue = strStartValue.toInt();
    int stopValue = strStopValue.toInt();

    if(startValue > stopValue)
    {
        QMessageBox::warning(this, "Warning", "Start values is higher than stop value, aborting");
        return;
    }

    m_uartPacket.source = SOURCE_TARGET1;
    m_uartPacket.module = ui->comboBox_GraphModule->currentText().at(0).toLatin1();
    m_uartPacket.function = DATA_PACKET;
    m_uartPacket.sign = ui->lineEdit_Sign->text().at(0).toLatin1();

    sendSine(startValue, stopValue, signalCount);
}

void MainWindow::sendLinear(int startValue, int stopValue, int signalCount)
{
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};
    uint8_t length_int;
    double value;
    uint8_t parameters[4] = {VOLTAGE_PARAMETER, CURRENT_PARAMETER, FREQUENCY_PARAMETER, POWER_PARAMETER};

    double multiplier = (ui->lineEdit_Multiplier->text()).toDouble();

    for(int x = startValue; x < stopValue; x++)
    {
        for(int signalNumber = 0; signalNumber < signalCount; signalNumber++)
        {
            m_uartPacket.parameter = parameters[signalNumber]; // send with one of 4 parameters

            value = multiplier * x * 0.001;

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART packet*/
                value = value * (-1);
                m_uartPacket.sign = NEGATIVE_SIGN;
            }
            else
            {
                m_uartPacket.sign = POSITIVE_SIGN;
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

            sprintf((char*)m_uartPacket.payload, "%.3lf", value);

            length_int = strlen((char*)m_uartPacket.payload);

            m_uartPacket.length = length_int + '0'; // convert from int to ASCII

            convertUartStructureToUartPacketTable(m_uartPacket, UART_MessageToTransmit);
            appendCrcToPacket(UART_MessageToTransmit);

            qDebug("Data Packet is: %s", UART_MessageToTransmit);

            m_pTableView->updatePacket(UART_MessageToTransmit, false);

            m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
            m_pSerial->waitForBytesWritten(3000);
            m_pSerial->flush();

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
    uint8_t UART_MessageToTransmit[PACKET_SIZE] = {0};
    uint8_t length_int;
    double value;
    uint8_t parameters[4] = {VOLTAGE_PARAMETER, CURRENT_PARAMETER, FREQUENCY_PARAMETER, POWER_PARAMETER};

    double multiplier = (ui->lineEdit_Multiplier->text()).toDouble();
    double radianInverse = 3.14159/180;

    int phaseShift[4] = {0, 120, 240, 360};

    for(int x = startValue; x < stopValue; x++)
    {
        for(int signalNumber = 0; signalNumber < signalCount; signalNumber++)
        {
            m_uartPacket.parameter = parameters[signalNumber]; // send with one of 4 parameters

            /*Multiply by radian inverse to get rid of radian unit and calculate sine of x measured in degrees*/
            value = multiplier * (sin(x * radianInverse + phaseShift[signalNumber]));

            if(value < 0)
            {
                /*Change value sign back to positive and mark it as negative in UART packet*/
                value = value * (-1);
                m_uartPacket.sign = NEGATIVE_SIGN;
            }
            else
            {
                m_uartPacket.sign = POSITIVE_SIGN;
            }

            sprintf((char*)m_uartPacket.payload, "%.3lf", value);

            length_int = strlen((char*)m_uartPacket.payload);

            m_uartPacket.length = length_int + '0'; // convert from int to ASCII

            convertUartStructureToUartPacketTable(m_uartPacket, UART_MessageToTransmit);
            appendCrcToPacket(UART_MessageToTransmit);

            qDebug("Data Packet is: %s", UART_MessageToTransmit);

            m_pTableView->updatePacket(UART_MessageToTransmit, false);

            m_pSerial->write((const char*)UART_MessageToTransmit, PACKET_SIZE);
            m_pSerial->waitForBytesWritten(3000);
            m_pSerial->flush();

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
    QWidget* module3ParameterStateLabelsTable[10];
    QWidget* module1ParameterValueLabelsTable[10];
    QWidget* module2ParameterValueLabelsTable[10];
    QWidget* module3ParameterValueLabelsTable[10];

    for(int i = 0; i<10; i++)
    {
        module1ParameterStateLabelsTable[i] = ui->Module1ParameterStates->itemAt(i + OFFSET)->widget();
        module2ParameterStateLabelsTable[i] = ui->Module2ParameterStates->itemAt(i + OFFSET)->widget();
        module3ParameterStateLabelsTable[i] = ui->Module3ParameterStates->itemAt(i + OFFSET)->widget();
        module1ParameterValueLabelsTable[i] = ui->ValuesModule1Parameters->itemAt(i + OFFSET)->widget();
        module2ParameterValueLabelsTable[i] = ui->ValuesModule2Parameters->itemAt(i + OFFSET)->widget();
        module3ParameterValueLabelsTable[i] = ui->ValuesModule3Parameters->itemAt(i + OFFSET)->widget();
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
    if(m_pSerial->openPort(ui->comboBox_Port->currentText()))
    {
        initModuleParametersList();
    }
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
    initConnectionModule(1);
}

void MainWindow::on_pushButton_InitConnectionModule2_clicked()
{
    initConnectionModule(2);
}

void MainWindow::on_pushButton_InitConnectionModule3_clicked()
{
    initConnectionModule(3);
}

void MainWindow::on_pushButton_DeinitConnectionModule1_clicked()
{
    deinitConnectionModule(1);
}

void MainWindow::on_pushButton_DeinitConnectionModule2_clicked()
{
    deinitConnectionModule(2);
}

void MainWindow::on_pushButton_DeinitConnectionModule3_clicked()
{
    deinitConnectionModule(3);
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

void MainWindow::on_pushButton_SendWrongCrcPacket_clicked()
{
    sendWrongCrcDataPacket();
}
