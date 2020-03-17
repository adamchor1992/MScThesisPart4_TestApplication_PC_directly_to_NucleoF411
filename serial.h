#pragma once

#include <QSerialPort>
#include "ui_mainwindow.h"
#include "defines.h"

class Serial : public QSerialPort
{
public:
    Serial(Ui::MainWindow* ui);
    void InitPortList();
    bool OpenPort(QString portName);
    void ClosePort(QString portName);
    void SendPacket(uint8_t* uartPacketTable);

private:
    Ui::MainWindow* m_pUi;

    void EnableGui();
    void DisableGui();
};
