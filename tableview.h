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

    void initPacketDisplay();
    void updatePacketDisplay(uint8_t UART_MessageToTransmit[], bool isReceivedPacket, bool isCrcCorrect=true);
    void clearPacketDisplay();

private:
    TableView();
    TableView( const TableView & );

    Ui::MainWindow* m_pUi;

    QTableWidget* m_pTableWidget;

    const int PACKET_SIZE = 20;
};
