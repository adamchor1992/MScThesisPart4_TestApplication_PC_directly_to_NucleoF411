#ifndef SERIAL_H
#define SERIAL_H

#include <QSerialPort>
#include "ui_mainwindow.h"

class Serial : public QSerialPort
{
public:
    Serial(Ui::MainWindow* pUiHandle);
    void initPortList();
    bool openPort(QString portName);
    void closePort(QString portName);
private:
    Ui::MainWindow* ui;
};

#endif // SERIAL_H
