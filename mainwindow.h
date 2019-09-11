#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtSerialPort/QSerialPort"
#include "uart_frame_struct.h"
#include "module.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void appendCRCtoFrame(uint8_t frame[]);
    void convertFrameTableToUARTstruct(const uint8_t frame[], UARTFrameStruct_t & frameStructure);
    void convertUARTstructToFrameTable(const UARTFrameStruct_t & frameStructure, uint8_t frame[]);
    void initPortList();
    void fullFrameReceived(QByteArray & receivedBytes);
    void updateGUI();

private slots:
    void openPort(QString portName);
    void sendMessage();
    void serialReceived();
    void InitConnectionModule(int module);

    void on_pushButton_Open_clicked();
    void on_pushButton_Send_pressed();

    void on_pushButton_InitConnectionModule1_clicked();
    void on_pushButton_InitConnectionModule2_clicked();

    void on_pushButton_StartLinear_clicked();
    void on_pushButton_StartSine_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort* serial;
    Module* module1;
    Module* module2;

    UARTFrameStruct_t s_UARTFrame;
};

#endif // MAINWINDOW_H
