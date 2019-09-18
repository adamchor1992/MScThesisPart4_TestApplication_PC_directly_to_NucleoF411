#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
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

    void initPortList();
    void fullFrameReceived(QByteArray & receivedBytes);
    void updateGUI();
    void InitConnectionModule(int module);
    void openPort(QString portName);
    void sendCustomDataFrame();
    void startLinearGraph(int signalCount);
    void startSineGraph(int signalCount);
    void sendLinear(int startValue, int stopValue, int signalCount);
    void sendSine(int startValue, int stopValue, int signalCount);

private slots:
    void serialDataReceived();

    void on_pushButton_Open_clicked();
    void on_pushButton_Send_pressed();
    void on_pushButton_InitConnectionModule1_clicked();
    void on_pushButton_InitConnectionModule2_clicked();
    void on_pushButton_StartLinear_1signal_clicked();
    void on_pushButton_StartLinear_2signals_clicked();
    void on_pushButton_StartLinear_3signals_clicked();
    void on_pushButton_StartLinear_4signals_clicked();
    void on_pushButton_StartSine_1signal_clicked();
    void on_pushButton_StartSine_2signals_clicked();
    void on_pushButton_StartSine_3signals_clicked();
    void on_pushButton_StartSine_4signals_clicked();
    void on_pushButton_Stop_clicked();
    void on_pushButton_SimulateParametersSequence_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort* m_serial;
    Module* m_module1;
    Module* m_module2;

    UARTFrameStruct_t m_s_UARTFrame;

    bool m_stopPressed;
};

#endif // MAINWINDOW_H
