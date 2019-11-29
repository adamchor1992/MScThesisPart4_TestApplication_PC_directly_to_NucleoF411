/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_ComPortControls;
    QGridLayout *gridLayout_3;
    QLabel *label_Status;
    QPushButton *pushButton_Open;
    QPushButton *pushButton_Close;
    QLabel *label_SerialPort;
    QLabel *label_ShowStatus;
    QComboBox *comboBox_Port;
    QGroupBox *groupBox_ModuleControls;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_Module1InitParameter1Name;
    QLineEdit *lineEdit_Module1InitParameter1Value;
    QLabel *label_Module1InitParameter2Name;
    QLineEdit *lineEdit_Module1InitParameter2Value;
    QLabel *label_Module1InitParameter3Name;
    QLineEdit *lineEdit_Module1InitParameter3Value;
    QLabel *label_Module1InitParameter4Name;
    QLineEdit *lineEdit_Module1InitParameter4Value;
    QLabel *label_Module1InitParameter5Name;
    QLineEdit *lineEdit_Module1InitParameter5Value;
    QLabel *label_Module1Parameter1Name;
    QLineEdit *lineEdit_Module1Parameter1Name;
    QLabel *label_Module1Parameter2Name;
    QLineEdit *lineEdit_Module1Parameter2Name;
    QLabel *label_Module1Parameter3Name;
    QLineEdit *lineEdit_Module1Parameter3Name;
    QLabel *label_Module1Parameter4Name;
    QLineEdit *lineEdit_Module1Parameter4Name;
    QPushButton *pushButton_InitConnectionModule1;
    QPushButton *pushButton_DeinitConnectionModule1;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_10;
    QLabel *label_Module2InitParameter1Name;
    QLineEdit *lineEdit_Module2InitParameter1Value;
    QLabel *label_Module2InitParameter2Name;
    QLineEdit *lineEdit_Module2InitParameter2Value;
    QLabel *label_Module2InitParameter3Name;
    QLineEdit *lineEdit_Module2InitParameter3Value;
    QLabel *label_Module2InitParameter4Name;
    QLineEdit *lineEdit_Module2InitParameter4Value;
    QLabel *label_Module2InitParameter5Name;
    QLineEdit *lineEdit_Module2InitParameter5Value;
    QLabel *label_Module2Parameter1Name;
    QLineEdit *lineEdit_Module2Parameter1Name;
    QLabel *label_Module2Parameter2Name;
    QLineEdit *lineEdit_Module2Parameter2Name;
    QLabel *label_Module2Parameter3Name;
    QLineEdit *lineEdit_Module2Parameter3Name;
    QLabel *label_Module2Parameter4Name;
    QLineEdit *lineEdit_Module2Parameter4Name;
    QPushButton *pushButton_InitConnectionModule2;
    QPushButton *pushButton_DeinitConnectionModule2;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_11;
    QLabel *label_Module3InitParameter1Name;
    QLineEdit *lineEdit_Module3InitParameter1Value;
    QLabel *label_Module3InitParameter2Name;
    QLineEdit *lineEdit_Module3InitParameter2Value;
    QLabel *label_Module3InitParameter3Name;
    QLineEdit *lineEdit_Module3InitParameter3Value;
    QLabel *label_Module3InitParameter4Name;
    QLineEdit *lineEdit_Module3InitParameter4Value;
    QLabel *label_Module3InitParameter5Name;
    QLineEdit *lineEdit_Module3InitParameter5Value;
    QLabel *label_Module3Parameter1Name;
    QLineEdit *lineEdit_Module3Parameter1Name;
    QLabel *label_Module3Parameter2Name;
    QLineEdit *lineEdit_Module3Parameter2Name;
    QLabel *label_Module3Parameter3Name;
    QLineEdit *lineEdit_Module3Parameter3Name;
    QLabel *label_Module3Parameter4Name;
    QLineEdit *lineEdit_Module3Parameter4Name;
    QPushButton *pushButton_InitConnectionModule3;
    QPushButton *pushButton_DeinitConnectionModule3;
    QGroupBox *groupBox_CustomPacketControls;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_CustomPacketModule;
    QLabel *label_Type;
    QLabel *label_Sign;
    QLineEdit *lineEdit_Type;
    QPushButton *pushButton_SendWrongCrcPacket;
    QPushButton *pushButton_Send;
    QLabel *label_Source;
    QLineEdit *lineEdit_Sign;
    QLineEdit *lineEdit_Length;
    QLabel *label_CustomPacketModule;
    QLabel *label_Payload;
    QComboBox *comboBox_Parameter;
    QLineEdit *lineEdit_Payload;
    QLabel *label_Length;
    QLineEdit *lineEdit_Source;
    QLabel *label_Parameter;
    QGroupBox *groupBox_GraphControls;
    QGridLayout *gridLayout_4;
    QLineEdit *lineEdit_StartLinear;
    QLineEdit *lineEdit_RangeMaximum;
    QLabel *label_SignalCount;
    QPushButton *pushButton_Stop;
    QLabel *label_Linear;
    QPushButton *pushButton_SetRanges;
    QPushButton *pushButton_StartSine;
    QFrame *line_1;
    QFrame *line_3;
    QLabel *label_StepLinear;
    QComboBox *comboBox_GraphSignalCount;
    QLabel *label_RangeMaximum;
    QLabel *label_StopDegrees;
    QLineEdit *lineEdit_MultiplierSine;
    QLabel *label_MultiplierSine;
    QLineEdit *lineEdit_StepLinear;
    QFrame *line_2;
    QLabel *label_RangeMinimum;
    QFrame *line_4;
    QLabel *label_TimeRange;
    QLabel *label_GraphModule;
    QLabel *label_Sine;
    QLineEdit *lineEdit_StopDegrees;
    QComboBox *comboBox_GraphModule;
    QPushButton *pushButton_StartLinear;
    QLineEdit *lineEdit_StartDegrees;
    QLabel *label_StopLinear;
    QLineEdit *lineEdit_RangeMinimum;
    QLabel *label_StartLinear;
    QLineEdit *lineEdit_StopLinear;
    QLabel *label_StartDegrees;
    QComboBox *comboBox_TimeRange;
    QGroupBox *groupBox_PacketDisplay;
    QGridLayout *gridLayout_12;
    QTableWidget *tableWidget_PacketDisplay;
    QPushButton *pushButton_ClearTable;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_Module1;
    QGridLayout *gridLayout_5;
    QVBoxLayout *Module1ParameterStates;
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
    QVBoxLayout *ValuesModule1Parameters;
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
    QGroupBox *groupBox_Module2;
    QGridLayout *gridLayout_6;
    QVBoxLayout *ValuesModule2Parameters;
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
    QVBoxLayout *Module2ParameterStates;
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
    QVBoxLayout *Module2Parameters;
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
    QGroupBox *groupBox_Module3;
    QGridLayout *gridLayout_7;
    QVBoxLayout *Module3ParameterStates;
    QLabel *label_Module3_SettableParameter1_State;
    QLabel *label_Module3_SettableParameter2_State;
    QLabel *label_Module3_SettableParameter3_State;
    QLabel *label_Module3_SettableParameter4_State;
    QLabel *label_Module3_SettableParameter5_State;
    QLabel *label_Module3_SettableParameter6_State;
    QLabel *label_Module3_SettableParameter7_State;
    QLabel *label_Module3_SettableParameter8_State;
    QLabel *label_Module3_SettableParameter9_State;
    QLabel *label_Module3_SettableParameter10_State;
    QVBoxLayout *Module3Parameters;
    QLabel *label_Module3_SettableParameter1Name;
    QLabel *label_Module3_SettableParameter2Name;
    QLabel *label_Module3_SettableParameter3Name;
    QLabel *label_Module3_SettableParameter4Name;
    QLabel *label_Module3_SettableParameter5Name;
    QLabel *label_Module3_SettableParameter6Name;
    QLabel *label_Module3_SettableParameter7Name;
    QLabel *label_Module3_SettableParameter8Name;
    QLabel *label_Module3_SettableParameter9Name;
    QLabel *label_Module3_SettableParameter10Name;
    QVBoxLayout *ValuesModule3Parameters;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter1;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter2;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter3;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter4;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter5;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter6;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter7;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter8;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter9;
    QLCDNumber *lcdNumber_Value_Module3_SettableParameter10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 1059);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
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
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(-1, 0, -1, 0);
        label_Status = new QLabel(groupBox_ComPortControls);
        label_Status->setObjectName(QString::fromUtf8("label_Status"));
        label_Status->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_Status, 0, 0, 1, 1);

        pushButton_Open = new QPushButton(groupBox_ComPortControls);
        pushButton_Open->setObjectName(QString::fromUtf8("pushButton_Open"));

        gridLayout_3->addWidget(pushButton_Open, 2, 0, 1, 1);

        pushButton_Close = new QPushButton(groupBox_ComPortControls);
        pushButton_Close->setObjectName(QString::fromUtf8("pushButton_Close"));

        gridLayout_3->addWidget(pushButton_Close, 2, 1, 1, 1);

        label_SerialPort = new QLabel(groupBox_ComPortControls);
        label_SerialPort->setObjectName(QString::fromUtf8("label_SerialPort"));
        label_SerialPort->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_SerialPort, 1, 0, 1, 1);

        label_ShowStatus = new QLabel(groupBox_ComPortControls);
        label_ShowStatus->setObjectName(QString::fromUtf8("label_ShowStatus"));
        label_ShowStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_ShowStatus->setTextFormat(Qt::RichText);
        label_ShowStatus->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_ShowStatus, 0, 1, 1, 1);

        comboBox_Port = new QComboBox(groupBox_ComPortControls);
        comboBox_Port->setObjectName(QString::fromUtf8("comboBox_Port"));
        comboBox_Port->setInsertPolicy(QComboBox::InsertAtBottom);
        comboBox_Port->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(comboBox_Port, 1, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_ComPortControls);

        groupBox_ModuleControls = new QGroupBox(centralWidget);
        groupBox_ModuleControls->setObjectName(QString::fromUtf8("groupBox_ModuleControls"));
        groupBox_ModuleControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_ModuleControls->setAlignment(Qt::AlignCenter);
        gridLayout_9 = new QGridLayout(groupBox_ModuleControls);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setVerticalSpacing(0);
        gridLayout_9->setContentsMargins(-1, 0, -1, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        label_Module1InitParameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module1InitParameter1Name->setObjectName(QString::fromUtf8("label_Module1InitParameter1Name"));
        label_Module1InitParameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1InitParameter1Name, 0, 0, 1, 1);

        lineEdit_Module1InitParameter1Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1InitParameter1Value->setObjectName(QString::fromUtf8("lineEdit_Module1InitParameter1Value"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_Module1InitParameter1Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module1InitParameter1Value->setSizePolicy(sizePolicy);
        lineEdit_Module1InitParameter1Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1InitParameter1Value, 0, 1, 1, 1);

        label_Module1InitParameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module1InitParameter2Name->setObjectName(QString::fromUtf8("label_Module1InitParameter2Name"));
        label_Module1InitParameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1InitParameter2Name, 1, 0, 1, 1);

        lineEdit_Module1InitParameter2Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1InitParameter2Value->setObjectName(QString::fromUtf8("lineEdit_Module1InitParameter2Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module1InitParameter2Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module1InitParameter2Value->setSizePolicy(sizePolicy);
        lineEdit_Module1InitParameter2Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1InitParameter2Value, 1, 1, 1, 1);

        label_Module1InitParameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module1InitParameter3Name->setObjectName(QString::fromUtf8("label_Module1InitParameter3Name"));
        label_Module1InitParameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1InitParameter3Name, 2, 0, 1, 1);

        lineEdit_Module1InitParameter3Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1InitParameter3Value->setObjectName(QString::fromUtf8("lineEdit_Module1InitParameter3Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module1InitParameter3Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module1InitParameter3Value->setSizePolicy(sizePolicy);
        lineEdit_Module1InitParameter3Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1InitParameter3Value, 2, 1, 1, 1);

        label_Module1InitParameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module1InitParameter4Name->setObjectName(QString::fromUtf8("label_Module1InitParameter4Name"));
        label_Module1InitParameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1InitParameter4Name, 3, 0, 1, 1);

        lineEdit_Module1InitParameter4Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1InitParameter4Value->setObjectName(QString::fromUtf8("lineEdit_Module1InitParameter4Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module1InitParameter4Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module1InitParameter4Value->setSizePolicy(sizePolicy);
        lineEdit_Module1InitParameter4Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1InitParameter4Value, 3, 1, 1, 1);

        label_Module1InitParameter5Name = new QLabel(groupBox_ModuleControls);
        label_Module1InitParameter5Name->setObjectName(QString::fromUtf8("label_Module1InitParameter5Name"));
        label_Module1InitParameter5Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1InitParameter5Name, 4, 0, 1, 1);

        lineEdit_Module1InitParameter5Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1InitParameter5Value->setObjectName(QString::fromUtf8("lineEdit_Module1InitParameter5Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module1InitParameter5Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module1InitParameter5Value->setSizePolicy(sizePolicy);
        lineEdit_Module1InitParameter5Value->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1InitParameter5Value, 4, 1, 1, 1);

        label_Module1Parameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module1Parameter1Name->setObjectName(QString::fromUtf8("label_Module1Parameter1Name"));
        label_Module1Parameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1Parameter1Name, 5, 0, 1, 1);

        lineEdit_Module1Parameter1Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1Parameter1Name->setObjectName(QString::fromUtf8("lineEdit_Module1Parameter1Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module1Parameter1Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module1Parameter1Name->setSizePolicy(sizePolicy);
        lineEdit_Module1Parameter1Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1Parameter1Name, 5, 1, 1, 1);

        label_Module1Parameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module1Parameter2Name->setObjectName(QString::fromUtf8("label_Module1Parameter2Name"));
        label_Module1Parameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1Parameter2Name, 6, 0, 1, 1);

        lineEdit_Module1Parameter2Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1Parameter2Name->setObjectName(QString::fromUtf8("lineEdit_Module1Parameter2Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module1Parameter2Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module1Parameter2Name->setSizePolicy(sizePolicy);
        lineEdit_Module1Parameter2Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1Parameter2Name, 6, 1, 1, 1);

        label_Module1Parameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module1Parameter3Name->setObjectName(QString::fromUtf8("label_Module1Parameter3Name"));
        label_Module1Parameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1Parameter3Name, 7, 0, 1, 1);

        lineEdit_Module1Parameter3Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1Parameter3Name->setObjectName(QString::fromUtf8("lineEdit_Module1Parameter3Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module1Parameter3Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module1Parameter3Name->setSizePolicy(sizePolicy);
        lineEdit_Module1Parameter3Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1Parameter3Name, 7, 1, 1, 1);

        label_Module1Parameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module1Parameter4Name->setObjectName(QString::fromUtf8("label_Module1Parameter4Name"));
        label_Module1Parameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_Module1Parameter4Name, 8, 0, 1, 1);

        lineEdit_Module1Parameter4Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module1Parameter4Name->setObjectName(QString::fromUtf8("lineEdit_Module1Parameter4Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module1Parameter4Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module1Parameter4Name->setSizePolicy(sizePolicy);
        lineEdit_Module1Parameter4Name->setReadOnly(true);

        gridLayout->addWidget(lineEdit_Module1Parameter4Name, 8, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButton_InitConnectionModule1 = new QPushButton(groupBox_ModuleControls);
        pushButton_InitConnectionModule1->setObjectName(QString::fromUtf8("pushButton_InitConnectionModule1"));
        pushButton_InitConnectionModule1->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout->addWidget(pushButton_InitConnectionModule1);

        pushButton_DeinitConnectionModule1 = new QPushButton(groupBox_ModuleControls);
        pushButton_DeinitConnectionModule1->setObjectName(QString::fromUtf8("pushButton_DeinitConnectionModule1"));
        pushButton_DeinitConnectionModule1->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout->addWidget(pushButton_DeinitConnectionModule1);


        gridLayout_9->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(0);
        label_Module2InitParameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module2InitParameter1Name->setObjectName(QString::fromUtf8("label_Module2InitParameter1Name"));
        label_Module2InitParameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2InitParameter1Name, 0, 0, 1, 1);

        lineEdit_Module2InitParameter1Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2InitParameter1Value->setObjectName(QString::fromUtf8("lineEdit_Module2InitParameter1Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module2InitParameter1Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module2InitParameter1Value->setSizePolicy(sizePolicy);
        lineEdit_Module2InitParameter1Value->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2InitParameter1Value, 0, 1, 1, 1);

        label_Module2InitParameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module2InitParameter2Name->setObjectName(QString::fromUtf8("label_Module2InitParameter2Name"));
        label_Module2InitParameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2InitParameter2Name, 1, 0, 1, 1);

        lineEdit_Module2InitParameter2Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2InitParameter2Value->setObjectName(QString::fromUtf8("lineEdit_Module2InitParameter2Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module2InitParameter2Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module2InitParameter2Value->setSizePolicy(sizePolicy);
        lineEdit_Module2InitParameter2Value->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2InitParameter2Value, 1, 1, 1, 1);

        label_Module2InitParameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module2InitParameter3Name->setObjectName(QString::fromUtf8("label_Module2InitParameter3Name"));
        label_Module2InitParameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2InitParameter3Name, 2, 0, 1, 1);

        lineEdit_Module2InitParameter3Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2InitParameter3Value->setObjectName(QString::fromUtf8("lineEdit_Module2InitParameter3Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module2InitParameter3Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module2InitParameter3Value->setSizePolicy(sizePolicy);
        lineEdit_Module2InitParameter3Value->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2InitParameter3Value, 2, 1, 1, 1);

        label_Module2InitParameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module2InitParameter4Name->setObjectName(QString::fromUtf8("label_Module2InitParameter4Name"));
        label_Module2InitParameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2InitParameter4Name, 3, 0, 1, 1);

        lineEdit_Module2InitParameter4Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2InitParameter4Value->setObjectName(QString::fromUtf8("lineEdit_Module2InitParameter4Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module2InitParameter4Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module2InitParameter4Value->setSizePolicy(sizePolicy);
        lineEdit_Module2InitParameter4Value->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2InitParameter4Value, 3, 1, 1, 1);

        label_Module2InitParameter5Name = new QLabel(groupBox_ModuleControls);
        label_Module2InitParameter5Name->setObjectName(QString::fromUtf8("label_Module2InitParameter5Name"));
        label_Module2InitParameter5Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2InitParameter5Name, 4, 0, 1, 1);

        lineEdit_Module2InitParameter5Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2InitParameter5Value->setObjectName(QString::fromUtf8("lineEdit_Module2InitParameter5Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module2InitParameter5Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module2InitParameter5Value->setSizePolicy(sizePolicy);
        lineEdit_Module2InitParameter5Value->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2InitParameter5Value, 4, 1, 1, 1);

        label_Module2Parameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module2Parameter1Name->setObjectName(QString::fromUtf8("label_Module2Parameter1Name"));
        label_Module2Parameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2Parameter1Name, 5, 0, 1, 1);

        lineEdit_Module2Parameter1Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2Parameter1Name->setObjectName(QString::fromUtf8("lineEdit_Module2Parameter1Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module2Parameter1Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module2Parameter1Name->setSizePolicy(sizePolicy);
        lineEdit_Module2Parameter1Name->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2Parameter1Name, 5, 1, 1, 1);

        label_Module2Parameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module2Parameter2Name->setObjectName(QString::fromUtf8("label_Module2Parameter2Name"));
        label_Module2Parameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2Parameter2Name, 6, 0, 1, 1);

        lineEdit_Module2Parameter2Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2Parameter2Name->setObjectName(QString::fromUtf8("lineEdit_Module2Parameter2Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module2Parameter2Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module2Parameter2Name->setSizePolicy(sizePolicy);
        lineEdit_Module2Parameter2Name->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2Parameter2Name, 6, 1, 1, 1);

        label_Module2Parameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module2Parameter3Name->setObjectName(QString::fromUtf8("label_Module2Parameter3Name"));
        label_Module2Parameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2Parameter3Name, 7, 0, 1, 1);

        lineEdit_Module2Parameter3Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2Parameter3Name->setObjectName(QString::fromUtf8("lineEdit_Module2Parameter3Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module2Parameter3Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module2Parameter3Name->setSizePolicy(sizePolicy);
        lineEdit_Module2Parameter3Name->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2Parameter3Name, 7, 1, 1, 1);

        label_Module2Parameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module2Parameter4Name->setObjectName(QString::fromUtf8("label_Module2Parameter4Name"));
        label_Module2Parameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_Module2Parameter4Name, 8, 0, 1, 1);

        lineEdit_Module2Parameter4Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module2Parameter4Name->setObjectName(QString::fromUtf8("lineEdit_Module2Parameter4Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module2Parameter4Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module2Parameter4Name->setSizePolicy(sizePolicy);
        lineEdit_Module2Parameter4Name->setReadOnly(true);

        gridLayout_10->addWidget(lineEdit_Module2Parameter4Name, 8, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_10);

        pushButton_InitConnectionModule2 = new QPushButton(groupBox_ModuleControls);
        pushButton_InitConnectionModule2->setObjectName(QString::fromUtf8("pushButton_InitConnectionModule2"));
        pushButton_InitConnectionModule2->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout_2->addWidget(pushButton_InitConnectionModule2);

        pushButton_DeinitConnectionModule2 = new QPushButton(groupBox_ModuleControls);
        pushButton_DeinitConnectionModule2->setObjectName(QString::fromUtf8("pushButton_DeinitConnectionModule2"));
        pushButton_DeinitConnectionModule2->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout_2->addWidget(pushButton_DeinitConnectionModule2);


        gridLayout_9->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setVerticalSpacing(0);
        label_Module3InitParameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module3InitParameter1Name->setObjectName(QString::fromUtf8("label_Module3InitParameter1Name"));
        label_Module3InitParameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3InitParameter1Name, 0, 0, 1, 1);

        lineEdit_Module3InitParameter1Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3InitParameter1Value->setObjectName(QString::fromUtf8("lineEdit_Module3InitParameter1Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module3InitParameter1Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module3InitParameter1Value->setSizePolicy(sizePolicy);
        lineEdit_Module3InitParameter1Value->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3InitParameter1Value, 0, 1, 1, 1);

        label_Module3InitParameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module3InitParameter2Name->setObjectName(QString::fromUtf8("label_Module3InitParameter2Name"));
        label_Module3InitParameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3InitParameter2Name, 1, 0, 1, 1);

        lineEdit_Module3InitParameter2Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3InitParameter2Value->setObjectName(QString::fromUtf8("lineEdit_Module3InitParameter2Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module3InitParameter2Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module3InitParameter2Value->setSizePolicy(sizePolicy);
        lineEdit_Module3InitParameter2Value->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3InitParameter2Value, 1, 1, 1, 1);

        label_Module3InitParameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module3InitParameter3Name->setObjectName(QString::fromUtf8("label_Module3InitParameter3Name"));
        label_Module3InitParameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3InitParameter3Name, 2, 0, 1, 1);

        lineEdit_Module3InitParameter3Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3InitParameter3Value->setObjectName(QString::fromUtf8("lineEdit_Module3InitParameter3Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module3InitParameter3Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module3InitParameter3Value->setSizePolicy(sizePolicy);
        lineEdit_Module3InitParameter3Value->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3InitParameter3Value, 2, 1, 1, 1);

        label_Module3InitParameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module3InitParameter4Name->setObjectName(QString::fromUtf8("label_Module3InitParameter4Name"));
        label_Module3InitParameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3InitParameter4Name, 3, 0, 1, 1);

        lineEdit_Module3InitParameter4Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3InitParameter4Value->setObjectName(QString::fromUtf8("lineEdit_Module3InitParameter4Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module3InitParameter4Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module3InitParameter4Value->setSizePolicy(sizePolicy);
        lineEdit_Module3InitParameter4Value->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3InitParameter4Value, 3, 1, 1, 1);

        label_Module3InitParameter5Name = new QLabel(groupBox_ModuleControls);
        label_Module3InitParameter5Name->setObjectName(QString::fromUtf8("label_Module3InitParameter5Name"));
        label_Module3InitParameter5Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3InitParameter5Name, 4, 0, 1, 1);

        lineEdit_Module3InitParameter5Value = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3InitParameter5Value->setObjectName(QString::fromUtf8("lineEdit_Module3InitParameter5Value"));
        sizePolicy.setHeightForWidth(lineEdit_Module3InitParameter5Value->sizePolicy().hasHeightForWidth());
        lineEdit_Module3InitParameter5Value->setSizePolicy(sizePolicy);
        lineEdit_Module3InitParameter5Value->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3InitParameter5Value, 4, 1, 1, 1);

        label_Module3Parameter1Name = new QLabel(groupBox_ModuleControls);
        label_Module3Parameter1Name->setObjectName(QString::fromUtf8("label_Module3Parameter1Name"));
        label_Module3Parameter1Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3Parameter1Name, 5, 0, 1, 1);

        lineEdit_Module3Parameter1Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3Parameter1Name->setObjectName(QString::fromUtf8("lineEdit_Module3Parameter1Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module3Parameter1Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module3Parameter1Name->setSizePolicy(sizePolicy);
        lineEdit_Module3Parameter1Name->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3Parameter1Name, 5, 1, 1, 1);

        label_Module3Parameter2Name = new QLabel(groupBox_ModuleControls);
        label_Module3Parameter2Name->setObjectName(QString::fromUtf8("label_Module3Parameter2Name"));
        label_Module3Parameter2Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3Parameter2Name, 6, 0, 1, 1);

        lineEdit_Module3Parameter2Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3Parameter2Name->setObjectName(QString::fromUtf8("lineEdit_Module3Parameter2Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module3Parameter2Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module3Parameter2Name->setSizePolicy(sizePolicy);
        lineEdit_Module3Parameter2Name->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3Parameter2Name, 6, 1, 1, 1);

        label_Module3Parameter3Name = new QLabel(groupBox_ModuleControls);
        label_Module3Parameter3Name->setObjectName(QString::fromUtf8("label_Module3Parameter3Name"));
        label_Module3Parameter3Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3Parameter3Name, 7, 0, 1, 1);

        lineEdit_Module3Parameter3Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3Parameter3Name->setObjectName(QString::fromUtf8("lineEdit_Module3Parameter3Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module3Parameter3Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module3Parameter3Name->setSizePolicy(sizePolicy);
        lineEdit_Module3Parameter3Name->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3Parameter3Name, 7, 1, 1, 1);

        label_Module3Parameter4Name = new QLabel(groupBox_ModuleControls);
        label_Module3Parameter4Name->setObjectName(QString::fromUtf8("label_Module3Parameter4Name"));
        label_Module3Parameter4Name->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_Module3Parameter4Name, 8, 0, 1, 1);

        lineEdit_Module3Parameter4Name = new QLineEdit(groupBox_ModuleControls);
        lineEdit_Module3Parameter4Name->setObjectName(QString::fromUtf8("lineEdit_Module3Parameter4Name"));
        sizePolicy.setHeightForWidth(lineEdit_Module3Parameter4Name->sizePolicy().hasHeightForWidth());
        lineEdit_Module3Parameter4Name->setSizePolicy(sizePolicy);
        lineEdit_Module3Parameter4Name->setReadOnly(true);

        gridLayout_11->addWidget(lineEdit_Module3Parameter4Name, 8, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_11);

        pushButton_InitConnectionModule3 = new QPushButton(groupBox_ModuleControls);
        pushButton_InitConnectionModule3->setObjectName(QString::fromUtf8("pushButton_InitConnectionModule3"));
        pushButton_InitConnectionModule3->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout_3->addWidget(pushButton_InitConnectionModule3);

        pushButton_DeinitConnectionModule3 = new QPushButton(groupBox_ModuleControls);
        pushButton_DeinitConnectionModule3->setObjectName(QString::fromUtf8("pushButton_DeinitConnectionModule3"));
        pushButton_DeinitConnectionModule3->setStyleSheet(QString::fromUtf8("color: blue"));

        verticalLayout_3->addWidget(pushButton_DeinitConnectionModule3);


        gridLayout_9->addLayout(verticalLayout_3, 0, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_ModuleControls);


        horizontalLayout->addLayout(verticalLayout_4);

        groupBox_CustomPacketControls = new QGroupBox(centralWidget);
        groupBox_CustomPacketControls->setObjectName(QString::fromUtf8("groupBox_CustomPacketControls"));
        groupBox_CustomPacketControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_CustomPacketControls->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_CustomPacketControls);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(-1, 0, -1, 0);
        comboBox_CustomPacketModule = new QComboBox(groupBox_CustomPacketControls);
        comboBox_CustomPacketModule->addItem(QString());
        comboBox_CustomPacketModule->addItem(QString());
        comboBox_CustomPacketModule->addItem(QString());
        comboBox_CustomPacketModule->setObjectName(QString::fromUtf8("comboBox_CustomPacketModule"));
        sizePolicy.setHeightForWidth(comboBox_CustomPacketModule->sizePolicy().hasHeightForWidth());
        comboBox_CustomPacketModule->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_CustomPacketModule, 1, 1, 1, 1);

        label_Type = new QLabel(groupBox_CustomPacketControls);
        label_Type->setObjectName(QString::fromUtf8("label_Type"));
        label_Type->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Type, 2, 0, 1, 1);

        label_Sign = new QLabel(groupBox_CustomPacketControls);
        label_Sign->setObjectName(QString::fromUtf8("label_Sign"));
        label_Sign->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Sign, 4, 0, 1, 1);

        lineEdit_Type = new QLineEdit(groupBox_CustomPacketControls);
        lineEdit_Type->setObjectName(QString::fromUtf8("lineEdit_Type"));
        sizePolicy.setHeightForWidth(lineEdit_Type->sizePolicy().hasHeightForWidth());
        lineEdit_Type->setSizePolicy(sizePolicy);
        lineEdit_Type->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Type, 2, 1, 1, 1);

        pushButton_SendWrongCrcPacket = new QPushButton(groupBox_CustomPacketControls);
        pushButton_SendWrongCrcPacket->setObjectName(QString::fromUtf8("pushButton_SendWrongCrcPacket"));
        pushButton_SendWrongCrcPacket->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_2->addWidget(pushButton_SendWrongCrcPacket, 8, 0, 1, 2);

        pushButton_Send = new QPushButton(groupBox_CustomPacketControls);
        pushButton_Send->setObjectName(QString::fromUtf8("pushButton_Send"));
        pushButton_Send->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_2->addWidget(pushButton_Send, 7, 0, 1, 2);

        label_Source = new QLabel(groupBox_CustomPacketControls);
        label_Source->setObjectName(QString::fromUtf8("label_Source"));
        label_Source->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Source, 0, 0, 1, 1);

        lineEdit_Sign = new QLineEdit(groupBox_CustomPacketControls);
        lineEdit_Sign->setObjectName(QString::fromUtf8("lineEdit_Sign"));
        sizePolicy.setHeightForWidth(lineEdit_Sign->sizePolicy().hasHeightForWidth());
        lineEdit_Sign->setSizePolicy(sizePolicy);
        lineEdit_Sign->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Sign, 4, 1, 1, 1);

        lineEdit_Length = new QLineEdit(groupBox_CustomPacketControls);
        lineEdit_Length->setObjectName(QString::fromUtf8("lineEdit_Length"));
        sizePolicy.setHeightForWidth(lineEdit_Length->sizePolicy().hasHeightForWidth());
        lineEdit_Length->setSizePolicy(sizePolicy);
        lineEdit_Length->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Length, 5, 1, 1, 1);

        label_CustomPacketModule = new QLabel(groupBox_CustomPacketControls);
        label_CustomPacketModule->setObjectName(QString::fromUtf8("label_CustomPacketModule"));
        label_CustomPacketModule->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_CustomPacketModule, 1, 0, 1, 1);

        label_Payload = new QLabel(groupBox_CustomPacketControls);
        label_Payload->setObjectName(QString::fromUtf8("label_Payload"));
        label_Payload->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Payload, 6, 0, 1, 1);

        comboBox_Parameter = new QComboBox(groupBox_CustomPacketControls);
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
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->addItem(QString());
        comboBox_Parameter->setObjectName(QString::fromUtf8("comboBox_Parameter"));
        sizePolicy.setHeightForWidth(comboBox_Parameter->sizePolicy().hasHeightForWidth());
        comboBox_Parameter->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(comboBox_Parameter, 3, 1, 1, 1);

        lineEdit_Payload = new QLineEdit(groupBox_CustomPacketControls);
        lineEdit_Payload->setObjectName(QString::fromUtf8("lineEdit_Payload"));
        sizePolicy.setHeightForWidth(lineEdit_Payload->sizePolicy().hasHeightForWidth());
        lineEdit_Payload->setSizePolicy(sizePolicy);
        lineEdit_Payload->setMaxLength(10);

        gridLayout_2->addWidget(lineEdit_Payload, 6, 1, 1, 1);

        label_Length = new QLabel(groupBox_CustomPacketControls);
        label_Length->setObjectName(QString::fromUtf8("label_Length"));
        label_Length->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Length, 5, 0, 1, 1);

        lineEdit_Source = new QLineEdit(groupBox_CustomPacketControls);
        lineEdit_Source->setObjectName(QString::fromUtf8("lineEdit_Source"));
        sizePolicy.setHeightForWidth(lineEdit_Source->sizePolicy().hasHeightForWidth());
        lineEdit_Source->setSizePolicy(sizePolicy);
        lineEdit_Source->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_Source, 0, 1, 1, 1);

        label_Parameter = new QLabel(groupBox_CustomPacketControls);
        label_Parameter->setObjectName(QString::fromUtf8("label_Parameter"));
        label_Parameter->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_Parameter, 3, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_CustomPacketControls);

        groupBox_GraphControls = new QGroupBox(centralWidget);
        groupBox_GraphControls->setObjectName(QString::fromUtf8("groupBox_GraphControls"));
        groupBox_GraphControls->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_GraphControls->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox_GraphControls);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(3);
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        lineEdit_StartLinear = new QLineEdit(groupBox_GraphControls);
        lineEdit_StartLinear->setObjectName(QString::fromUtf8("lineEdit_StartLinear"));
        sizePolicy.setHeightForWidth(lineEdit_StartLinear->sizePolicy().hasHeightForWidth());
        lineEdit_StartLinear->setSizePolicy(sizePolicy);
        lineEdit_StartLinear->setMaxLength(11);
        lineEdit_StartLinear->setAlignment(Qt::AlignCenter);
        lineEdit_StartLinear->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_StartLinear, 10, 1, 1, 1);

        lineEdit_RangeMaximum = new QLineEdit(groupBox_GraphControls);
        lineEdit_RangeMaximum->setObjectName(QString::fromUtf8("lineEdit_RangeMaximum"));
        sizePolicy.setHeightForWidth(lineEdit_RangeMaximum->sizePolicy().hasHeightForWidth());
        lineEdit_RangeMaximum->setSizePolicy(sizePolicy);
        lineEdit_RangeMaximum->setMaxLength(11);
        lineEdit_RangeMaximum->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_RangeMaximum, 6, 1, 1, 1);

        label_SignalCount = new QLabel(groupBox_GraphControls);
        label_SignalCount->setObjectName(QString::fromUtf8("label_SignalCount"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_SignalCount->sizePolicy().hasHeightForWidth());
        label_SignalCount->setSizePolicy(sizePolicy1);
        label_SignalCount->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_SignalCount, 1, 0, 1, 1);

        pushButton_Stop = new QPushButton(groupBox_GraphControls);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        sizePolicy.setHeightForWidth(pushButton_Stop->sizePolicy().hasHeightForWidth());
        pushButton_Stop->setSizePolicy(sizePolicy);
        pushButton_Stop->setStyleSheet(QString::fromUtf8("color:red"));

        gridLayout_4->addWidget(pushButton_Stop, 35, 0, 1, 2);

        label_Linear = new QLabel(groupBox_GraphControls);
        label_Linear->setObjectName(QString::fromUtf8("label_Linear"));
        sizePolicy.setHeightForWidth(label_Linear->sizePolicy().hasHeightForWidth());
        label_Linear->setSizePolicy(sizePolicy);
        label_Linear->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_Linear, 9, 0, 1, 2);

        pushButton_SetRanges = new QPushButton(groupBox_GraphControls);
        pushButton_SetRanges->setObjectName(QString::fromUtf8("pushButton_SetRanges"));
        sizePolicy.setHeightForWidth(pushButton_SetRanges->sizePolicy().hasHeightForWidth());
        pushButton_SetRanges->setSizePolicy(sizePolicy);
        pushButton_SetRanges->setStyleSheet(QString::fromUtf8("color:blue"));

        gridLayout_4->addWidget(pushButton_SetRanges, 7, 0, 1, 2);

        pushButton_StartSine = new QPushButton(groupBox_GraphControls);
        pushButton_StartSine->setObjectName(QString::fromUtf8("pushButton_StartSine"));
        sizePolicy.setHeightForWidth(pushButton_StartSine->sizePolicy().hasHeightForWidth());
        pushButton_StartSine->setSizePolicy(sizePolicy);
        pushButton_StartSine->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartSine, 32, 0, 1, 2);

        line_1 = new QFrame(groupBox_GraphControls);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        sizePolicy.setHeightForWidth(line_1->sizePolicy().hasHeightForWidth());
        line_1->setSizePolicy(sizePolicy);
        line_1->setFrameShape(QFrame::HLine);
        line_1->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_1, 8, 0, 1, 2);

        line_3 = new QFrame(groupBox_GraphControls);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        sizePolicy.setHeightForWidth(line_3->sizePolicy().hasHeightForWidth());
        line_3->setSizePolicy(sizePolicy);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 18, 0, 1, 2);

        label_StepLinear = new QLabel(groupBox_GraphControls);
        label_StepLinear->setObjectName(QString::fromUtf8("label_StepLinear"));
        label_StepLinear->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StepLinear, 13, 0, 1, 1);

        comboBox_GraphSignalCount = new QComboBox(groupBox_GraphControls);
        comboBox_GraphSignalCount->addItem(QString());
        comboBox_GraphSignalCount->addItem(QString());
        comboBox_GraphSignalCount->addItem(QString());
        comboBox_GraphSignalCount->addItem(QString());
        comboBox_GraphSignalCount->setObjectName(QString::fromUtf8("comboBox_GraphSignalCount"));

        gridLayout_4->addWidget(comboBox_GraphSignalCount, 1, 1, 1, 1);

        label_RangeMaximum = new QLabel(groupBox_GraphControls);
        label_RangeMaximum->setObjectName(QString::fromUtf8("label_RangeMaximum"));
        sizePolicy.setHeightForWidth(label_RangeMaximum->sizePolicy().hasHeightForWidth());
        label_RangeMaximum->setSizePolicy(sizePolicy);
        label_RangeMaximum->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_RangeMaximum, 5, 1, 1, 1);

        label_StopDegrees = new QLabel(groupBox_GraphControls);
        label_StopDegrees->setObjectName(QString::fromUtf8("label_StopDegrees"));
        label_StopDegrees->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StopDegrees, 21, 0, 1, 1);

        lineEdit_MultiplierSine = new QLineEdit(groupBox_GraphControls);
        lineEdit_MultiplierSine->setObjectName(QString::fromUtf8("lineEdit_MultiplierSine"));
        sizePolicy.setHeightForWidth(lineEdit_MultiplierSine->sizePolicy().hasHeightForWidth());
        lineEdit_MultiplierSine->setSizePolicy(sizePolicy);
        lineEdit_MultiplierSine->setMaxLength(11);
        lineEdit_MultiplierSine->setAlignment(Qt::AlignCenter);
        lineEdit_MultiplierSine->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_MultiplierSine, 22, 1, 1, 1);

        label_MultiplierSine = new QLabel(groupBox_GraphControls);
        label_MultiplierSine->setObjectName(QString::fromUtf8("label_MultiplierSine"));
        label_MultiplierSine->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_MultiplierSine, 22, 0, 1, 1);

        lineEdit_StepLinear = new QLineEdit(groupBox_GraphControls);
        lineEdit_StepLinear->setObjectName(QString::fromUtf8("lineEdit_StepLinear"));
        sizePolicy.setHeightForWidth(lineEdit_StepLinear->sizePolicy().hasHeightForWidth());
        lineEdit_StepLinear->setSizePolicy(sizePolicy);
        lineEdit_StepLinear->setMaxLength(11);
        lineEdit_StepLinear->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_StepLinear, 13, 1, 1, 1);

        line_2 = new QFrame(groupBox_GraphControls);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 2, 0, 1, 2);

        label_RangeMinimum = new QLabel(groupBox_GraphControls);
        label_RangeMinimum->setObjectName(QString::fromUtf8("label_RangeMinimum"));
        sizePolicy.setHeightForWidth(label_RangeMinimum->sizePolicy().hasHeightForWidth());
        label_RangeMinimum->setSizePolicy(sizePolicy);
        label_RangeMinimum->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_RangeMinimum, 5, 0, 1, 1);

        line_4 = new QFrame(groupBox_GraphControls);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_4, 33, 0, 1, 2);

        label_TimeRange = new QLabel(groupBox_GraphControls);
        label_TimeRange->setObjectName(QString::fromUtf8("label_TimeRange"));
        label_TimeRange->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_TimeRange, 3, 0, 1, 2);

        label_GraphModule = new QLabel(groupBox_GraphControls);
        label_GraphModule->setObjectName(QString::fromUtf8("label_GraphModule"));
        sizePolicy1.setHeightForWidth(label_GraphModule->sizePolicy().hasHeightForWidth());
        label_GraphModule->setSizePolicy(sizePolicy1);
        label_GraphModule->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_GraphModule, 0, 0, 1, 1);

        label_Sine = new QLabel(groupBox_GraphControls);
        label_Sine->setObjectName(QString::fromUtf8("label_Sine"));
        sizePolicy.setHeightForWidth(label_Sine->sizePolicy().hasHeightForWidth());
        label_Sine->setSizePolicy(sizePolicy);
        label_Sine->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_Sine, 19, 0, 1, 2);

        lineEdit_StopDegrees = new QLineEdit(groupBox_GraphControls);
        lineEdit_StopDegrees->setObjectName(QString::fromUtf8("lineEdit_StopDegrees"));
        lineEdit_StopDegrees->setMaxLength(11);
        lineEdit_StopDegrees->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_StopDegrees, 21, 1, 1, 1);

        comboBox_GraphModule = new QComboBox(groupBox_GraphControls);
        comboBox_GraphModule->addItem(QString());
        comboBox_GraphModule->addItem(QString());
        comboBox_GraphModule->addItem(QString());
        comboBox_GraphModule->setObjectName(QString::fromUtf8("comboBox_GraphModule"));
        sizePolicy.setHeightForWidth(comboBox_GraphModule->sizePolicy().hasHeightForWidth());
        comboBox_GraphModule->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(comboBox_GraphModule, 0, 1, 1, 1);

        pushButton_StartLinear = new QPushButton(groupBox_GraphControls);
        pushButton_StartLinear->setObjectName(QString::fromUtf8("pushButton_StartLinear"));
        sizePolicy.setHeightForWidth(pushButton_StartLinear->sizePolicy().hasHeightForWidth());
        pushButton_StartLinear->setSizePolicy(sizePolicy);
        pushButton_StartLinear->setStyleSheet(QString::fromUtf8("color: blue"));

        gridLayout_4->addWidget(pushButton_StartLinear, 17, 0, 1, 2);

        lineEdit_StartDegrees = new QLineEdit(groupBox_GraphControls);
        lineEdit_StartDegrees->setObjectName(QString::fromUtf8("lineEdit_StartDegrees"));
        lineEdit_StartDegrees->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_StartDegrees, 20, 1, 1, 1);

        label_StopLinear = new QLabel(groupBox_GraphControls);
        label_StopLinear->setObjectName(QString::fromUtf8("label_StopLinear"));
        label_StopLinear->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StopLinear, 12, 0, 1, 1);

        lineEdit_RangeMinimum = new QLineEdit(groupBox_GraphControls);
        lineEdit_RangeMinimum->setObjectName(QString::fromUtf8("lineEdit_RangeMinimum"));
        sizePolicy.setHeightForWidth(lineEdit_RangeMinimum->sizePolicy().hasHeightForWidth());
        lineEdit_RangeMinimum->setSizePolicy(sizePolicy);
        lineEdit_RangeMinimum->setMaxLength(11);
        lineEdit_RangeMinimum->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_RangeMinimum, 6, 0, 1, 1);

        label_StartLinear = new QLabel(groupBox_GraphControls);
        label_StartLinear->setObjectName(QString::fromUtf8("label_StartLinear"));
        label_StartLinear->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StartLinear, 10, 0, 1, 1);

        lineEdit_StopLinear = new QLineEdit(groupBox_GraphControls);
        lineEdit_StopLinear->setObjectName(QString::fromUtf8("lineEdit_StopLinear"));
        sizePolicy.setHeightForWidth(lineEdit_StopLinear->sizePolicy().hasHeightForWidth());
        lineEdit_StopLinear->setSizePolicy(sizePolicy);
        lineEdit_StopLinear->setMaxLength(11);
        lineEdit_StopLinear->setAlignment(Qt::AlignCenter);
        lineEdit_StopLinear->setReadOnly(false);

        gridLayout_4->addWidget(lineEdit_StopLinear, 12, 1, 1, 1);

        label_StartDegrees = new QLabel(groupBox_GraphControls);
        label_StartDegrees->setObjectName(QString::fromUtf8("label_StartDegrees"));
        label_StartDegrees->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_StartDegrees, 20, 0, 1, 1);

        comboBox_TimeRange = new QComboBox(groupBox_GraphControls);
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->addItem(QString());
        comboBox_TimeRange->setObjectName(QString::fromUtf8("comboBox_TimeRange"));
        comboBox_TimeRange->setLayoutDirection(Qt::LeftToRight);
        comboBox_TimeRange->setAutoFillBackground(false);

        gridLayout_4->addWidget(comboBox_TimeRange, 4, 0, 1, 2);


        horizontalLayout->addWidget(groupBox_GraphControls);


        gridLayout_8->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox_PacketDisplay = new QGroupBox(centralWidget);
        groupBox_PacketDisplay->setObjectName(QString::fromUtf8("groupBox_PacketDisplay"));
        groupBox_PacketDisplay->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_PacketDisplay->setAlignment(Qt::AlignCenter);
        gridLayout_12 = new QGridLayout(groupBox_PacketDisplay);
        gridLayout_12->setSpacing(0);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        tableWidget_PacketDisplay = new QTableWidget(groupBox_PacketDisplay);
        tableWidget_PacketDisplay->setObjectName(QString::fromUtf8("tableWidget_PacketDisplay"));
        tableWidget_PacketDisplay->setRowCount(0);
        tableWidget_PacketDisplay->setColumnCount(0);
        tableWidget_PacketDisplay->horizontalHeader()->setMinimumSectionSize(37);
        tableWidget_PacketDisplay->horizontalHeader()->setDefaultSectionSize(49);
        tableWidget_PacketDisplay->verticalHeader()->setMinimumSectionSize(23);

        gridLayout_12->addWidget(tableWidget_PacketDisplay, 0, 0, 1, 1);

        pushButton_ClearTable = new QPushButton(groupBox_PacketDisplay);
        pushButton_ClearTable->setObjectName(QString::fromUtf8("pushButton_ClearTable"));

        gridLayout_12->addWidget(pushButton_ClearTable, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_PacketDisplay, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_Module1 = new QGroupBox(centralWidget);
        groupBox_Module1->setObjectName(QString::fromUtf8("groupBox_Module1"));
        groupBox_Module1->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_Module1->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_Module1);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(-1, 0, -1, 0);
        Module1ParameterStates = new QVBoxLayout();
        Module1ParameterStates->setSpacing(6);
        Module1ParameterStates->setObjectName(QString::fromUtf8("Module1ParameterStates"));
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

        ValuesModule1Parameters = new QVBoxLayout();
        ValuesModule1Parameters->setSpacing(6);
        ValuesModule1Parameters->setObjectName(QString::fromUtf8("ValuesModule1Parameters"));
        lcdNumber_Value_Module1_SettableParameter1 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter1"));
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
        lcdNumber_Value_Module1_SettableParameter1->setPalette(palette);
        lcdNumber_Value_Module1_SettableParameter1->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter1);

        lcdNumber_Value_Module1_SettableParameter2 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter2"));
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
        lcdNumber_Value_Module1_SettableParameter2->setPalette(palette1);
        lcdNumber_Value_Module1_SettableParameter2->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter2);

        lcdNumber_Value_Module1_SettableParameter3 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter3"));
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
        lcdNumber_Value_Module1_SettableParameter3->setPalette(palette2);
        lcdNumber_Value_Module1_SettableParameter3->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter3);

        lcdNumber_Value_Module1_SettableParameter4 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter4"));
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
        lcdNumber_Value_Module1_SettableParameter4->setPalette(palette3);
        lcdNumber_Value_Module1_SettableParameter4->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter4);

        lcdNumber_Value_Module1_SettableParameter5 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter5->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter5"));
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
        lcdNumber_Value_Module1_SettableParameter5->setPalette(palette4);
        lcdNumber_Value_Module1_SettableParameter5->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter5);

        lcdNumber_Value_Module1_SettableParameter6 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter6->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter6"));
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
        lcdNumber_Value_Module1_SettableParameter6->setPalette(palette5);
        lcdNumber_Value_Module1_SettableParameter6->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter6);

        lcdNumber_Value_Module1_SettableParameter7 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter7->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter7"));
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
        lcdNumber_Value_Module1_SettableParameter7->setPalette(palette6);
        lcdNumber_Value_Module1_SettableParameter7->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter7);

        lcdNumber_Value_Module1_SettableParameter8 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter8->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter8"));
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
        lcdNumber_Value_Module1_SettableParameter8->setPalette(palette7);
        lcdNumber_Value_Module1_SettableParameter8->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter8);

        lcdNumber_Value_Module1_SettableParameter9 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter9->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter9"));
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
        lcdNumber_Value_Module1_SettableParameter9->setPalette(palette8);
        lcdNumber_Value_Module1_SettableParameter9->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter9);

        lcdNumber_Value_Module1_SettableParameter10 = new QLCDNumber(groupBox_Module1);
        lcdNumber_Value_Module1_SettableParameter10->setObjectName(QString::fromUtf8("lcdNumber_Value_Module1_SettableParameter10"));
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
        lcdNumber_Value_Module1_SettableParameter10->setPalette(palette9);
        lcdNumber_Value_Module1_SettableParameter10->setDigitCount(10);

        ValuesModule1Parameters->addWidget(lcdNumber_Value_Module1_SettableParameter10);


        gridLayout_5->addLayout(ValuesModule1Parameters, 0, 2, 1, 1);

        Module1Parameters = new QVBoxLayout();
        Module1Parameters->setSpacing(6);
        Module1Parameters->setObjectName(QString::fromUtf8("Module1Parameters"));
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


        horizontalLayout_2->addWidget(groupBox_Module1);

        groupBox_Module2 = new QGroupBox(centralWidget);
        groupBox_Module2->setObjectName(QString::fromUtf8("groupBox_Module2"));
        groupBox_Module2->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_Module2->setAlignment(Qt::AlignCenter);
        gridLayout_6 = new QGridLayout(groupBox_Module2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(0);
        gridLayout_6->setContentsMargins(-1, 0, -1, 0);
        ValuesModule2Parameters = new QVBoxLayout();
        ValuesModule2Parameters->setSpacing(6);
        ValuesModule2Parameters->setObjectName(QString::fromUtf8("ValuesModule2Parameters"));
        lcdNumber_Value_Module2_SettableParameter1 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter1"));
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
        lcdNumber_Value_Module2_SettableParameter1->setPalette(palette10);
        lcdNumber_Value_Module2_SettableParameter1->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter1);

        lcdNumber_Value_Module2_SettableParameter2 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter2"));
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
        lcdNumber_Value_Module2_SettableParameter2->setPalette(palette11);
        lcdNumber_Value_Module2_SettableParameter2->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter2);

        lcdNumber_Value_Module2_SettableParameter3 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter3"));
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
        lcdNumber_Value_Module2_SettableParameter3->setPalette(palette12);
        lcdNumber_Value_Module2_SettableParameter3->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter3);

        lcdNumber_Value_Module2_SettableParameter4 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter4"));
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
        lcdNumber_Value_Module2_SettableParameter4->setPalette(palette13);
        lcdNumber_Value_Module2_SettableParameter4->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter4);

        lcdNumber_Value_Module2_SettableParameter5 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter5->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter5"));
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
        lcdNumber_Value_Module2_SettableParameter5->setPalette(palette14);
        lcdNumber_Value_Module2_SettableParameter5->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter5);

        lcdNumber_Value_Module2_SettableParameter6 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter6->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter6"));
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
        lcdNumber_Value_Module2_SettableParameter6->setPalette(palette15);
        lcdNumber_Value_Module2_SettableParameter6->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter6);

        lcdNumber_Value_Module2_SettableParameter7 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter7->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter7"));
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
        lcdNumber_Value_Module2_SettableParameter7->setPalette(palette16);
        lcdNumber_Value_Module2_SettableParameter7->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter7);

        lcdNumber_Value_Module2_SettableParameter8 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter8->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter8"));
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
        lcdNumber_Value_Module2_SettableParameter8->setPalette(palette17);
        lcdNumber_Value_Module2_SettableParameter8->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter8);

        lcdNumber_Value_Module2_SettableParameter9 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter9->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter9"));
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
        lcdNumber_Value_Module2_SettableParameter9->setPalette(palette18);
        lcdNumber_Value_Module2_SettableParameter9->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter9);

        lcdNumber_Value_Module2_SettableParameter10 = new QLCDNumber(groupBox_Module2);
        lcdNumber_Value_Module2_SettableParameter10->setObjectName(QString::fromUtf8("lcdNumber_Value_Module2_SettableParameter10"));
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
        lcdNumber_Value_Module2_SettableParameter10->setPalette(palette19);
        lcdNumber_Value_Module2_SettableParameter10->setDigitCount(10);

        ValuesModule2Parameters->addWidget(lcdNumber_Value_Module2_SettableParameter10);


        gridLayout_6->addLayout(ValuesModule2Parameters, 0, 2, 1, 1);

        Module2ParameterStates = new QVBoxLayout();
        Module2ParameterStates->setSpacing(6);
        Module2ParameterStates->setObjectName(QString::fromUtf8("Module2ParameterStates"));
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

        Module2Parameters = new QVBoxLayout();
        Module2Parameters->setSpacing(6);
        Module2Parameters->setObjectName(QString::fromUtf8("Module2Parameters"));
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


        horizontalLayout_2->addWidget(groupBox_Module2);

        groupBox_Module3 = new QGroupBox(centralWidget);
        groupBox_Module3->setObjectName(QString::fromUtf8("groupBox_Module3"));
        groupBox_Module3->setStyleSheet(QString::fromUtf8("font:bold"));
        groupBox_Module3->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(groupBox_Module3);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setVerticalSpacing(0);
        gridLayout_7->setContentsMargins(-1, 0, -1, 0);
        Module3ParameterStates = new QVBoxLayout();
        Module3ParameterStates->setSpacing(6);
        Module3ParameterStates->setObjectName(QString::fromUtf8("Module3ParameterStates"));
        label_Module3_SettableParameter1_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter1_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter1_State"));
        label_Module3_SettableParameter1_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter1_State);

        label_Module3_SettableParameter2_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter2_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter2_State"));
        label_Module3_SettableParameter2_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter2_State);

        label_Module3_SettableParameter3_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter3_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter3_State"));
        label_Module3_SettableParameter3_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter3_State);

        label_Module3_SettableParameter4_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter4_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter4_State"));
        label_Module3_SettableParameter4_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter4_State);

        label_Module3_SettableParameter5_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter5_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter5_State"));
        label_Module3_SettableParameter5_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter5_State);

        label_Module3_SettableParameter6_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter6_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter6_State"));
        label_Module3_SettableParameter6_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter6_State);

        label_Module3_SettableParameter7_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter7_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter7_State"));
        label_Module3_SettableParameter7_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter7_State);

        label_Module3_SettableParameter8_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter8_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter8_State"));
        label_Module3_SettableParameter8_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter8_State);

        label_Module3_SettableParameter9_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter9_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter9_State"));
        label_Module3_SettableParameter9_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter9_State);

        label_Module3_SettableParameter10_State = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter10_State->setObjectName(QString::fromUtf8("label_Module3_SettableParameter10_State"));
        label_Module3_SettableParameter10_State->setAlignment(Qt::AlignCenter);

        Module3ParameterStates->addWidget(label_Module3_SettableParameter10_State);


        gridLayout_7->addLayout(Module3ParameterStates, 0, 1, 1, 1);

        Module3Parameters = new QVBoxLayout();
        Module3Parameters->setSpacing(6);
        Module3Parameters->setObjectName(QString::fromUtf8("Module3Parameters"));
        label_Module3_SettableParameter1Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter1Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter1Name"));
        label_Module3_SettableParameter1Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter1Name);

        label_Module3_SettableParameter2Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter2Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter2Name"));
        label_Module3_SettableParameter2Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter2Name);

        label_Module3_SettableParameter3Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter3Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter3Name"));
        label_Module3_SettableParameter3Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter3Name);

        label_Module3_SettableParameter4Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter4Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter4Name"));
        label_Module3_SettableParameter4Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter4Name);

        label_Module3_SettableParameter5Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter5Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter5Name"));
        label_Module3_SettableParameter5Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter5Name);

        label_Module3_SettableParameter6Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter6Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter6Name"));
        label_Module3_SettableParameter6Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter6Name);

        label_Module3_SettableParameter7Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter7Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter7Name"));
        label_Module3_SettableParameter7Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter7Name);

        label_Module3_SettableParameter8Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter8Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter8Name"));
        label_Module3_SettableParameter8Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter8Name);

        label_Module3_SettableParameter9Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter9Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter9Name"));
        label_Module3_SettableParameter9Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter9Name);

        label_Module3_SettableParameter10Name = new QLabel(groupBox_Module3);
        label_Module3_SettableParameter10Name->setObjectName(QString::fromUtf8("label_Module3_SettableParameter10Name"));
        label_Module3_SettableParameter10Name->setAlignment(Qt::AlignCenter);

        Module3Parameters->addWidget(label_Module3_SettableParameter10Name);


        gridLayout_7->addLayout(Module3Parameters, 0, 0, 1, 1);

        ValuesModule3Parameters = new QVBoxLayout();
        ValuesModule3Parameters->setSpacing(6);
        ValuesModule3Parameters->setObjectName(QString::fromUtf8("ValuesModule3Parameters"));
        lcdNumber_Value_Module3_SettableParameter1 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter1->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter1"));
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
        lcdNumber_Value_Module3_SettableParameter1->setPalette(palette20);
        lcdNumber_Value_Module3_SettableParameter1->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter1);

        lcdNumber_Value_Module3_SettableParameter2 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter2->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter2"));
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
        lcdNumber_Value_Module3_SettableParameter2->setPalette(palette21);
        lcdNumber_Value_Module3_SettableParameter2->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter2);

        lcdNumber_Value_Module3_SettableParameter3 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter3->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter3"));
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
        lcdNumber_Value_Module3_SettableParameter3->setPalette(palette22);
        lcdNumber_Value_Module3_SettableParameter3->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter3);

        lcdNumber_Value_Module3_SettableParameter4 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter4->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter4"));
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
        lcdNumber_Value_Module3_SettableParameter4->setPalette(palette23);
        lcdNumber_Value_Module3_SettableParameter4->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter4);

        lcdNumber_Value_Module3_SettableParameter5 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter5->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter5"));
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
        lcdNumber_Value_Module3_SettableParameter5->setPalette(palette24);
        lcdNumber_Value_Module3_SettableParameter5->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter5);

        lcdNumber_Value_Module3_SettableParameter6 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter6->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter6"));
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
        lcdNumber_Value_Module3_SettableParameter6->setPalette(palette25);
        lcdNumber_Value_Module3_SettableParameter6->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter6);

        lcdNumber_Value_Module3_SettableParameter7 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter7->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter7"));
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
        lcdNumber_Value_Module3_SettableParameter7->setPalette(palette26);
        lcdNumber_Value_Module3_SettableParameter7->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter7);

        lcdNumber_Value_Module3_SettableParameter8 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter8->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter8"));
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
        lcdNumber_Value_Module3_SettableParameter8->setPalette(palette27);
        lcdNumber_Value_Module3_SettableParameter8->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter8);

        lcdNumber_Value_Module3_SettableParameter9 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter9->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter9"));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette28.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module3_SettableParameter9->setPalette(palette28);
        lcdNumber_Value_Module3_SettableParameter9->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter9);

        lcdNumber_Value_Module3_SettableParameter10 = new QLCDNumber(groupBox_Module3);
        lcdNumber_Value_Module3_SettableParameter10->setObjectName(QString::fromUtf8("lcdNumber_Value_Module3_SettableParameter10"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush);
        palette29.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette29.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette29.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette29.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        lcdNumber_Value_Module3_SettableParameter10->setPalette(palette29);
        lcdNumber_Value_Module3_SettableParameter10->setDigitCount(10);

        ValuesModule3Parameters->addWidget(lcdNumber_Value_Module3_SettableParameter10);


        gridLayout_7->addLayout(ValuesModule3Parameters, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(groupBox_Module3);


        gridLayout_8->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        comboBox_Port->setCurrentIndex(-1);
        comboBox_TimeRange->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_ComPortControls->setTitle(QCoreApplication::translate("MainWindow", "COM Port Settings", nullptr));
        label_Status->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        pushButton_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        pushButton_Close->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label_SerialPort->setText(QCoreApplication::translate("MainWindow", "Serial port", nullptr));
        label_ShowStatus->setText(QCoreApplication::translate("MainWindow", "<color:red>Closed</>", nullptr));
        groupBox_ModuleControls->setTitle(QCoreApplication::translate("MainWindow", "Module Control", nullptr));
        label_Module1InitParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1InitParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1InitParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1InitParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1InitParameter5Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module1Parameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1 name", nullptr));
        label_Module1Parameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2 name", nullptr));
        label_Module1Parameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3 name", nullptr));
        label_Module1Parameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4 name", nullptr));
        pushButton_InitConnectionModule1->setText(QCoreApplication::translate("MainWindow", "Init Connection Module 1", nullptr));
        pushButton_DeinitConnectionModule1->setText(QCoreApplication::translate("MainWindow", "Deinit Connection Module 1", nullptr));
        label_Module2InitParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2InitParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2InitParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2InitParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2InitParameter5Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module2Parameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1 name", nullptr));
        label_Module2Parameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2 name", nullptr));
        label_Module2Parameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3 name", nullptr));
        label_Module2Parameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4 name", nullptr));
        pushButton_InitConnectionModule2->setText(QCoreApplication::translate("MainWindow", "Init Connection Module 2", nullptr));
        pushButton_DeinitConnectionModule2->setText(QCoreApplication::translate("MainWindow", "Deinit Connection Module 2", nullptr));
        label_Module3InitParameter1Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module3InitParameter2Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module3InitParameter3Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module3InitParameter4Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module3InitParameter5Name->setText(QCoreApplication::translate("MainWindow", "Null", nullptr));
        label_Module3Parameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1 name", nullptr));
        label_Module3Parameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2 name", nullptr));
        label_Module3Parameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3 name", nullptr));
        label_Module3Parameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4 name", nullptr));
        pushButton_InitConnectionModule3->setText(QCoreApplication::translate("MainWindow", "Init Connection Module 3", nullptr));
        pushButton_DeinitConnectionModule3->setText(QCoreApplication::translate("MainWindow", "Deinit Connection Module 3", nullptr));
        groupBox_CustomPacketControls->setTitle(QCoreApplication::translate("MainWindow", "Custom Packet", nullptr));
        comboBox_CustomPacketModule->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_CustomPacketModule->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_CustomPacketModule->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));

        label_Type->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        label_Sign->setText(QCoreApplication::translate("MainWindow", "Sign", nullptr));
        lineEdit_Type->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_SendWrongCrcPacket->setText(QCoreApplication::translate("MainWindow", "Send wrong CRC packet", nullptr));
        pushButton_Send->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_Source->setText(QCoreApplication::translate("MainWindow", "Source", nullptr));
        lineEdit_Sign->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_CustomPacketModule->setText(QCoreApplication::translate("MainWindow", "Module", nullptr));
        label_Payload->setText(QCoreApplication::translate("MainWindow", "Payload", nullptr));
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
        comboBox_Parameter->setItemText(10, QCoreApplication::translate("MainWindow", "v", nullptr));
        comboBox_Parameter->setItemText(11, QCoreApplication::translate("MainWindow", "c", nullptr));
        comboBox_Parameter->setItemText(12, QCoreApplication::translate("MainWindow", "f", nullptr));
        comboBox_Parameter->setItemText(13, QCoreApplication::translate("MainWindow", "p", nullptr));

        lineEdit_Payload->setText(QCoreApplication::translate("MainWindow", "123.456", nullptr));
        label_Length->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        lineEdit_Source->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_Parameter->setText(QCoreApplication::translate("MainWindow", "Parameter", nullptr));
        groupBox_GraphControls->setTitle(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        lineEdit_StartLinear->setText(QCoreApplication::translate("MainWindow", "-10000", nullptr));
        lineEdit_RangeMaximum->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        label_SignalCount->setText(QCoreApplication::translate("MainWindow", "Signal count", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        label_Linear->setText(QCoreApplication::translate("MainWindow", "Linear", nullptr));
        pushButton_SetRanges->setText(QCoreApplication::translate("MainWindow", "Set Ranges", nullptr));
        pushButton_StartSine->setText(QCoreApplication::translate("MainWindow", "Start Sine", nullptr));
        label_StepLinear->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        comboBox_GraphSignalCount->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_GraphSignalCount->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_GraphSignalCount->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        comboBox_GraphSignalCount->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));

        label_RangeMaximum->setText(QCoreApplication::translate("MainWindow", "Range maximum", nullptr));
        label_StopDegrees->setText(QCoreApplication::translate("MainWindow", "Stop degrees", nullptr));
        lineEdit_MultiplierSine->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_MultiplierSine->setText(QCoreApplication::translate("MainWindow", "Multiplier", nullptr));
        lineEdit_StepLinear->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_RangeMinimum->setText(QCoreApplication::translate("MainWindow", "Range minimum", nullptr));
        label_TimeRange->setText(QCoreApplication::translate("MainWindow", "Time range", nullptr));
        label_GraphModule->setText(QCoreApplication::translate("MainWindow", "Module", nullptr));
        label_Sine->setText(QCoreApplication::translate("MainWindow", "Sine", nullptr));
        lineEdit_StopDegrees->setText(QCoreApplication::translate("MainWindow", "720", nullptr));
        comboBox_GraphModule->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboBox_GraphModule->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboBox_GraphModule->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));

        pushButton_StartLinear->setText(QCoreApplication::translate("MainWindow", "Start Linear", nullptr));
        lineEdit_StartDegrees->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_StopLinear->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        lineEdit_RangeMinimum->setText(QCoreApplication::translate("MainWindow", "-10000", nullptr));
        label_StartLinear->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        lineEdit_StopLinear->setText(QCoreApplication::translate("MainWindow", "10000", nullptr));
        label_StartDegrees->setText(QCoreApplication::translate("MainWindow", "Start degrees", nullptr));
        comboBox_TimeRange->setItemText(0, QCoreApplication::translate("MainWindow", "360", nullptr));
        comboBox_TimeRange->setItemText(1, QCoreApplication::translate("MainWindow", "720", nullptr));
        comboBox_TimeRange->setItemText(2, QCoreApplication::translate("MainWindow", "1080", nullptr));
        comboBox_TimeRange->setItemText(3, QCoreApplication::translate("MainWindow", "1440", nullptr));
        comboBox_TimeRange->setItemText(4, QCoreApplication::translate("MainWindow", "1800", nullptr));
        comboBox_TimeRange->setItemText(5, QCoreApplication::translate("MainWindow", "2160", nullptr));
        comboBox_TimeRange->setItemText(6, QCoreApplication::translate("MainWindow", "2520", nullptr));
        comboBox_TimeRange->setItemText(7, QCoreApplication::translate("MainWindow", "2880", nullptr));
        comboBox_TimeRange->setItemText(8, QCoreApplication::translate("MainWindow", "3240", nullptr));
        comboBox_TimeRange->setItemText(9, QCoreApplication::translate("MainWindow", "3600", nullptr));

        groupBox_PacketDisplay->setTitle(QCoreApplication::translate("MainWindow", "Packet display", nullptr));
        pushButton_ClearTable->setText(QCoreApplication::translate("MainWindow", "CLEAR TABLE", nullptr));
        groupBox_Module1->setTitle(QCoreApplication::translate("MainWindow", "Module 1", nullptr));
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
        groupBox_Module2->setTitle(QCoreApplication::translate("MainWindow", "Module 2", nullptr));
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
        groupBox_Module3->setTitle(QCoreApplication::translate("MainWindow", "Module 3", nullptr));
        label_Module3_SettableParameter1_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter2_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter3_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter4_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter5_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter6_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter7_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter8_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter9_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter10_State->setText(QCoreApplication::translate("MainWindow", "<font color='red'>Disabled</font>", nullptr));
        label_Module3_SettableParameter1Name->setText(QCoreApplication::translate("MainWindow", "Parameter 1", nullptr));
        label_Module3_SettableParameter2Name->setText(QCoreApplication::translate("MainWindow", "Parameter 2", nullptr));
        label_Module3_SettableParameter3Name->setText(QCoreApplication::translate("MainWindow", "Parameter 3", nullptr));
        label_Module3_SettableParameter4Name->setText(QCoreApplication::translate("MainWindow", "Parameter 4", nullptr));
        label_Module3_SettableParameter5Name->setText(QCoreApplication::translate("MainWindow", "Parameter 5", nullptr));
        label_Module3_SettableParameter6Name->setText(QCoreApplication::translate("MainWindow", "Parameter 6", nullptr));
        label_Module3_SettableParameter7Name->setText(QCoreApplication::translate("MainWindow", "Parameter 7", nullptr));
        label_Module3_SettableParameter8Name->setText(QCoreApplication::translate("MainWindow", "Parameter 8", nullptr));
        label_Module3_SettableParameter9Name->setText(QCoreApplication::translate("MainWindow", "Parameter 9", nullptr));
        label_Module3_SettableParameter10Name->setText(QCoreApplication::translate("MainWindow", "Parameter 10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
