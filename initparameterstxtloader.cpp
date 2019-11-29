#include "initparameterstxtloader.h"

#include <fstream>
#include <string>
#include <QDebug>

InitParametersTxtLoader::InitParametersTxtLoader(Ui::MainWindow* ui)
{
    m_pUi = ui;
}

bool InitParametersTxtLoader::initModuleParametersList()
{
    std::ifstream inputFile;

    inputFile.open("parameters.txt", std::ios_base::in);

    if(inputFile.is_open())
    {
        qDebug("parameters.txt opened successfully");

        std::string inputBuffer;

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1Parameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1Parameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1Parameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module1Parameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module1_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module1_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));

        //////////////////////////////////////////////////////////////////////////////////////////

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2Parameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2Parameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2Parameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module2Parameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module2_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module2_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));

        //////////////////////////////////////////////////////////////////////////////////////////

        /*Initialize module info from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3InitParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3InitParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3InitParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3InitParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3InitParameter5Name->setText(QString::fromStdString(inputBuffer));

        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3InitParameter1Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3InitParameter2Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3InitParameter3Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3InitParameter4Value->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3InitParameter5Value->setText(QString::fromStdString(inputBuffer));

        /*Initialize parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3Parameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3Parameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3Parameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->lineEdit_Module3Parameter4Name->setText(QString::fromStdString(inputBuffer));

        /*Initialize settable parameter names from file*/
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter1Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter2Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter3Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter4Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter5Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter6Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter7Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter8Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter9Name->setText(QString::fromStdString(inputBuffer));
        getline(inputFile,inputBuffer);
        m_pUi->label_Module3_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));
        m_pUi->label_Module3_SettableParameter10Name->setText(QString::fromStdString(inputBuffer));

        return true;
    }
    else
    {
        qDebug("Could not open parameters.txt");
        return false;
    }
}
