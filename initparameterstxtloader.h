#pragma once

#include "ui_mainwindow.h"

class InitParametersTxtLoader
{
public:
    InitParametersTxtLoader(Ui::MainWindow* ui);
    bool initModuleParametersList();
private:
    Ui::MainWindow* m_pUi;
};
