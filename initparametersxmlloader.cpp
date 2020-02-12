#include "initparametersxmlloader.h"
#include <QDebug>
#include <QMessageBox>

using std::string;
using std::endl;

InitParametersXmlLoader::InitParametersXmlLoader(Ui::MainWindow* ui)
{
    m_pUi = ui;
}

bool InitParametersXmlLoader::initModuleParametersList()
{
    std::ifstream inputFile;

    inputFile.open("parameters.xml", std::ios_base::in);

    if(inputFile.is_open())
    {
        qDebug("parameters.xml opened successfully");

        parseXmlFileToParametersList(inputFile);

        fillWidgetsTextsFromParametersList();

        return true;
    }
    else
    {
        qDebug("Could not open parameters.xml");
        return false;
    }
}

void InitParametersXmlLoader::parseXmlFileToParametersList(std::ifstream & inputFile)
{
    string inputLine;
    QString foundString;

    size_t beginningTagStartIndex;
    size_t beginningTagEndIndex;
    size_t endingTagStartIndex;
    size_t endingTagEndIndex;
    size_t stringLength;

    while(getline(inputFile,inputLine))
    {
        if(inputLine.length() != 0)
        {
//            qDebug() << "Line length: " << inputLine.length() << endl;

            beginningTagStartIndex = inputLine.find('<', 0);
            beginningTagEndIndex= inputLine.find('>', beginningTagStartIndex + 1);

            endingTagStartIndex = inputLine.find('<', beginningTagEndIndex + 1);
            endingTagEndIndex = inputLine.find('>', endingTagStartIndex + 1);

            /*Check if beginning and ending tag was found in the line*/
            if(beginningTagStartIndex != std::string::npos &&
                    beginningTagEndIndex != std::string::npos &&
                    endingTagStartIndex != std::string::npos &&
                    endingTagEndIndex != std::string::npos)
            {
                stringLength = endingTagStartIndex - beginningTagEndIndex;

//                qDebug() << "BeginningStart: " << beginningTagStartIndex << endl;
//                qDebug() << "BeginningEnd: " <<  beginningTagEndIndex << endl;
//                qDebug() << "EndingStart: " << endingTagStartIndex << endl;
//                qDebug() << "EndingEnd: " <<  endingTagEndIndex << endl;
//                qDebug() << "String length: " << stringLength << endl;
//                qDebug() << endl;

                foundString = QString::fromStdString(inputLine.substr(beginningTagEndIndex + 1, stringLength - 1));
//                qDebug() << "Found string = " << foundString << endl;

                m_Parameters.push_back(foundString);
            }
        }
    }
}

