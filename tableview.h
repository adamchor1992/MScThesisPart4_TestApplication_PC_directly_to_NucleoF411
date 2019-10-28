#pragma once

#include <QWidget>
#include "ui_mainwindow.h"

class TableView
{
public:
    TableView(Ui::MainWindow* pUiHandle);

    static TableView & getSingleton()
    {
        static TableView singleton;
        return singleton;
    }

    void initFrameDisplay();
    void updateFrame(uint8_t UART_MessageToTransmit[], bool isReceivedFrame);

private:
    TableView();
    TableView( const TableView & );

    Ui::MainWindow* m_pUiHandle;
    QTableWidget* m_pTableWidget;

    const int FRAME_SIZE = 20;
};
