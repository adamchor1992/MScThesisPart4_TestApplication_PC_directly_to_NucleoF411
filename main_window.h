#pragma once

#include <QMainWindow>
#include <QDebug>
#include "QtSerialPort/QSerialPort"
#include "uart_packet.h"
#include "module.h"
#include "table_view.h"
#include "serial.h"
#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void InitPacketDisplay();
    void InitPortList();

    void UpdateGUI();

    /*Functionalities*/
    void InitConnectionModule(ModuleID module);
    void DeinitConnectionModule(ModuleID module);
    void SetRangeMinimum();
    void SetRangeMaximum();
    void SetRangeTime();
    void SendCustomPacket();
    void SendWrongCrcDataPacket();
    void GraphLinear();
    void GraphSine();
    void GraphSquare();
    void StopGraph();
    bool ValidateFloatingPointInput(QString input, QString functionName);
    bool ValidateIntegerInput(QString input, QString functionName);

private slots:
    void ProcessReceivedPacket(QByteArray& receivedBytes);

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
    void on_pushButton_StartSquare_clicked();
    void on_pushButton_Stop_clicked();
    void on_pushButton_Close_clicked();
    void on_pushButton_SendWrongCrcPacket_clicked();
    void on_pushButton_SetRanges_clicked();
    void on_pushButton_ClearTable_clicked();

private:
    Ui::MainWindow* ui;

    Serial m_Serial;
    std::unique_ptr<TableView> m_pTableView;

    Module m_Module1;
    Module m_Module2;
    Module m_Module3;

    const int COMMAND_LENGTH = 50;

    void SendString(QString command);
    void SendString(QString command, QString arg1);
    void SendString(QString command, QString arg1, QString arg2);
    void SendString(QString command, QString arg1, QString arg2, QString arg3);
    void SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4);
    void SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4, QString arg5);
    void SendString(QString command, QString arg1, QString arg2, QString arg3, QString arg4, QString arg5, QString arg6);
};





//class Main_Window : public QMainWindow
//{
//    Q_OBJECT

//public:
//    Main_Window(QWidget *parent = nullptr);
//    ~Main_Window();

//private slots:
//    void on_pushButton_initmodule_clicked();

//    void on_pushButton_deinitmodule_clicked();

//    void on_pushButton_sendpacket_clicked();

//    void on_pushButton_setgraphmin_clicked();

//    void on_pushButton_setgraphmax_clicked();

//    void on_pushButton_setgraphtime_clicked();

//    void on_pushButton_getparameters_clicked();

//private:
//    Ui::Main_Window *ui;

//    QSerialPort m_serialPort;

//    void SendString(QString command, QString module);
//    void SendString(QString command, QString module, QString arg1);
//    void SendString(QString command, QString module, QString arg1, QString arg2);
//};
