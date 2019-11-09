#pragma once

#include <QMainWindow>
#include <QDebug>
#include "QtSerialPort/QSerialPort"
#include "uartpacket.h"
#include "module.h"
#include "tableview.h"
#include "serial.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initPacketDisplay();
    void initPortList();
    void fullPacketReceived(QByteArray & receivedBytes);
    void updateGUI();
    void initConnectionModule(int module);
    void deinitConnectionModule(int module);
    void setRangeMinimum();
    void setRangeMaximum();
    void openPort(QString portName);
    void closePort(QString portName);
    void initModuleParametersList();
    void sendCustomDataPacket();
    void sendWrongCrcDataPacket();
    void generateLinearGraph(int signalCount);
    void generateSineGraph(int signalCount);
    void sendGraphPacket(UartPacket uartPacket);

private slots:
    void serialDataReceived();

    void on_pushButton_Open_clicked();
    void on_pushButton_Send_pressed();
    void on_pushButton_InitConnectionModule1_clicked();
    void on_pushButton_InitConnectionModule2_clicked();
    void on_pushButton_InitConnectionModule3_clicked();
    void on_pushButton_DeinitConnectionModule1_clicked();
    void on_pushButton_DeinitConnectionModule2_clicked();
    void on_pushButton_DeinitConnectionModule3_clicked();
    void on_pushButton_StartLinear_clicked();
    void on_pushButton_StartSine_clicked();
    void on_pushButton_Stop_clicked();
    void on_pushButton_Close_clicked();
    void on_pushButton_SendWrongCrcPacket_clicked();
    void on_pushButton_SetRanges_clicked();
    void on_pushButton_ClearTable_clicked();

private:
    Ui::MainWindow *ui;
    Serial* m_pSerial;
    Module* m_pModule1;
    Module* m_pModule2;
    Module* m_pModule3;
    TableView* m_pTableView;

    bool m_stopPressed = false;
};
