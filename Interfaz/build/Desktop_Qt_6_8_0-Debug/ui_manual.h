/********************************************************************************
** Form generated from reading UI file 'manual.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANUAL_H
#define UI_MANUAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manual
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QTextBrowser *textBrowser_6;
    QPushButton *exit_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QPushButton *pushButton_11;
    QTextBrowser *textBrowser_9;
    QPushButton *pushButton_12;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *manual)
    {
        if (manual->objectName().isEmpty())
            manual->setObjectName("manual");
        manual->resize(868, 831);
        manual->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"background-size: cover;"));
        centralwidget = new QWidget(manual);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 0, 851, 731));
        textBrowser_6 = new QTextBrowser(centralwidget_2);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(110, 110, 351, 41));
        textBrowser_6->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 20pt;\n"
"    font-weight: bold;\n"
"    font-style: bold;\n"
"}\n"
""));
        exit_2 = new QPushButton(centralwidget_2);
        exit_2->setObjectName("exit_2");
        exit_2->setGeometry(QRect(650, 640, 141, 61));
        QFont font;
        font.setBold(true);
        exit_2->setFont(font);
        exit_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 5, 59);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge red;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_4 = new QPushButton(centralwidget_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 100, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("background: rgb(119, 133, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_8 = new QPushButton(centralwidget_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(110, 350, 201, 51));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QString::fromUtf8("background: rgb(215, 14, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge purple;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_9 = new QPushButton(centralwidget_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(100, 170, 141, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sans Serif")});
        font1.setBold(true);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("background: rgb(215, 14, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge purple;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_10 = new QPushButton(centralwidget_2);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(120, 250, 61, 61));
        pushButton_10->setStyleSheet(QString::fromUtf8("background: rgb(119, 133, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textBrowser_7 = new QTextBrowser(centralwidget_2);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(190, 250, 601, 61));
        textBrowser_7->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 15pt;\n"
"}\n"
""));
        textBrowser_8 = new QTextBrowser(centralwidget_2);
        textBrowser_8->setObjectName("textBrowser_8");
        textBrowser_8->setGeometry(QRect(190, 440, 601, 71));
        textBrowser_8->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 15pt;\n"
"}\n"
""));
        pushButton_11 = new QPushButton(centralwidget_2);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(120, 440, 61, 61));
        pushButton_11->setStyleSheet(QString::fromUtf8("background: rgb(119, 133, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textBrowser_9 = new QTextBrowser(centralwidget_2);
        textBrowser_9->setObjectName("textBrowser_9");
        textBrowser_9->setGeometry(QRect(100, 640, 451, 51));
        textBrowser_9->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 15pt;\n"
"}\n"
""));
        pushButton_12 = new QPushButton(centralwidget_2);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(30, 630, 61, 61));
        pushButton_12->setStyleSheet(QString::fromUtf8("background: rgb(119, 133, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textEdit_3 = new QTextEdit(centralwidget_2);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(160, 20, 501, 61));
        textEdit_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textEdit_4 = new QTextEdit(centralwidget_2);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(30, 550, 311, 61));
        textEdit_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        manual->setCentralWidget(centralwidget);
        menubar = new QMenuBar(manual);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 868, 19));
        manual->setMenuBar(menubar);
        statusbar = new QStatusBar(manual);
        statusbar->setObjectName("statusbar");
        manual->setStatusBar(statusbar);

        retranslateUi(manual);

        QMetaObject::connectSlotsByName(manual);
    } // setupUi

    void retranslateUi(QMainWindow *manual)
    {
        manual->setWindowTitle(QCoreApplication::translate("manual", "manual", nullptr));
        textBrowser_6->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:20pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:15pt; font-weight:400; color:#ffffff;\">Se selecciona el modo de juego: </span></p></body></html>", nullptr));
        exit_2->setText(QCoreApplication::translate("manual", "DEVOLVERSE", nullptr));
        pushButton_4->setText(QCoreApplication::translate("manual", "1", nullptr));
        pushButton_8->setText(QCoreApplication::translate("manual", "VS. COMPUTADORA", nullptr));
        pushButton_9->setText(QCoreApplication::translate("manual", "VS. JUGADOR", nullptr));
        pushButton_10->setText(QCoreApplication::translate("manual", "2", nullptr));
        textBrowser_7->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">Ambos jugadores se toman turnos sum\303\241ndole al contador un n\303\272mero del 1 al 10. El jugador 1 ser\303\241 el primero en empezar.</span></p></body></html>", nullptr));
        textBrowser_8->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">El jugador y la computadora se toman turnos sum\303\241ndole al contador un n\303\272mero del 1 al 10. El jugador empieza. CUIDADO: la computadora est\303\241 ajustada en nivel dif\303\255cil.</span></p></body></html>", nullptr));
        pushButton_11->setText(QCoreApplication::translate("manual", "2", nullptr));
        textBrowser_9->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; color:#ffffff;\">El primero en hacer que el contador sea igual 100 gana. Al final, se podr\303\241 elegir si volver a jugar o salir. </span></p></body></html>", nullptr));
        pushButton_12->setText(QCoreApplication::translate("manual", "3", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:704;\">\302\277C\303\263mo Jugar Llegar a 100?</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("manual", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:704;\">\302\277C\303\263mo Ganar?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manual: public Ui_manual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANUAL_H
