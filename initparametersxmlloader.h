#pragma once

#include "ui_mainwindow.h"
#include <string>
#include <vector>
#include <fstream>

class InitParametersXmlLoader
{
public:
    InitParametersXmlLoader(Ui::MainWindow* ui);
    bool initModuleParametersList();

private:
    void parseXmlFileToParametersList(std::ifstream & inputFile);
    void fillWidgetsTextsFromParametersList();

    Ui::MainWindow* m_pUi;
    std::vector<QString> m_Parameters;
};
