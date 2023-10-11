/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_2;
    QDoubleSpinBox *spinBox_srednia;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_3;
    QLabel *label_ileDodPytan;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QSpinBox *spinBox_ilePyt1;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_5;
    QSpinBox *spinBox_ilePyt2;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_7;
    QSpinBox *spinBox_ilePyt3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_8;
    QSpinBox *spinBox_ilePytZ;
    QPushButton *pushButton_losujPyt;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_podstawowy;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_pyt1;
    QRadioButton *radioButton_p1_OK;
    QRadioButton *radioButton_p1_BAD;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_pyt2;
    QRadioButton *radioButton_p2_OK;
    QRadioButton *radioButton_p2_BAD;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_pyt3;
    QRadioButton *radioButton_p3_OK;
    QRadioButton *radioButton_p3_BAD;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBox_zaawansowany;
    QTextEdit *textEditPytaniaP;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_dodatkowy;
    QVBoxLayout *verticalLayout_1D;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_pyt1D;
    QRadioButton *radioButton_p1D_OK;
    QRadioButton *radioButton_p1D_PARTIAL;
    QRadioButton *radioButton_p1D_BAD;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_2D;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_pyt2D;
    QRadioButton *radioButton_p2D_OK;
    QRadioButton *radioButton_p2D_PARTIAL;
    QRadioButton *radioButton_p2D_BAD;
    QTextEdit *textEditPytaniaZ;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_ocenaKoncowa;
    QLabel *label_jakaOcena;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_resetuj;
    QPushButton *pushButton_zakoncz;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup_4;
    QButtonGroup *buttonGroup_5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(976, 892);
        MainWindow->setMinimumSize(QSize(965, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);

        horizontalLayout_9->addWidget(label_2);

        spinBox_srednia = new QDoubleSpinBox(centralwidget);
        spinBox_srednia->setObjectName(QString::fromUtf8("spinBox_srednia"));
        spinBox_srednia->setFont(font);
        spinBox_srednia->setMinimum(3.000000000000000);
        spinBox_srednia->setMaximum(6.000000000000000);
        spinBox_srednia->setSingleStep(0.010000000000000);
        spinBox_srednia->setValue(3.000000000000000);

        horizontalLayout_9->addWidget(spinBox_srednia);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_9->addWidget(label_3);

        label_ileDodPytan = new QLabel(centralwidget);
        label_ileDodPytan->setObjectName(QString::fromUtf8("label_ileDodPytan"));
        label_ileDodPytan->setMinimumSize(QSize(31, 31));
        label_ileDodPytan->setMaximumSize(QSize(31, 31));
        label_ileDodPytan->setFont(font);
        label_ileDodPytan->setFrameShape(QFrame::Box);
        label_ileDodPytan->setAlignment(Qt::AlignCenter);
        label_ileDodPytan->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_9->addWidget(label_ileDodPytan);


        verticalLayout_10->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 0));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(56, 16777215));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        spinBox_ilePyt1 = new QSpinBox(centralwidget);
        spinBox_ilePyt1->setObjectName(QString::fromUtf8("spinBox_ilePyt1"));
        spinBox_ilePyt1->setMaximumSize(QSize(32, 26));
        QFont font2;
        font2.setPointSize(12);
        spinBox_ilePyt1->setFont(font2);
        spinBox_ilePyt1->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox_ilePyt1->setKeyboardTracking(true);
        spinBox_ilePyt1->setMinimum(1);

        horizontalLayout_2->addWidget(spinBox_ilePyt1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(56, 16777215));
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);

        spinBox_ilePyt2 = new QSpinBox(centralwidget);
        spinBox_ilePyt2->setObjectName(QString::fromUtf8("spinBox_ilePyt2"));
        spinBox_ilePyt2->setMaximumSize(QSize(32, 26));
        spinBox_ilePyt2->setFont(font2);
        spinBox_ilePyt2->setMinimum(1);

        horizontalLayout_2->addWidget(spinBox_ilePyt2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(56, 0));
        label_7->setMaximumSize(QSize(56, 16777215));
        label_7->setFont(font1);

        horizontalLayout_2->addWidget(label_7);

        spinBox_ilePyt3 = new QSpinBox(centralwidget);
        spinBox_ilePyt3->setObjectName(QString::fromUtf8("spinBox_ilePyt3"));
        spinBox_ilePyt3->setMaximumSize(QSize(32, 26));
        spinBox_ilePyt3->setFont(font2);
        spinBox_ilePyt3->setMinimum(1);

        horizontalLayout_2->addWidget(spinBox_ilePyt3);


        verticalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(150, 0));
        label_6->setFont(font1);

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_6->addWidget(label_8);

        spinBox_ilePytZ = new QSpinBox(centralwidget);
        spinBox_ilePytZ->setObjectName(QString::fromUtf8("spinBox_ilePytZ"));
        spinBox_ilePytZ->setMaximumSize(QSize(32, 26));
        spinBox_ilePytZ->setFont(font2);
        spinBox_ilePytZ->setMinimum(2);

        horizontalLayout_6->addWidget(spinBox_ilePytZ);


        verticalLayout_7->addLayout(horizontalLayout_6);

        pushButton_losujPyt = new QPushButton(centralwidget);
        pushButton_losujPyt->setObjectName(QString::fromUtf8("pushButton_losujPyt"));
        pushButton_losujPyt->setMinimumSize(QSize(416, 31));
        pushButton_losujPyt->setMaximumSize(QSize(16777215, 31));
        pushButton_losujPyt->setFont(font);

        verticalLayout_7->addWidget(pushButton_losujPyt);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        verticalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout_10->addLayout(verticalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_10);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, -1, -1);
        verticalLayout_podstawowy = new QVBoxLayout();
        verticalLayout_podstawowy->setObjectName(QString::fromUtf8("verticalLayout_podstawowy"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_pyt1 = new QLabel(centralwidget);
        label_pyt1->setObjectName(QString::fromUtf8("label_pyt1"));
        label_pyt1->setFont(font);

        horizontalLayout_10->addWidget(label_pyt1);


        verticalLayout->addLayout(horizontalLayout_10);

        radioButton_p1_OK = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_p1_OK);
        radioButton_p1_OK->setObjectName(QString::fromUtf8("radioButton_p1_OK"));
        radioButton_p1_OK->setFont(font2);

        verticalLayout->addWidget(radioButton_p1_OK);

        radioButton_p1_BAD = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_p1_BAD);
        radioButton_p1_BAD->setObjectName(QString::fromUtf8("radioButton_p1_BAD"));
        radioButton_p1_BAD->setFont(font2);

        verticalLayout->addWidget(radioButton_p1_BAD);


        horizontalLayout->addLayout(verticalLayout);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_pyt2 = new QLabel(centralwidget);
        label_pyt2->setObjectName(QString::fromUtf8("label_pyt2"));
        label_pyt2->setFont(font);

        horizontalLayout_11->addWidget(label_pyt2);


        verticalLayout_2->addLayout(horizontalLayout_11);

        radioButton_p2_OK = new QRadioButton(centralwidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton_p2_OK);
        radioButton_p2_OK->setObjectName(QString::fromUtf8("radioButton_p2_OK"));
        radioButton_p2_OK->setFont(font2);

        verticalLayout_2->addWidget(radioButton_p2_OK);

        radioButton_p2_BAD = new QRadioButton(centralwidget);
        buttonGroup_2->addButton(radioButton_p2_BAD);
        radioButton_p2_BAD->setObjectName(QString::fromUtf8("radioButton_p2_BAD"));
        radioButton_p2_BAD->setFont(font2);

        verticalLayout_2->addWidget(radioButton_p2_BAD);


        horizontalLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_pyt3 = new QLabel(centralwidget);
        label_pyt3->setObjectName(QString::fromUtf8("label_pyt3"));
        label_pyt3->setFont(font);

        horizontalLayout_12->addWidget(label_pyt3);


        verticalLayout_3->addLayout(horizontalLayout_12);

        radioButton_p3_OK = new QRadioButton(centralwidget);
        buttonGroup_3 = new QButtonGroup(MainWindow);
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(radioButton_p3_OK);
        radioButton_p3_OK->setObjectName(QString::fromUtf8("radioButton_p3_OK"));
        radioButton_p3_OK->setFont(font2);

        verticalLayout_3->addWidget(radioButton_p3_OK);

        radioButton_p3_BAD = new QRadioButton(centralwidget);
        buttonGroup_3->addButton(radioButton_p3_BAD);
        radioButton_p3_BAD->setObjectName(QString::fromUtf8("radioButton_p3_BAD"));
        radioButton_p3_BAD->setFont(font2);

        verticalLayout_3->addWidget(radioButton_p3_BAD);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_podstawowy->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        checkBox_zaawansowany = new QCheckBox(centralwidget);
        checkBox_zaawansowany->setObjectName(QString::fromUtf8("checkBox_zaawansowany"));
        checkBox_zaawansowany->setFont(font2);

        horizontalLayout_3->addWidget(checkBox_zaawansowany);


        verticalLayout_podstawowy->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_podstawowy);

        textEditPytaniaP = new QTextEdit(centralwidget);
        textEditPytaniaP->setObjectName(QString::fromUtf8("textEditPytaniaP"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEditPytaniaP->sizePolicy().hasHeightForWidth());
        textEditPytaniaP->setSizePolicy(sizePolicy);
        textEditPytaniaP->setMinimumSize(QSize(500, 400));
        textEditPytaniaP->setFont(font2);
        textEditPytaniaP->setReadOnly(true);

        verticalLayout_5->addWidget(textEditPytaniaP);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_dodatkowy = new QHBoxLayout();
        horizontalLayout_dodatkowy->setObjectName(QString::fromUtf8("horizontalLayout_dodatkowy"));
        verticalLayout_1D = new QVBoxLayout();
        verticalLayout_1D->setObjectName(QString::fromUtf8("verticalLayout_1D"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_pyt1D = new QLabel(centralwidget);
        label_pyt1D->setObjectName(QString::fromUtf8("label_pyt1D"));
        label_pyt1D->setFont(font);

        horizontalLayout_13->addWidget(label_pyt1D);


        verticalLayout_1D->addLayout(horizontalLayout_13);

        radioButton_p1D_OK = new QRadioButton(centralwidget);
        buttonGroup_4 = new QButtonGroup(MainWindow);
        buttonGroup_4->setObjectName(QString::fromUtf8("buttonGroup_4"));
        buttonGroup_4->addButton(radioButton_p1D_OK);
        radioButton_p1D_OK->setObjectName(QString::fromUtf8("radioButton_p1D_OK"));
        radioButton_p1D_OK->setFont(font2);

        verticalLayout_1D->addWidget(radioButton_p1D_OK);

        radioButton_p1D_PARTIAL = new QRadioButton(centralwidget);
        buttonGroup_4->addButton(radioButton_p1D_PARTIAL);
        radioButton_p1D_PARTIAL->setObjectName(QString::fromUtf8("radioButton_p1D_PARTIAL"));
        radioButton_p1D_PARTIAL->setFont(font2);

        verticalLayout_1D->addWidget(radioButton_p1D_PARTIAL);

        radioButton_p1D_BAD = new QRadioButton(centralwidget);
        buttonGroup_4->addButton(radioButton_p1D_BAD);
        radioButton_p1D_BAD->setObjectName(QString::fromUtf8("radioButton_p1D_BAD"));
        radioButton_p1D_BAD->setFont(font2);

        verticalLayout_1D->addWidget(radioButton_p1D_BAD);


        horizontalLayout_dodatkowy->addLayout(verticalLayout_1D);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_dodatkowy->addWidget(line_3);

        verticalLayout_2D = new QVBoxLayout();
        verticalLayout_2D->setObjectName(QString::fromUtf8("verticalLayout_2D"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_pyt2D = new QLabel(centralwidget);
        label_pyt2D->setObjectName(QString::fromUtf8("label_pyt2D"));
        label_pyt2D->setFont(font);

        horizontalLayout_14->addWidget(label_pyt2D);


        verticalLayout_2D->addLayout(horizontalLayout_14);

        radioButton_p2D_OK = new QRadioButton(centralwidget);
        buttonGroup_5 = new QButtonGroup(MainWindow);
        buttonGroup_5->setObjectName(QString::fromUtf8("buttonGroup_5"));
        buttonGroup_5->addButton(radioButton_p2D_OK);
        radioButton_p2D_OK->setObjectName(QString::fromUtf8("radioButton_p2D_OK"));
        radioButton_p2D_OK->setFont(font2);

        verticalLayout_2D->addWidget(radioButton_p2D_OK);

        radioButton_p2D_PARTIAL = new QRadioButton(centralwidget);
        buttonGroup_5->addButton(radioButton_p2D_PARTIAL);
        radioButton_p2D_PARTIAL->setObjectName(QString::fromUtf8("radioButton_p2D_PARTIAL"));
        radioButton_p2D_PARTIAL->setFont(font2);

        verticalLayout_2D->addWidget(radioButton_p2D_PARTIAL);

        radioButton_p2D_BAD = new QRadioButton(centralwidget);
        buttonGroup_5->addButton(radioButton_p2D_BAD);
        radioButton_p2D_BAD->setObjectName(QString::fromUtf8("radioButton_p2D_BAD"));
        radioButton_p2D_BAD->setFont(font2);

        verticalLayout_2D->addWidget(radioButton_p2D_BAD);


        horizontalLayout_dodatkowy->addLayout(verticalLayout_2D);


        verticalLayout_6->addLayout(horizontalLayout_dodatkowy);

        textEditPytaniaZ = new QTextEdit(centralwidget);
        textEditPytaniaZ->setObjectName(QString::fromUtf8("textEditPytaniaZ"));
        sizePolicy.setHeightForWidth(textEditPytaniaZ->sizePolicy().hasHeightForWidth());
        textEditPytaniaZ->setSizePolicy(sizePolicy);
        textEditPytaniaZ->setMinimumSize(QSize(400, 300));
        textEditPytaniaZ->setFont(font2);
        textEditPytaniaZ->setReadOnly(true);

        verticalLayout_6->addWidget(textEditPytaniaZ);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalSpacer_8 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        verticalLayout_9->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label_ocenaKoncowa = new QLabel(centralwidget);
        label_ocenaKoncowa->setObjectName(QString::fromUtf8("label_ocenaKoncowa"));
        label_ocenaKoncowa->setFont(font);

        horizontalLayout_7->addWidget(label_ocenaKoncowa);

        label_jakaOcena = new QLabel(centralwidget);
        label_jakaOcena->setObjectName(QString::fromUtf8("label_jakaOcena"));
        label_jakaOcena->setMinimumSize(QSize(65, 31));
        label_jakaOcena->setMaximumSize(QSize(65, 31));
        label_jakaOcena->setFont(font);
        label_jakaOcena->setFrameShape(QFrame::Box);
        label_jakaOcena->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_jakaOcena);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton_resetuj = new QPushButton(centralwidget);
        pushButton_resetuj->setObjectName(QString::fromUtf8("pushButton_resetuj"));
        pushButton_resetuj->setFont(font);

        horizontalLayout_7->addWidget(pushButton_resetuj);

        pushButton_zakoncz = new QPushButton(centralwidget);
        pushButton_zakoncz->setObjectName(QString::fromUtf8("pushButton_zakoncz"));
        pushButton_zakoncz->setFont(font);

        horizontalLayout_7->addWidget(pushButton_zakoncz);


        verticalLayout_9->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_9);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 976, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\305\232rednia:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Dodatkowe Pytania:", nullptr));
        label_ileDodPytan->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ile pyta\305\204 na dzia\305\202:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Dzia\305\202 1:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Dzia\305\202 2:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Dzia\305\202 3:", nullptr));
        label_6->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Zaawansowane:", nullptr));
        pushButton_losujPyt->setText(QCoreApplication::translate("MainWindow", "Losuj Pytania", nullptr));
        label_pyt1->setText(QCoreApplication::translate("MainWindow", "Pytanie 1", nullptr));
        radioButton_p1_OK->setText(QCoreApplication::translate("MainWindow", "O. dobra", nullptr));
        radioButton_p1_BAD->setText(QCoreApplication::translate("MainWindow", "O. z\305\202a", nullptr));
        label_pyt2->setText(QCoreApplication::translate("MainWindow", "Pytanie 2", nullptr));
        radioButton_p2_OK->setText(QCoreApplication::translate("MainWindow", "O. dobra", nullptr));
        radioButton_p2_BAD->setText(QCoreApplication::translate("MainWindow", "O. z\305\202a", nullptr));
        label_pyt3->setText(QCoreApplication::translate("MainWindow", "Pytanie 3", nullptr));
        radioButton_p3_OK->setText(QCoreApplication::translate("MainWindow", "O. dobra", nullptr));
        radioButton_p3_BAD->setText(QCoreApplication::translate("MainWindow", "O. z\305\202a", nullptr));
        checkBox_zaawansowany->setText(QCoreApplication::translate("MainWindow", "Poziom Zaawansowany", nullptr));
        label_pyt1D->setText(QCoreApplication::translate("MainWindow", "Pytanie 1Z", nullptr));
        radioButton_p1D_OK->setText(QCoreApplication::translate("MainWindow", "O. dobra", nullptr));
        radioButton_p1D_PARTIAL->setText(QCoreApplication::translate("MainWindow", "O. Cz\304\231\305\233ciowa", nullptr));
        radioButton_p1D_BAD->setText(QCoreApplication::translate("MainWindow", "O. z\305\202a", nullptr));
        label_pyt2D->setText(QCoreApplication::translate("MainWindow", "Pytanie 2Z", nullptr));
        radioButton_p2D_OK->setText(QCoreApplication::translate("MainWindow", "O. dobra", nullptr));
        radioButton_p2D_PARTIAL->setText(QCoreApplication::translate("MainWindow", "O. Cz\304\231\305\233ciowa", nullptr));
        radioButton_p2D_BAD->setText(QCoreApplication::translate("MainWindow", "O. z\305\202a", nullptr));
        label_ocenaKoncowa->setText(QCoreApplication::translate("MainWindow", "Ocena ko\305\204cowa:", nullptr));
        label_jakaOcena->setText(QCoreApplication::translate("MainWindow", "Ocena", nullptr));
        pushButton_resetuj->setText(QCoreApplication::translate("MainWindow", "Resetuj", nullptr));
        pushButton_zakoncz->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
