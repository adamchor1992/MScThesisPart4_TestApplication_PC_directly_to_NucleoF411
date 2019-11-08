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
    void openPort(QString portName);
    void closePort(QString portName);
    void initModuleParametersList();
    void sendCustomDataPacket();
    void sendWrongCrcDataPacket();
    void startLinearGraph(int signalCount);
    void startSineGraph(int signalCount);
    void sendLinear(UartPacket uartPacket, int startValue, int stopValue, int signalCount);
    void sendSine(UartPacket uartPacket, int startValue, int stopValue, int signalCount);

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
    void on_pushButton_StartLinear_1signal_clicked();
    void on_pushButton_StartSine_1signal_clicked();
    void on_pushButton_Stop_clicked();
    void on_pushButton_SimulateParametersSequence_clicked();
    void on_pushButton_Close_clicked();
    void on_pushButton_SendWrongCrcPacket_clicked();
    void on_pushButton_SetRangeMinimum_clicked();
    void on_pushButton_SetRangeMaximum_clicked();
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
