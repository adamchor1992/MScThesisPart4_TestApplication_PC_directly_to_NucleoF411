#pragma once

#include <QMainWindow>
#include <QDebug>
#include "QtSerialPort/QSerialPort"
#include "uartpacket.h"
#include "module.h"
#include "tableview.h"
#include "serial.h"
#include <memory>
#include "validators.h"

namespace Ui {
class MainWindow;
}

using std::unique_ptr;

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
    void initConnectionModule(ModuleID module);
    void deinitConnectionModule(ModuleID module);
    void setRangeMinimum();
    void setRangeMaximum();
    void setRangeTime();
    void openPort(QString portName);
    void closePort(QString portName);
    bool initModuleParametersList();
    void sendCustomDataPacket();
    void sendWrongCrcDataPacket();
    void generateLinearGraph(int signalCount);
    void generateSineGraph(int signalCount);
    void sendGraphPacket(UartPacket uartPacket);

    void setInputValidators();

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

    unique_ptr<Serial> m_pSerial;
    unique_ptr<Module> m_pModule1, m_pModule2, m_pModule3;
    unique_ptr<TableView> m_pTableView;

    unique_ptr<CustomIntegerValidator> m_pCustomIntegerValidator;
    unique_ptr<CustomFloatingPointValidator> m_pCustomFloatingPointValidator;

    bool m_stopPressed = false;
};
