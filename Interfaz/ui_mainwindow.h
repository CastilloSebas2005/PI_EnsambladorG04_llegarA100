/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *playersMode;
    QPushButton *computerMode;
    QPushButton *exit;
    QPushButton *displayManual;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 0));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"background-size: cover;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        playersMode = new QPushButton(centralwidget);
        playersMode->setObjectName(QString::fromUtf8("playersMode"));
        playersMode->setGeometry(QRect(160, 280, 211, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setBold(true);
        font.setStrikeOut(false);
        font.setKerning(true);
        playersMode->setFont(font);
        playersMode->setStyleSheet(QString::fromUtf8("background: rgb(215, 14, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge purple;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        computerMode = new QPushButton(centralwidget);
        computerMode->setObjectName(QString::fromUtf8("computerMode"));
        computerMode->setGeometry(QRect(440, 280, 211, 61));
        QFont font1;
        font1.setBold(true);
        computerMode->setFont(font1);
        computerMode->setStyleSheet(QString::fromUtf8("background: rgb(215, 14, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge purple;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(610, 450, 131, 61));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8("background: rgb(255, 5, 59);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge red;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        displayManual = new QPushButton(centralwidget);
        displayManual->setObjectName(QString::fromUtf8("displayManual"));
        displayManual->setGeometry(QRect(60, 450, 131, 61));
        displayManual->setFont(font1);
        displayManual->setStyleSheet(QString::fromUtf8("background: rgb(63, 172, 13);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge green;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 120, 681, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(20);
        font2.setBold(true);
        textEdit->setFont(font2);
        textEdit->setMouseTracking(false);
        textEdit->setAcceptDrops(false);
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 20pt;\n"
"    font-weight: bold;\n"
"    font-style: bold;\n"
"	border-radius: 25px;  /* Bordes redondeados */\n"
"}\n"
""));
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        playersMode->setText(QCoreApplication::translate("MainWindow", "VS. JUGADOR", nullptr));
        computerMode->setText(QCoreApplication::translate("MainWindow", "VS. COMPUTADORA", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
        displayManual->setText(QCoreApplication::translate("MainWindow", "MANUAL", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:20pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:30pt; font-weight:400; color:#ffffff;\">LLEGAR A 100</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
