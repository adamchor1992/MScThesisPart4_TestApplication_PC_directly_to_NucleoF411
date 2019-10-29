#include "serial.h"
#include <QSerialPortInfo>
#include <QDebug>

Serial::Serial(Ui::MainWindow* pUiHandle)
{
    ui = pUiHandle;
}

void Serial::initPortList()
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

bool Serial::openPort(QString portName)
{
    setPortName(portName);

    /*Check if port is already open*/
    if(isOpen())
    {
        qDebug("Port is already open");
        return false;
    }

    setBaudRate(QSerialPort::Baud115200);
    setDataBits(QSerialPort::Data8);
    setParity(QSerialPort::NoParity);
    setStopBits(QSerialPort::OneStop);
    setFlowControl(QSerialPort::NoFlowControl);

    if(open(QIODevice::ReadWrite))
    {
        qDebug("Port opened successfully");
        ui->label_ShowStatus->setText("<font color='green'>Open</font>");

        ui->comboBox_Port->setEnabled(false);
        ui->groupBox_ModuleControls->setEnabled(true);
        ui->groupBox_CustomFrameControls ->setEnabled(true);
        ui->groupBox_GraphControls->setEnabled(true);
        ui->groupBox_Module1->setEnabled(true);
        ui->groupBox_Module2->setEnabled(true);
        ui->groupBox_Module3->setEnabled(true);

        return true;
    }
    else
    {
        qDebug("Could not open port");
        ui->label_ShowStatus->setText("Closed");

        return false;
    }
}

void Serial::closePort(QString portName)
{
    setPortName(portName);

    if(isOpen() == true)
    {
        close();

        /*Ensure port was closed*/
        if(isOpen() == false)
        {
            qDebug("Port closed successfully");
            ui->label_ShowStatus->setText("<font color='red'>Close</font>");

            ui->comboBox_Port->setEnabled(true);
            ui->groupBox_ModuleControls->setEnabled(false);
            ui->groupBox_CustomFrameControls ->setEnabled(false);
            ui->groupBox_GraphControls->setEnabled(false);
            ui->groupBox_Module1->setEnabled(false);
            ui->groupBox_Module2->setEnabled(false);
        }
        else
        {
            /*Could not close port*/
            assert(false);
        }
    }
    else
    {
        qDebug("Port is not open, cannot close");
    }
}
