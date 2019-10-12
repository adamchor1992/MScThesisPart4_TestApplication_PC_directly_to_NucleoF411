#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QWidget>
#include "ui_mainwindow.h"

class TableView
{
public:
    TableView(Ui::MainWindow* pUiHandle);
    void initFrameDisplay();
    void updateFrame(uint8_t UART_MessageToTransmit[], bool isReceivedFrame);

private:
    Ui::MainWindow* m_pUiHandle;
    QTableWidget* m_pTableWidget;

    const int FRAME_SIZE = 20;
};

#endif // TABLEVIEW_H
