/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_ComPortControls;
    QGridLayout *gridLayout_3;
    QLabel *label_Status;
    QLabel *label_ShowStatus;
    QLabel *label_SerialPort;
    QComboBox *comboBox_Port;
    QPushButton *pushButton_Open;
    QPushButton *pushButton_Close;
    QGroupBox *groupBox_CustomFrameControls;
    QGridLayout *gridLayout_2;
    QLabel *label_Source;
    QLineEdit *lineEdit_Source;
    QLabel *label_Module;
    QComboBox *comboBox_Module;
    QLabel *label_Type;
    QLineEdit *lineEdit_Type;
    QLabel *label_Parameter;
    QLabel *label_Sign;
    QLineEdit *lineEdit_Sign;
    QLabel *label_Length;
    QLineEdit *lineEdit_Length;
    QLabel *label_Payload;
    QLineEdit *lineEdit_Payload;
    QPushButton *pushButton_Send;
    QPushButton *pushButton_SimulateParametersSequence;
    QComboBox *comboBox_Parameter;
    QGroupBox *groupBox_GraphControls;
    QGridLayout *gridLayout_4;
    QLabel *label_StartValue;
    QLineEdit *lineEdit_StartValue;
    QLabel *label_StopValue;
    QLineEdit *lineEdit_StopValue;
    QLabel *label_Multiplier;
    QLineEdit *lineEdit_Multiplier;
    QPushButton *pushButton_StartLinear_1signal;
    QPushButton *pushButton_StartSine_1signal;
    QPushButton *pushButton_StartLinear_2signals;
    QPushButton *pushButton_StartSine_2signals;
    QPushButton *pushButton_StartLinear_3signals;
    QPushButton *pushButton_StartSine_3signals;
    QPushButton *pushButton_StartLinear_4signals;
    QPushButton *pushButton_StartSine_4signals;
    QPushButton *pushButton_Stop;
    QGroupBox *groupBox_ModuleControls;
    QGridLayout *gridLayout;
    QLabel *label_InitParameter4Name;
    QLineEdit *lineEdit_InitParameter1Value;
    QPushButton *pushButton_InitConnectionModule2;
    QLineEdit *lineEdit_Parameter2Name;
    QLineEdit *lineEdit_InitParameter3Value;
    QLabel *label_InitParameter2Name;
    QLineEdit *lineEdit_InitParameter4Value;
    QLabel *label_Parameter3Name;
    QLineEdit *lineEdit_Parameter3Name;
    QLabel *label_InitParameter5Name;
    QLabel *label_InitParameter1Name;
    QLabel *label_Parameter2Name;
    QLabel *label_Parameter1Name;
    QPushButton *pushButton_DeinitConnectionModule2;
    QLabel *label_InitParameter3Name;
    QLineEdit *lineEdit_Parameter1Name;
    QPushButton *pushButton_InitConnectionModule1;
    QLineEdit *lineEdit_InitParameter2Value;
    QLineEdit *lineEdit_InitParameter5Value;
    QPushButton *pushButton_DeinitConnectionModule1;
    QLabel *label_Parameter4Name;
    QLineEdit *lineEdit_Parameter4Name;
    QGroupBox *groupBox_Module1;
    QGridLayout *gridLayout_5;
    QVBoxLayout *ValuesModule1Parameters;
    QLCDNumber *lcdNumber_Value_Module1_CustomParameter1;
    QLCDNumber *lcdNumber_Value_Module1_CustomParameter2;
    QLCDNumber *lcdNumber_Value_Module1_CustomParameter3;
    QLCDNumber *lcdNumber_Value_Module1_CustomParameter4;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter1;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter2;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter3;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter4;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter5;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter6;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter7;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter8;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter9;
    QLCDNumber *lcdNumber_Value_Module1_SettableParameter10;
    QVBoxLayout *Module1Parameters;
    QLabel *label_Module1_CustomParameter1Name;
    QLabel *label_Module1_CustomParameter2Name;
    QLabel *label_Module1_CustomParameter3Name;
    QLabel *label_Module1_CustomParameter4Name;
    QLabel *label_Module1_SettableParameter1Name;
    QLabel *label_Module1_SettableParameter2Name;
    QLabel *label_Module1_SettableParameter3Name;
    QLabel *label_Module1_SettableParameter4Name;
    QLabel *label_Module1_SettableParameter5Name;
    QLabel *label_Module1_SettableParameter6Name;
    QLabel *label_Module1_SettableParameter7Name;
    QLabel *label_Module1_SettableParameter8Name;
    QLabel *label_Module1_SettableParameter9Name;
    QLabel *label_Module1_SettableParameter10Name;
    QVBoxLayout *Module1ParameterStates;
    QLabel *label_Module1_CustomParameter1_State;
    QLabel *label_Module1_CustomParameter2_State;
    QLabel *label_Module1_CustomParameter3_State;
    QLabel *label_Module1_CustomParameter4_State;
    QLabel *label_Module1_SettableParameter1_State;
    QLabel *label_Module1_SettableParameter2_State;
    QLabel *label_Module1_SettableParameter3_State;
    QLabel *label_Module1_SettableParameter4_State;
    QLabel *label_Module1_SettableParameter5_State;
    QLabel *label_Module1_SettableParameter6_State;
    QLabel *label_Module1_SettableParameter7_State;
    QLabel *label_Module1_SettableParameter8_State;
    QLabel *label_Module1_SettableParameter9_State;
    QLabel *label_Module1_SettableParameter10_State;
    QGroupBox *groupBox_Module2;
    QGridLayout *gridLayout_6;
    QVBoxLayout *Module2Parameters;
    QLabel *label_Module2_CustomParameter1Name;
    QLabel *label_Module2_CustomParameter2Name;
    QLabel *label_Module2_CustomParameter3Name;
    QLabel *label_Module2_CustomParameter4Name;
    QLabel *label_Module2_SettableParameter1Name;
    QLabel *label_Module2_SettableParameter2Name;
    QLabel *label_Module2_SettableParameter3Name;
    QLabel *label_Module2_SettableParameter4Name;
    QLabel *label_Module2_SettableParameter5Name;
    QLabel *label_Module2_SettableParameter6Name;
    QLabel *label_Module2_SettableParameter7Name;
    QLabel *label_Module2_SettableParameter8Name;
    QLabel *label_Module2_SettableParameter9Name;
    QLabel *label_Module2_SettableParameter10Name;
    QVBoxLayout *Module2ParameterStates;
    QLabel *label_Module2_CustomParameter1_State;
    QLabel *label_Module2_CustomParameter2_State;
    QLabel *label_Module2_CustomParameter3_State;
    QLabel *label_Module2_CustomParameter4_State;
    QLabel *label_Module2_SettableParameter1_State;
    QLabel *label_Module2_SettableParameter2_State;
    QLabel *label_Module2_SettableParameter3_State;
    QLabel *label_Module2_SettableParameter4_State;
    QLabel *label_Module2_SettableParameter5_State;
    QLabel *label_Module2_SettableParameter6_State;
    QLabel *label_Module2_SettableParameter7_State;
    QLabel *label_Module2_SettableParameter8_State;
    QLabel *label_Module2_SettableParameter9_State;
    QLabel *label_Module2_SettableParameter10_State;
    QVBoxLayout *ValuesModule2Parameters;
    QLCDNumber *lcdNumber_Value_Module2_CustomParameter1;
    QLCDNumber *lcdNumber_Value_Module2_CustomParameter2;
    QLCDNumber *lcdNumber_Value_Module2_CustomParameter3;
    QLCDNumber *lcdNumber_Value_Module2_CustomParameter4;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter1;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter2;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter3;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter4;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter5;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter6;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter7;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter8;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter9;
    QLCDNumber *lcdNumber_Value_Module2_SettableParameter10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(976, 885);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_ComPortControls = new QGroupBox(centralWidget);
        groupBox_ComPortControls->setObjectName(QString::fromUtf8("groupBox_ComPortControls"));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        groupBox_ComPortControls->setFont(font);
        groupBox_ComPortControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_ComPortControls->setAlignment(Qt::AlignCenter);
        groupBox_ComPortControls->setFlat(false);
        groupBox_ComPortControls->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox_ComPortControls);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_Status = new QLabel(groupBox_ComPortControls);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));
        label_Status->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Status, 0, 0, 1, 1);

        label_ShowStatus = new QLabel(groupBox_ComPortControls);
        label_ShowStatus->setObjectName(QString::fromUtf8("label_ShowStatus"));
        label_ShowStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_ShowStatus->setTextFormat(Qt::RichText);
        label_ShowStatus->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_ShowStatus, 0, 1, 1, 1);

        label_SerialPort = new QLabel(groupBox_ComPortControls);
        label_SerialPort->setObjectName(QString::fromUtf8("label_SerialPort"));
        label_SerialPort->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_SerialPort, 1, 0, 1, 1);

        comboBox_Port = new QComboBox(groupBox_ComPortControls);
        comboBox_Port->setObjectName(QString::fromUtf8("comboBox_Port"));
        comboBox_Port->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_Port->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(comboBox_Port, 1, 1, 1, 1);

        pushButton_Open = new QPushButton(groupBox_ComPortControls);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));

        gridLayout_3->addWidget(pushButton_Open, 2, 0, 1, 1);

        pushButton_Close = new QPushButton(groupBox_ComPortControls);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));

        gridLayout_3->addWidget(pushButton_Close, 2, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_ComPortControls, 0, 0, 1, 1);

        groupBox_CustomFrameControls = new QGroupBox(centralWidget);
        groupBox_CustomFrameControls->setObjectName(QString::fromUtf8("groupBox_CustomFrameControls"));
        groupBox_CustomFrameControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_CustomFrameControls->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_CustomFrameControls);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_Source = new QLabel(groupBox_CustomFrameControls);
        label_Source->setObjectName(QString::fromUtf8("label_Source"));
        label_Source->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Source, 0, 0, 1, 1);

        lineEdit_Source = new QLineEdit(groupBox_CustomFrameControls);
        lineEdit_Source->setObjectName(QString::fromUtf8("lineEdit_Source"));
        lineEdit_Source->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Source, 0, 1, 1, 1);

        label_Module = new QLabel(groupBox_CustomFrameControls);
        label_Module->setObjectName(QString::fromUtf8("label_Module"));
        label_Module->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Module, 1, 0, 1, 1);

        comboBox_Module = new QComboBox(groupBox_CustomFrameControls);
        comboBox_Module->addItem(QString());
        comboBox_Module->addItem(QString());
        comboBox_Module->setObjectName(QString::fromUtf8("comboBox_Module"));

        gridLayout_2->addWidget(comboBox_Module, 1, 1, 1, 1);

        label_Type = new QLabel(groupBox_CustomFrameControls);
        label_Type->setObjectName(QString::fromUtf8("label_Type"));
        label_Type->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Type, 2, 0, 1, 1);

        lineEdit_Type = new QLineEdit(groupBox_CustomFrameControls);
        lineEdit_Type->setObjectName(QString::fromUtf8("lineEdit_Type"));
        lineEdit_Type->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Type, 2, 1, 1, 1);

        label_Parameter = new QLabel(groupBox_CustomFrameControls);
        label_Parameter->setObjectName(QString::fromUtf8("label_Parameter"));
        label_Parameter->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Parameter, 3, 0, 1, 1);

        label_Sign = new QLabel(groupBox_CustomFrameControls);
        label_Sign->setObjectName(QString::fromUtf8("label_Sign"));
        label_Sign->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Sign, 4, 0, 1, 1);

        lineEdit_Sign = new QLineEdit(groupBox_CustomFrameControls);
        lineEdit_Sign->setObjectName(QString::fromUtf8("lineEdit_Sign"));
        lineEdit_Sign->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Sign, 4, 1, 1, 1);

        label_Length = new QLabel(groupBox_CustomFrameControls);
        label_Length->setObjectName(QString::fromUtf8("label_Length"));
        label_Length->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Length, 5, 0, 1, 1);

        lineEdit_Length = new QLineEdit(groupBox_CustomFrameControls);
        lineEdit_Length->setObjectName(QString::fromUtf8("lineEdit_Length"));
        lineEdit_Length->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Length, 5, 1, 1, 1);

        label_Payload = new QLabel(groupBox_CustomFrameControls);
        label_Payload->setObjectName(QString::fromUtf8("label_Payload"));
        label_Payload->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Payload, 6, 0, 1, 1);

        lineEdit_Payload = new QLineEdit(groupBox_CustomFrameControls);
        lineEdit_Payload->setObjectName(QString::fromUtf8("lineEdit_Payload"));
        lineEdit_Payload->setMaxLength(10);

        gridLayout_2->addWidget(lineEdit_Payload, 6, 1, 1, 1);

        pushButton_Send = new QPushButton(groupBox_CustomFrameControls);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_2->addWidget(pushButton_Send, 7, 0, 1, 2);

        pushButton_SimulateParametersSequence = new QPushButton(groupBox_CustomFrameControls);
        pushButton_SimulateParametersSequence->setObjectName(QString::fromUtf8("pushButton_SimulateParametersSequence"));
        pushButton_SimulateParametersSequence->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_2->addWidget(pushButton_SimulateParametersSequence, 8, 0, 1, 2);

        comboBox_Parameter = new QComboBox(groupBox_CustomFrameControls);
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->setObjectName(QString::fromUtf8("comboBox_Parameter"));

        gridLayout_2->addWidget(comboBox_Parameter, 3, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_CustomFrameControls, 0, 1, 2, 1);

        groupBox_GraphControls = new QGroupBox(centralWidget);
        groupBox_GraphControls->setObjectName(QString::fromUtf8("groupBox_GraphControls"));
        groupBox_GraphControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_GraphControls->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox_GraphControls);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_StartValue = new QLabel(groupBox_GraphControls);
        label_StartValue->setObjectName(QString::fromUtf8("label_StartValue"));
        label_StartValue->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StartValue, 0, 0, 1, 1);

        lineEdit_StartValue = new QLineEdit(groupBox_GraphControls);
        lineEdit_StartValue->setObjectName(QString::fromUtf8("lineEdit_StartValue"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_StartValue->sizePolicy().hasHeightForWidth());
        lineEdit_StartValue->setSizePolicy(sizePolicy);
        lineEdit_StartValue->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_StartValue, 0, 1, 1, 1);

        label_StopValue = new QLabel(groupBox_GraphControls);
        label_StopValue->setObjectName(QString::fromUtf8("label_StopValue"));
        label_StopValue->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StopValue, 1, 0, 1, 1);

        lineEdit_StopValue = new QLineEdit(groupBox_GraphControls);
        lineEdit_StopValue->setObjectName(QString::fromUtf8("lineEdit_StopValue"));
        lineEdit_StopValue->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_StopValue, 1, 1, 1, 1);

        label_Multiplier = new QLabel(groupBox_GraphControls);
        label_Multiplier->setObjectName(QString::fromUtf8("label_Multiplier"));
        label_Multiplier->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_Multiplier, 2, 0, 1, 1);

        lineEdit_Multiplier = new QLineEdit(groupBox_GraphControls);
        lineEdit_Multiplier->setObjectName(QString::fromUtf8("lineEdit_Multiplier"));
        sizePolicy.setHeightForWidth(lineEdit_Multiplier->sizePolicy().hasHeightForWidth());
        lineEdit_Multiplier->setSizePolicy(sizePolicy);
        lineEdit_Multiplier->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_Multiplier, 2, 1, 1, 1);

        pushButton_StartLinear_1signal = new QPushButton(groupBox_GraphControls);
        pushButton_StartLinear_1signal->setObjectName(QString::fromUtf8("pushButton_StartLinear_1signal"));
        pushButton_StartLinear_1signal->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartLinear_1signal, 3, 0, 1, 1);

        pushButton_StartSine_1signal = new QPushButton(groupBox_GraphControls);
        pushButton_StartSine_1signal->setObjectName(QString::fromUtf8("pushButton_StartSine_1signal"));
        pushButton_StartSine_1signal->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartSine_1signal, 3, 1, 1, 1);

        pushButton_StartLinear_2signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartLinear_2signals->setObjectName(QString::fromUtf8("pushButton_StartLinear_2signals"));
        pushButton_StartLinear_2signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartLinear_2signals, 4, 0, 1, 1);

        pushButton_StartSine_2signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartSine_2signals->setObjectName(QString::fromUtf8("pushButton_StartSine_2signals"));
        pushButton_StartSine_2signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartSine_2signals, 4, 1, 1, 1);

        pushButton_StartLinear_3signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartLinear_3signals->setObjectName(QString::fromUtf8("pushButton_StartLinear_3signals"));
        pushButton_StartLinear_3signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartLinear_3signals, 5, 0, 1, 1);

        pushButton_StartSine_3signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartSine_3signals->setObjectName(QString::fromUtf8("pushButton_StartSine_3signals"));
        pushButton_StartSine_3signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartSine_3signals, 5, 1, 1, 1);

        pushButton_StartLinear_4signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartLinear_4signals->setObjectName(QString::fromUtf8("pushButton_StartLinear_4signals"));
        pushButton_StartLinear_4signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartLinear_4signals, 6, 0, 1, 1);

        pushButton_StartSine_4signals = new QPushButton(groupBox_GraphControls);
        pushButton_StartSine_4signals->setObjectName(QString::fromUtf8("pushButton_StartSine_4signals"));
        pushButton_StartSine_4signals->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartSine_4signals, 6, 1, 1, 1);

        pushButton_Stop = new QPushButton(groupBox_GraphControls);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setStyleSheet(QString::fromUtf8("color:red"));

        gridLayout_4->addWidget(pushButton_Stop, 7, 0, 1, 2);


        gridLayout_7->addWidget(groupBox_GraphControls, 0, 2, 2, 1);

        groupBox_ModuleControls = new QGroupBox(centralWidget);
        groupBox_ModuleControls->setObjectName(QString::fromUtf8("groupBox_ModuleControls"));
        groupBox_ModuleControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_ModuleControls->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_ModuleControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_InitParameter4Name = new QLabel(groupBox_ModuleControls);
        label_InitParameter4Name->setObjectName(QString::fromUtf8("label_InitParameter4Name"));
        label_InitParameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_InitParameter4Name, 3, 0, 1, 1);

        lineEdit_InitParameter1Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_InitParameter1Value->setObjectName(QString::fromUtf8("lineEdit_InitParameter1Value"));
        lineEdit_InitParameter1Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_InitParameter1Value, 0, 1, 1, 1);

        pushButton_InitConnectionModule2 = new QPushButton(groupBox_ModuleControls);
        pushButton_InitConnectionModule2->setObjectName(QString::fromUtf8("pushButton_InitConnectionModule2"));
        pushButton_InitConnectionModule2->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout->addWidget(pushButton_InitConnectionModule2, 9, 1, 1, 1);

        lineEdit_Parameter2Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Parameter2Name->setObjectName(QString::fromUtf8("lineEdit_Parameter2Name"));
        lineEdit_Parameter2Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Parameter2Name, 6, 1, 1, 1);

        lineEdit_InitParameter3Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_InitParameter3Value->setObjectName(QString::fromUtf8("lineEdit_InitParameter3Value"));
        lineEdit_InitParameter3Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_InitParameter3Value, 2, 1, 1, 1);

        label_InitParameter2Name = new QLabel(groupBox_ModuleControls);
        label_InitParameter2Name->setObjectName(QString::fromUtf8("label_InitParameter2Name"));
        label_InitParameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_InitParameter2Name, 1, 0, 1, 1);

        lineEdit_InitParameter4Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_InitParameter4Value->setObjectName(QString::fromUtf8("lineEdit_InitParameter4Value"));
        lineEdit_InitParameter4Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_InitParameter4Value, 3, 1, 1, 1);

        label_Parameter3Name = new QLabel(groupBox_ModuleControls);
        label_Parameter3Name->setObjectName(QString::fromUtf8("label_Parameter3Name"));
        label_Parameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Parameter3Name, 7, 0, 1, 1);

        lineEdit_Parameter3Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Parameter3Name->setObjectName(QString::fromUtf8("lineEdit_Parameter3Name"));
        lineEdit_Parameter3Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Parameter3Name, 7, 1, 1, 1);

        label_InitParameter5Name = new QLabel(groupBox_ModuleControls);
        label_InitParameter5Name->setObjectName(QString::fromUtf8("label_InitParameter5Name"));
        label_InitParameter5Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_InitParameter5Name, 4, 0, 1, 1);

        label_InitParameter1Name = new QLabel(groupBox_ModuleControls);
        label_InitParameter1Name->setObjectName(QString::fromUtf8("label_InitParameter1Name"));
        label_InitParameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_InitParameter1Name, 0, 0, 1, 1);

        label_Parameter2Name = new QLabel(groupBox_ModuleControls);
        label_Parameter2Name->setObjectName(QString::fromUtf8("label_Parameter2Name"));
        label_Parameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Parameter2Name, 6, 0, 1, 1);

        label_Parameter1Name = new QLabel(groupBox_ModuleControls);
        label_Parameter1Name->setObjectName(QString::fromUtf8("label_Parameter1Name"));
        label_Parameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Parameter1Name, 5, 0, 1, 1);

        pushButton_DeinitConnectionModule2 = new QPushButton(groupBox_ModuleControls);
        pushButton_DeinitConnectionModule2->setObjectName(QString::fromUtf8("pushButton_DeinitConnectionModule2"));
        pushButton_DeinitConnectionModule2->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout->addWidget(pushButton_DeinitConnectionModule2, 10, 1, 1, 1);

        label_InitParameter3Name = new QLabel(groupBox_ModuleControls);
        label_InitParameter3Name->setObjectName(QString::fromUtf8("label_InitParameter3Name"));
        label_InitParameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_InitParameter3Name, 2, 0, 1, 1);

        lineEdit_Parameter1Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Parameter1Name->setObjectName(QString::fromUtf8("lineEdit_Parameter1Name"));
        lineEdit_Parameter1Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Parameter1Name, 5, 1, 1, 1);

        pushButton_InitConnectionModule1 = new QPushButton(groupBox_ModuleControls);
        pushButton_InitConnectionModule1->setObjectName(QString::fromUtf8("pushButton_InitConnectionModule1"));
        pushButton_InitConnectionModule1->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout->addWidget(pushButton_InitConnectionModule1, 9, 0, 1, 1);

        lineEdit_InitParameter2Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_InitParameter2Value->setObjectName(QString::fromUtf8("lineEdit_InitParameter2Value"));
        lineEdit_InitParameter2Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_InitParameter2Value, 1, 1, 1, 1);

        lineEdit_InitParameter5Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_InitParameter5Value->setObjectName(QString::fromUtf8("lineEdit_InitParameter5Value"));
        lineEdit_InitParameter5Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_InitParameter5Value, 4, 1, 1, 1);

        pushButton_DeinitConnectionModule1 = new QPushButton(groupBox_ModuleControls);
        pushButton_DeinitConnectionModule1->setObjectName(QString::fromUtf8("pushButton_DeinitConnectionModule1"));
        pushButton_DeinitConnectionModule1->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout->addWidget(pushButton_DeinitConnectionModule1, 10, 0, 1, 1);

        label_Parameter4Name = new QLabel(groupBox_ModuleControls);
        label_Parameter4Name->setObjectName(QString::fromUtf8("label_Parameter4Name"));
        label_Parameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Parameter4Name, 8, 0, 1, 1);

        lineEdit_Parameter4Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Parameter4Name->setObjectName(QString::fromUtf8("lineEdit_Parameter4Name"));
        lineEdit_Parameter4Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Parameter4Name, 8, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_ModuleControls, 1, 0, 1, 1);

        groupBox_Module1 = new QGroupBox(centralWidget);
        groupBox_Module1->setObjectName(QString::fromUtf8("groupBox_Module1"));
        groupBox_Module1->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_Module1->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_Module1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        ValuesModule1Parameters = new QVBoxLayout();
        ValuesModule1Parameters->setSpacing(6);
        ValuesModule1Parameters->setObjectName(QString::fromUtf8("ValuesModule1Parameters"));
        lcdNumber_Value_Module1_CustomParameter1 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_CustomParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_CustomParameter1"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush2(QColor(255, 255, 220, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_CustomParameter1->setPalette(palette);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_CustomParameter1);

        lcdNumber_Value_Module1_CustomParameter2 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_CustomParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_CustomParameter2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_CustomParameter2->setPalette(palette1);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_CustomParameter2);

        lcdNumber_Value_Module1_CustomParameter3 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_CustomParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_CustomParameter3"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_CustomParameter3->setPalette(palette2);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_CustomParameter3);

        lcdNumber_Value_Module1_CustomParameter4 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_CustomParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_CustomParameter4"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_CustomParameter4->setPalette(palette3);
        lcdNumber_Value_Module1_CustomParameter4->setSegmentStyle(QLCDNumber::Filled);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_CustomParameter4);

        lcdNumber_Value_Module1_SettableParameter1 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter1"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter1->setPalette(palette4);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter1);

        lcdNumber_Value_Module1_SettableParameter2 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter2"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter2->setPalette(palette5);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter2);

        lcdNumber_Value_Module1_SettableParameter3 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter3"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter3->setPalette(palette6);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter3);

        lcdNumber_Value_Module1_SettableParameter4 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter4"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter4->setPalette(palette7);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter4);

        lcdNumber_Value_Module1_SettableParameter5 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter5->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter5"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter5->setPalette(palette8);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter5);

        lcdNumber_Value_Module1_SettableParameter6 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter6->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter6"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter6->setPalette(palette9);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter6);

        lcdNumber_Value_Module1_SettableParameter7 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter7->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter7"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter7->setPalette(palette10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter7);

        lcdNumber_Value_Module1_SettableParameter8 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter8->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter8"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter8->setPalette(palette11);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter8);

        lcdNumber_Value_Module1_SettableParameter9 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter9->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter9"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter9->setPalette(palette12);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter9);

        lcdNumber_Value_Module1_SettableParameter10 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter10->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter10"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module1_SettableParameter10->setPalette(palette13);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter10);


        gridLayout_5->addLayout(ValuesModule1Parameters, 0, 2, 1, 1);

        Module1Parameters = new QVBoxLayout();
        Module1Parameters->setSpacing(6);
        Module1Parameters->setObjectName(QString::fromUtf8("Module1Parameters"));
        label_Module1_CustomParameter1Name = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter1Name->setObjectName(QString::fromUtf8("label_Module1_CustomParameter1Name"));
        label_Module1_CustomParameter1Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_CustomParameter1Name);

        label_Module1_CustomParameter2Name = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter2Name->setObjectName(QString::fromUtf8("label_Module1_CustomParameter2Name"));
        label_Module1_CustomParameter2Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_CustomParameter2Name);

        label_Module1_CustomParameter3Name = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter3Name->setObjectName(QString::fromUtf8("label_Module1_CustomParameter3Name"));
        label_Module1_CustomParameter3Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_CustomParameter3Name);

        label_Module1_CustomParameter4Name = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter4Name->setObjectName(QString::fromUtf8("label_Module1_CustomParameter4Name"));
        label_Module1_CustomParameter4Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_CustomParameter4Name);

        label_Module1_SettableParameter1Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter1Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter1Name"));
        label_Module1_SettableParameter1Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter1Name);

        label_Module1_SettableParameter2Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter2Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter2Name"));
        label_Module1_SettableParameter2Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter2Name);

        label_Module1_SettableParameter3Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter3Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter3Name"));
        label_Module1_SettableParameter3Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter3Name);

        label_Module1_SettableParameter4Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter4Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter4Name"));
        label_Module1_SettableParameter4Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter4Name);

        label_Module1_SettableParameter5Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter5Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter5Name"));
        label_Module1_SettableParameter5Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter5Name);

        label_Module1_SettableParameter6Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter6Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter6Name"));
        label_Module1_SettableParameter6Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter6Name);

        label_Module1_SettableParameter7Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter7Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter7Name"));
        label_Module1_SettableParameter7Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter7Name);

        label_Module1_SettableParameter8Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter8Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter8Name"));
        label_Module1_SettableParameter8Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter8Name);

        label_Module1_SettableParameter9Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter9Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter9Name"));
        label_Module1_SettableParameter9Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter9Name);

        label_Module1_SettableParameter10Name = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter10Name->setObjectName(QString::fromUtf8("label_Module1_SettableParameter10Name"));
        label_Module1_SettableParameter10Name->setAlignment(Qt::AlignCenter);

        Module1Parameters->addWidget(label_Module1_SettableParameter10Name);


        gridLayout_5->addLayout(Module1Parameters, 0, 0, 1, 1);

        Module1ParameterStates = new QVBoxLayout();
        Module1ParameterStates->setSpacing(6);
        Module1ParameterStates->setObjectName(QString::fromUtf8("Module1ParameterStates"));
        label_Module1_CustomParameter1_State = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter1_State->setObjectName(QString::fromUtf8("label_Module1_CustomParameter1_State"));
        label_Module1_CustomParameter1_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_CustomParameter1_State);

        label_Module1_CustomParameter2_State = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter2_State->setObjectName(QString::fromUtf8("label_Module1_CustomParameter2_State"));
        label_Module1_CustomParameter2_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_CustomParameter2_State);

        label_Module1_CustomParameter3_State = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter3_State->setObjectName(QString::fromUtf8("label_Module1_CustomParameter3_State"));
        label_Module1_CustomParameter3_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_CustomParameter3_State);

        label_Module1_CustomParameter4_State = new QLabel(groupBox_Module1);
        label_Module1_CustomParameter4_State->setObjectName(QString::fromUtf8("label_Module1_CustomParameter4_State"));
        label_Module1_CustomParameter4_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_CustomParameter4_State);

        label_Module1_SettableParameter1_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter1_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter1_State"));
        label_Module1_SettableParameter1_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter1_State);

        label_Module1_SettableParameter2_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter2_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter2_State"));
        label_Module1_SettableParameter2_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter2_State);

        label_Module1_SettableParameter3_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter3_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter3_State"));
        label_Module1_SettableParameter3_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter3_State);

        label_Module1_SettableParameter4_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter4_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter4_State"));
        label_Module1_SettableParameter4_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter4_State);

        label_Module1_SettableParameter5_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter5_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter5_State"));
        label_Module1_SettableParameter5_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter5_State);

        label_Module1_SettableParameter6_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter6_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter6_State"));
        label_Module1_SettableParameter6_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter6_State);

        label_Module1_SettableParameter7_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter7_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter7_State"));
        label_Module1_SettableParameter7_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter7_State);

        label_Module1_SettableParameter8_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter8_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter8_State"));
        label_Module1_SettableParameter8_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter8_State);

        label_Module1_SettableParameter9_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter9_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter9_State"));
        label_Module1_SettableParameter9_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter9_State);

        label_Module1_SettableParameter10_State = new QLabel(groupBox_Module1);
        label_Module1_SettableParameter10_State->setObjectName(QString::fromUtf8("label_Module1_SettableParameter10_State"));
        label_Module1_SettableParameter10_State->setAlignment(Qt::AlignCenter);

        Module1ParameterStates->addWidget(label_Module1_SettableParameter10_State);


        gridLayout_5->addLayout(Module1ParameterStates, 0, 1, 1, 1);


        gridLayout_7->addWidget(groupBox_Module1, 2, 0, 1, 1);

        groupBox_Module2 = new QGroupBox(centralWidget);
        groupBox_Module2->setObjectName(QString::fromUtf8("groupBox_Module2"));
        groupBox_Module2->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_Module2->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox_Module2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        Module2Parameters = new QVBoxLayout();
        Module2Parameters->setSpacing(6);
        Module2Parameters->setObjectName(QString::fromUtf8("Module2Parameters"));
        label_Module2_CustomParameter1Name = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter1Name->setObjectName(QString::fromUtf8("label_Module2_CustomParameter1Name"));
        label_Module2_CustomParameter1Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_CustomParameter1Name);

        label_Module2_CustomParameter2Name = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter2Name->setObjectName(QString::fromUtf8("label_Module2_CustomParameter2Name"));
        label_Module2_CustomParameter2Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_CustomParameter2Name);

        label_Module2_CustomParameter3Name = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter3Name->setObjectName(QString::fromUtf8("label_Module2_CustomParameter3Name"));
        label_Module2_CustomParameter3Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_CustomParameter3Name);

        label_Module2_CustomParameter4Name = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter4Name->setObjectName(QString::fromUtf8("label_Module2_CustomParameter4Name"));
        label_Module2_CustomParameter4Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_CustomParameter4Name);

        label_Module2_SettableParameter1Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter1Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter1Name"));
        label_Module2_SettableParameter1Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter1Name);

        label_Module2_SettableParameter2Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter2Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter2Name"));
        label_Module2_SettableParameter2Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter2Name);

        label_Module2_SettableParameter3Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter3Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter3Name"));
        label_Module2_SettableParameter3Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter3Name);

        label_Module2_SettableParameter4Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter4Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter4Name"));
        label_Module2_SettableParameter4Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter4Name);

        label_Module2_SettableParameter5Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter5Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter5Name"));
        label_Module2_SettableParameter5Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter5Name);

        label_Module2_SettableParameter6Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter6Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter6Name"));
        label_Module2_SettableParameter6Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter6Name);

        label_Module2_SettableParameter7Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter7Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter7Name"));
        label_Module2_SettableParameter7Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter7Name);

        label_Module2_SettableParameter8Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter8Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter8Name"));
        label_Module2_SettableParameter8Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter8Name);

        label_Module2_SettableParameter9Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter9Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter9Name"));
        label_Module2_SettableParameter9Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter9Name);

        label_Module2_SettableParameter10Name = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter10Name->setObjectName(QString::fromUtf8("label_Module2_SettableParameter10Name"));
        label_Module2_SettableParameter10Name->setAlignment(Qt::AlignCenter);

        Module2Parameters->addWidget(label_Module2_SettableParameter10Name);


        gridLayout_6->addLayout(Module2Parameters, 0, 0, 1, 1);

        Module2ParameterStates = new QVBoxLayout();
        Module2ParameterStates->setSpacing(6);
        Module2ParameterStates->setObjectName(QString::fromUtf8("Module2ParameterStates"));
        label_Module2_CustomParameter1_State = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter1_State->setObjectName(QString::fromUtf8("label_Module2_CustomParameter1_State"));
        label_Module2_CustomParameter1_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_CustomParameter1_State);

        label_Module2_CustomParameter2_State = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter2_State->setObjectName(QString::fromUtf8("label_Module2_CustomParameter2_State"));
        label_Module2_CustomParameter2_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_CustomParameter2_State);

        label_Module2_CustomParameter3_State = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter3_State->setObjectName(QString::fromUtf8("label_Module2_CustomParameter3_State"));
        label_Module2_CustomParameter3_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_CustomParameter3_State);

        label_Module2_CustomParameter4_State = new QLabel(groupBox_Module2);
        label_Module2_CustomParameter4_State->setObjectName(QString::fromUtf8("label_Module2_CustomParameter4_State"));
        label_Module2_CustomParameter4_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_CustomParameter4_State);

        label_Module2_SettableParameter1_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter1_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter1_State"));
        label_Module2_SettableParameter1_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter1_State);

        label_Module2_SettableParameter2_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter2_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter2_State"));
        label_Module2_SettableParameter2_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter2_State);

        label_Module2_SettableParameter3_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter3_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter3_State"));
        label_Module2_SettableParameter3_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter3_State);

        label_Module2_SettableParameter4_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter4_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter4_State"));
        label_Module2_SettableParameter4_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter4_State);

        label_Module2_SettableParameter5_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter5_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter5_State"));
        label_Module2_SettableParameter5_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter5_State);

        label_Module2_SettableParameter6_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter6_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter6_State"));
        label_Module2_SettableParameter6_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter6_State);

        label_Module2_SettableParameter7_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter7_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter7_State"));
        label_Module2_SettableParameter7_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter7_State);

        label_Module2_SettableParameter8_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter8_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter8_State"));
        label_Module2_SettableParameter8_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter8_State);

        label_Module2_SettableParameter9_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter9_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter9_State"));
        label_Module2_SettableParameter9_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter9_State);

        label_Module2_SettableParameter10_State = new QLabel(groupBox_Module2);
        label_Module2_SettableParameter10_State->setObjectName(QString::fromUtf8("label_Module2_SettableParameter10_State"));
        label_Module2_SettableParameter10_State->setAlignment(Qt::AlignCenter);

        Module2ParameterStates->addWidget(label_Module2_SettableParameter10_State);


        gridLayout_6->addLayout(Module2ParameterStates, 0, 1, 1, 1);

        ValuesModule2Parameters = new QVBoxLayout();
        ValuesModule2Parameters->setSpacing(6);
        ValuesModule2Parameters->setObjectName(QString::fromUtf8("ValuesModule2Parameters"));
        lcdNumber_Value_Module2_CustomParameter1 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_CustomParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_CustomParameter1"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_CustomParameter1->setPalette(palette14);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_CustomParameter1);

        lcdNumber_Value_Module2_CustomParameter2 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_CustomParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_CustomParameter2"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette15.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_CustomParameter2->setPalette(palette15);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_CustomParameter2);

        lcdNumber_Value_Module2_CustomParameter3 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_CustomParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_CustomParameter3"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette16.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_CustomParameter3->setPalette(palette16);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_CustomParameter3);

        lcdNumber_Value_Module2_CustomParameter4 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_CustomParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_CustomParameter4"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_CustomParameter4->setPalette(palette17);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_CustomParameter4);

        lcdNumber_Value_Module2_SettableParameter1 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter1"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette18.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter1->setPalette(palette18);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter1);

        lcdNumber_Value_Module2_SettableParameter2 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter2"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette19.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter2->setPalette(palette19);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter2);

        lcdNumber_Value_Module2_SettableParameter3 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter3"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter3->setPalette(palette20);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter3);

        lcdNumber_Value_Module2_SettableParameter4 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter4"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette21.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette21.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter4->setPalette(palette21);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter4);

        lcdNumber_Value_Module2_SettableParameter5 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter5->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter5"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette22.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette22.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter5->setPalette(palette22);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter5);

        lcdNumber_Value_Module2_SettableParameter6 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter6->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter6"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette23.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette23.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter6->setPalette(palette23);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter6);

        lcdNumber_Value_Module2_SettableParameter7 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter7->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter7"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette24.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette24.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter7->setPalette(palette24);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter7);

        lcdNumber_Value_Module2_SettableParameter8 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter8->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter8"));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush);
        palette25.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette25.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette25.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter8->setPalette(palette25);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter8);

        lcdNumber_Value_Module2_SettableParameter9 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter9->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter9"));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette26.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette26.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter9->setPalette(palette26);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter9);

        lcdNumber_Value_Module2_SettableParameter10 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter10->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter10"));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette27.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette27.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module2_SettableParameter10->setPalette(palette27);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter10);


        gridLayout_6->addLayout(ValuesModule2Parameters, 0, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_Module2, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        comboBox_Port->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_ComPortControls->setTitle(QCoreApplication::translate("MainWindow", "COM Port Settings", nullptr));
        label_Status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_ShowStatus->setText(QCoreApplication::translate("MainWindow", "<color:red>Closed</>", nullptr));
        label_SerialPort->setText(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        pushButton_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        groupBox_CustomFrameControls->setTitle(QCoreApplication::translate("MainWindow", "Custom Frame", nullptr));
        label_Source->setText(QCoreApplication::translate("MainWindow", "Source", nullptr));
        lineEdit_Source->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Module->setText(QCoreApplication::translate("MainWindow", "Module", nullptr));
        comboBox_Module->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_Module->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));

        label_Type->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        lineEdit_Type->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Parameter->setText(QCoreApplication::translate("MainWindow", "Parameter", nullptr));
        label_Sign->setText(QCoreApplication::translate("MainWindow", "Sign", nullptr));
        lineEdit_Sign->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Length->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        label_Payload->setText(QCoreApplication::translate("MainWindow", "Payload", nullptr));
        lineEdit_Payload->setText(QCoreApplication::translate("MainWindow", "123.456", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        pushButton_SimulateParametersSequence->setText(QCoreApplication::translate("MainWindow", "Simulate parameters sequence", nullptr));
        comboBox_Parameter->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_Parameter->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_Parameter->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_Parameter->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        comboBox_Parameter->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        comboBox_Parameter->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        comboBox_Parameter->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        comboBox_Parameter->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        comboBox_Parameter->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        comboBox_Parameter->setItemText(9, QCoreApplication::translate("MainWindow", "a", nullptr));

        groupBox_GraphControls->setTitle(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        label_StartValue->setText(QCoreApplication::translate("MainWindow", "Start x", nullptr));
        lineEdit_StartValue->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_StopValue->setText(QCoreApplication::translate("MainWindow", "Stop x", nullptr));
        lineEdit_StopValue->setText(QCoreApplication::translate("MainWindow", "720", nullptr));
        label_Multiplier->setText(QCoreApplication::translate("MainWindow", "Multiplier", nullptr));
        lineEdit_Multiplier->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_StartLinear_1signal->setText(QCoreApplication::translate("MainWindow", "Start Linear 1 signal", nullptr));
        pushButton_StartSine_1signal->setText(QCoreApplication::translate("MainWindow", "Start Sine 1 signal", nullptr));
        pushButton_StartLinear_2signals->setText(QCoreApplication::translate("MainWindow", "Start Linear 2 signals", nullptr));
        pushButton_StartSine_2signals->setText(QCoreApplication::translate("MainWindow", "Start Sine 2 signals", nullptr));
        pushButton_StartLinear_3signals->setText(QCoreApplication::translate("MainWindow", "Start Linear 3 signals", nullptr));
        pushButton_StartSine_3signals->setText(QCoreApplication::translate("MainWindow", "Start Sine 3 signals", nullptr));
        pushButton_StartLinear_4signals->setText(QCoreApplication::translate("MainWindow", "Start Linear 4 signals", nullptr));
        pushButton_StartSine_4signals->setText(QCoreApplication::translate("MainWindow", "Start Sine 4 signals", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        groupBox_ModuleControls->setTitle(QCoreApplication::translate("MainWindow", "Module Control", nullptr));
        label_InitParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        pushButton_InitConnectionModule2->setText(QCoreApplication::translate("MainWindow", "Init Connection Module 2", nullptr));
        label_InitParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Parameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3 name", nullptr));
        label_InitParameter5Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_InitParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Parameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2 name", nullptr));
        label_Parameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1 name", nullptr));
        pushButton_DeinitConnectionModule2->setText(QCoreApplication::translate("MainWindow", "Deinit Connection Module 2", nullptr));
        label_InitParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        pushButton_InitConnectionModule1->setText(QCoreApplication::translate("MainWindow", "Init Connection Module 1", nullptr));
        pushButton_DeinitConnectionModule1->setText(QCoreApplication::translate("MainWindow", "Deinit Connection Module 1", nullptr));
        label_Parameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4 name", nullptr));
        groupBox_Module1->setTitle(QCoreApplication::translate("MainWindow", "Module 1", nullptr));
        label_Module1_CustomParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1_CustomParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1_CustomParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1_CustomParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1_SettableParameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1", nullptr));
        label_Module1_SettableParameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2", nullptr));
        label_Module1_SettableParameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3", nullptr));
        label_Module1_SettableParameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4", nullptr));
        label_Module1_SettableParameter5Name->setText(QCoreApplication::translate("MainWindow", "Parameter 5", nullptr));
        label_Module1_SettableParameter6Name->setText(QCoreApplication::translate("MainWindow", "Parameter 6", nullptr));
        label_Module1_SettableParameter7Name->setText(QCoreApplication::translate("MainWindow", "Parameter 7", nullptr));
        label_Module1_SettableParameter8Name->setText(QCoreApplication::translate("MainWindow", "Parameter 8", nullptr));
        label_Module1_SettableParameter9Name->setText(QCoreApplication::translate("MainWindow", "Parameter 9", nullptr));
        label_Module1_SettableParameter10Name->setText(QCoreApplication::translate("MainWindow", "Parameter 10", nullptr));
        label_Module1_CustomParameter1_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module1_CustomParameter2_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module1_CustomParameter3_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module1_CustomParameter4_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module1_SettableParameter1_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter2_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter3_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter4_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter5_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter6_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter7_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter8_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter9_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module1_SettableParameter10_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        groupBox_Module2->setTitle(QCoreApplication::translate("MainWindow", "Module 2", nullptr));
        label_Module2_CustomParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2_CustomParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2_CustomParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2_CustomParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2_SettableParameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1", nullptr));
        label_Module2_SettableParameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2", nullptr));
        label_Module2_SettableParameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3", nullptr));
        label_Module2_SettableParameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4", nullptr));
        label_Module2_SettableParameter5Name->setText(QCoreApplication::translate("MainWindow", "Parameter 5", nullptr));
        label_Module2_SettableParameter6Name->setText(QCoreApplication::translate("MainWindow", "Parameter 6", nullptr));
        label_Module2_SettableParameter7Name->setText(QCoreApplication::translate("MainWindow", "Parameter 7", nullptr));
        label_Module2_SettableParameter8Name->setText(QCoreApplication::translate("MainWindow", "Parameter 8", nullptr));
        label_Module2_SettableParameter9Name->setText(QCoreApplication::translate("MainWindow", "Parameter 9", nullptr));
        label_Module2_SettableParameter10Name->setText(QCoreApplication::translate("MainWindow", "Parameter 10", nullptr));
        label_Module2_CustomParameter1_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module2_CustomParameter2_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module2_CustomParameter3_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module2_CustomParameter4_State->setText(QCoreApplication::translate("MainWindow", "<font color='green'>Enabled</font>", nullptr));
        label_Module2_SettableParameter1_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter2_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter3_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter4_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter5_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter6_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter7_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter8_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter9_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module2_SettableParameter10_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
