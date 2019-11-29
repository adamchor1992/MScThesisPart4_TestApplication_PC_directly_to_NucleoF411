#pragma once

#include <QSerialPort>
#include "ui_mainwindow.h"
#include "defines.h"

class Serial : public QSerialPort
{
public:
    Serial(Ui::MainWindow* pUiHandle);
    void initPortList();
    bool openPort(QString portName);
    void closePort(QString portName);
    void sendPacket(uint8_t* uartPacketTable);

private:
    Ui::MainWindow* ui;
};