void InitParametersXmlLoader::fillWidgetsTextsFromParametersList()
{
    /*Initialize module info parameter names*/
    m_pUi->label_Module1InitParameter1Name->setText((m_Parameters.at(0)));
    m_pUi->label_Module1InitParameter2Name->setText((m_Parameters.at(1)));
    m_pUi->label_Module1InitParameter3Name->setText((m_Parameters.at(2)));
    m_pUi->label_Module1InitParameter4Name->setText((m_Parameters.at(3)));
    m_pUi->label_Module1InitParameter5Name->setText((m_Parameters.at(4)));

    /*Initialize module info parameter values*/
    m_pUi->lineEdit_Module1InitParameter1Value->setText((m_Parameters.at(5)));
    m_pUi->lineEdit_Module1InitParameter2Value->setText((m_Parameters.at(6)));
    m_pUi->lineEdit_Module1InitParameter3Value->setText((m_Parameters.at(7)));
    m_pUi->lineEdit_Module1InitParameter4Value->setText((m_Parameters.at(8)));
    m_pUi->lineEdit_Module1InitParameter5Value->setText((m_Parameters.at(9)));

    /*Initialize module parameter names*/
    m_pUi->label_Module1Parameter1Name->setText((m_Parameters.at(10)));
    m_pUi->label_Module1Parameter2Name->setText((m_Parameters.at(11)));
    m_pUi->label_Module1Parameter3Name->setText((m_Parameters.at(12)));
    m_pUi->label_Module1Parameter4Name->setText((m_Parameters.at(13)));

    /*Initialize module parameter values*/
    m_pUi->lineEdit_Module1Parameter1Name->setText((m_Parameters.at(14)));
    m_pUi->lineEdit_Module1Parameter2Name->setText((m_Parameters.at(15)));
    m_pUi->lineEdit_Module1Parameter3Name->setText((m_Parameters.at(16)));
    m_pUi->lineEdit_Module1Parameter4Name->setText((m_Parameters.at(17)));

    /*Initialize settable parameter names*/
    m_pUi->label_Module1_SettableParameter1Name->setText((m_Parameters.at(18)));
    m_pUi->label_Module1_SettableParameter2Name->setText((m_Parameters.at(19)));
    m_pUi->label_Module1_SettableParameter3Name->setText((m_Parameters.at(20)));
    m_pUi->label_Module1_SettableParameter4Name->setText((m_Parameters.at(21)));
    m_pUi->label_Module1_SettableParameter5Name->setText((m_Parameters.at(22)));
    m_pUi->label_Module1_SettableParameter6Name->setText((m_Parameters.at(23)));
    m_pUi->label_Module1_SettableParameter7Name->setText((m_Parameters.at(24)));
    m_pUi->label_Module1_SettableParameter8Name->setText((m_Parameters.at(25)));
    m_pUi->label_Module1_SettableParameter9Name->setText((m_Parameters.at(26)));
    m_pUi->label_Module1_SettableParameter10Name->setText((m_Parameters.at(27)));

    /*Initialize settable parameter values*/
    m_pUi->lcdNumber_Value_Module1_SettableParameter1->display((m_Parameters.at(28)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter2->display((m_Parameters.at(29)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter3->display((m_Parameters.at(30)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter4->display((m_Parameters.at(31)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter5->display((m_Parameters.at(32)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter6->display((m_Parameters.at(33)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter7->display((m_Parameters.at(34)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter8->display((m_Parameters.at(35)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter9->display((m_Parameters.at(36)));
    m_pUi->lcdNumber_Value_Module1_SettableParameter10->display((m_Parameters.at(37)));

    //////////////////////////////////////////////////////////////////////////////////////////

    /*Initialize module info parameter names*/
    m_pUi->label_Module2InitParameter1Name->setText((m_Parameters.at(38)));
    m_pUi->label_Module2InitParameter2Name->setText((m_Parameters.at(39)));
    m_pUi->label_Module2InitParameter3Name->setText((m_Parameters.at(40)));
    m_pUi->label_Module2InitParameter4Name->setText((m_Parameters.at(41)));
    m_pUi->label_Module2InitParameter5Name->setText((m_Parameters.at(42)));

    /*Initialize module info parameter values*/
    m_pUi->lineEdit_Module2InitParameter1Value->setText((m_Parameters.at(43)));
    m_pUi->lineEdit_Module2InitParameter2Value->setText((m_Parameters.at(44)));
    m_pUi->lineEdit_Module2InitParameter3Value->setText((m_Parameters.at(45)));
    m_pUi->lineEdit_Module2InitParameter4Value->setText((m_Parameters.at(46)));
    m_pUi->lineEdit_Module2InitParameter5Value->setText((m_Parameters.at(47)));

    /*Initialize module parameter names*/
    m_pUi->label_Module2Parameter1Name->setText((m_Parameters.at(48)));
    m_pUi->label_Module2Parameter2Name->setText((m_Parameters.at(49)));
    m_pUi->label_Module2Parameter3Name->setText((m_Parameters.at(50)));
    m_pUi->label_Module2Parameter4Name->setText((m_Parameters.at(51)));

    /*Initialize module parameter values*/
    m_pUi->lineEdit_Module2Parameter1Name->setText((m_Parameters.at(52)));
    m_pUi->lineEdit_Module2Parameter2Name->setText((m_Parameters.at(53)));
    m_pUi->lineEdit_Module2Parameter3Name->setText((m_Parameters.at(54)));
    m_pUi->lineEdit_Module2Parameter4Name->setText((m_Parameters.at(55)));

    /*Initialize settable parameter names*/
    m_pUi->label_Module2_SettableParameter1Name->setText((m_Parameters.at(56)));
    m_pUi->label_Module2_SettableParameter2Name->setText((m_Parameters.at(57)));
    m_pUi->label_Module2_SettableParameter3Name->setText((m_Parameters.at(58)));
    m_pUi->label_Module2_SettableParameter4Name->setText((m_Parameters.at(59)));
    m_pUi->label_Module2_SettableParameter5Name->setText((m_Parameters.at(60)));
    m_pUi->label_Module2_SettableParameter6Name->setText((m_Parameters.at(61)));
    m_pUi->label_Module2_SettableParameter7Name->setText((m_Parameters.at(62)));
    m_pUi->label_Module2_SettableParameter8Name->setText((m_Parameters.at(63)));
    m_pUi->label_Module2_SettableParameter9Name->setText((m_Parameters.at(64)));
    m_pUi->label_Module2_SettableParameter10Name->setText((m_Parameters.at(65)));

    /*Initialize settable parameter values*/
    m_pUi->lcdNumber_Value_Module2_SettableParameter1->display((m_Parameters.at(66)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter2->display((m_Parameters.at(67)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter3->display((m_Parameters.at(68)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter4->display((m_Parameters.at(69)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter5->display((m_Parameters.at(70)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter6->display((m_Parameters.at(71)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter7->display((m_Parameters.at(72)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter8->display((m_Parameters.at(73)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter9->display((m_Parameters.at(74)));
    m_pUi->lcdNumber_Value_Module2_SettableParameter10->display((m_Parameters.at(75)));

    //////////////////////////////////////////////////////////////////////////////////////////

    /*Initialize module info parameter names*/
    m_pUi->label_Module3InitParameter1Name->setText((m_Parameters.at(76)));
    m_pUi->label_Module3InitParameter2Name->setText((m_Parameters.at(77)));
    m_pUi->label_Module3InitParameter3Name->setText((m_Parameters.at(78)));
    m_pUi->label_Module3InitParameter4Name->setText((m_Parameters.at(79)));
    m_pUi->label_Module3InitParameter5Name->setText((m_Parameters.at(80)));

    /*Initialize module info parameter values*/
    m_pUi->lineEdit_Module3InitParameter1Value->setText((m_Parameters.at(81)));
    m_pUi->lineEdit_Module3InitParameter2Value->setText((m_Parameters.at(82)));
    m_pUi->lineEdit_Module3InitParameter3Value->setText((m_Parameters.at(83)));
    m_pUi->lineEdit_Module3InitParameter4Value->setText((m_Parameters.at(84)));
    m_pUi->lineEdit_Module3InitParameter5Value->setText((m_Parameters.at(85)));

    /*Initialize module parameter names*/
    m_pUi->label_Module3Parameter1Name->setText((m_Parameters.at(86)));
    m_pUi->label_Module3Parameter2Name->setText((m_Parameters.at(87)));
    m_pUi->label_Module3Parameter3Name->setText((m_Parameters.at(88)));
    m_pUi->label_Module3Parameter4Name->setText((m_Parameters.at(89)));

    /*Initialize module parameter values*/
    m_pUi->lineEdit_Module3Parameter1Name->setText((m_Parameters.at(90)));
    m_pUi->lineEdit_Module3Parameter2Name->setText((m_Parameters.at(91)));
    m_pUi->lineEdit_Module3Parameter3Name->setText((m_Parameters.at(92)));
    m_pUi->lineEdit_Module3Parameter4Name->setText((m_Parameters.at(93)));

    /*Initialize settable parameter names*/
    m_pUi->label_Module3_SettableParameter1Name->setText((m_Parameters.at(94)));
    m_pUi->label_Module3_SettableParameter2Name->setText((m_Parameters.at(95)));
    m_pUi->label_Module3_SettableParameter3Name->setText((m_Parameters.at(96)));
    m_pUi->label_Module3_SettableParameter4Name->setText((m_Parameters.at(97)));
    m_pUi->label_Module3_SettableParameter5Name->setText((m_Parameters.at(98)));
    m_pUi->label_Module3_SettableParameter6Name->setText((m_Parameters.at(99)));
    m_pUi->label_Module3_SettableParameter7Name->setText((m_Parameters.at(100)));
    m_pUi->label_Module3_SettableParameter8Name->setText((m_Parameters.at(101)));
    m_pUi->label_Module3_SettableParameter9Name->setText((m_Parameters.at(102)));
    m_pUi->label_Module3_SettableParameter10Name->setText((m_Parameters.at(103)));

    /*Initialize settable parameter values*/
    m_pUi->lcdNumber_Value_Module3_SettableParameter1->display((m_Parameters.at(104)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter2->display((m_Parameters.at(105)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter3->display((m_Parameters.at(106)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter4->display((m_Parameters.at(107)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter5->display((m_Parameters.at(108)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter6->display((m_Parameters.at(109)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter7->display((m_Parameters.at(110)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter8->display((m_Parameters.at(111)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter9->display((m_Parameters.at(112)));
    m_pUi->lcdNumber_Value_Module3_SettableParameter10->display((m_Parameters.at(113)));
}
