#pragma once

#include "ui_mainwindow.h"
#include <string>
#include <vector>
#include <fstream>

class InitParametersXmlLoader
{
public:
    InitParametersXmlLoader(Ui::MainWindow* ui);
    bool InitModuleParametersList();

private:
    void ParseXmlFileToParametersList(std::ifstream & inputFile);
    void FillWidgetsTextsFromParametersList();

    Ui::MainWindow* m_pUi;
    std::vector<QString> m_Parameters;
};
