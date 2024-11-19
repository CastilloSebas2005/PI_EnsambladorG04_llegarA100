/********************************************************************************
** Form generated from reading UI file 'playergame.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERGAME_H
#define UI_PLAYERGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_playerGame
{
public:
    QWidget *centralwidget;
    QTextBrowser *previousPlay;
    QTextBrowser *actualPlayer;
    QTextEdit *textEdit_3;
    QTextEdit *previousPlayer;
    QTextEdit *textEdit;
    QPushButton *exit;
    QTextBrowser *counterFrame;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *playerGame)
    {
        if (playerGame->objectName().isEmpty())
            playerGame->setObjectName(QString::fromUtf8("playerGame"));
        playerGame->resize(800, 600);
        playerGame->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 77, 77);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"background-size: cover;"));
        centralwidget = new QWidget(playerGame);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        previousPlay = new QTextBrowser(centralwidget);
        previousPlay->setObjectName(QString::fromUtf8("previousPlay"));
        previousPlay->setGeometry(QRect(90, 120, 51, 41));
        previousPlay->setStyleSheet(QString::fromUtf8("background: rgb(119, 133, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 2px solid blue;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        actualPlayer = new QTextBrowser(centralwidget);
        actualPlayer->setObjectName(QString::fromUtf8("actualPlayer"));
        actualPlayer->setGeometry(QRect(270, 120, 271, 51));
        actualPlayer->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background: rgb(47, 47, 47);\n"
"    font-family: Sans Serif;\n"
"    font-size: 20pt;\n"
"    font-weight: bold;\n"
"    font-style: bold;\n"
"	border-radius: 25px;  /* Bordes redondeados */\n"
"}\n"
""));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(40, 80, 161, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 2px ridge blue;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        previousPlayer = new QTextEdit(centralwidget);
        previousPlayer->setObjectName(QString::fromUtf8("previousPlayer"));
        previousPlayer->setGeometry(QRect(20, 20, 201, 51));
        previousPlayer->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(580, 30, 201, 51));
        textEdit->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(630, 460, 141, 61));
        QFont font;
        font.setBold(true);
        exit->setFont(font);
        exit->setStyleSheet(QString::fromUtf8("background: rgb(255, 5, 59);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge red;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        counterFrame = new QTextBrowser(centralwidget);
        counterFrame->setObjectName(QString::fromUtf8("counterFrame"));
        counterFrame->setGeometry(QRect(630, 90, 111, 61));
        counterFrame->setStyleSheet(QString::fromUtf8("background: rgb(63, 172, 13);  /* Fondo morado */\n"
"border: 5px ridge green;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        plainTextEdit_2 = new QPlainTextEdit(centralwidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(280, 190, 241, 301));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background: rgb(215, 14, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge purple;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 210, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(300, 350, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(440, 350, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(370, 350, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 210, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 210, 61, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 280, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 280, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 280, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(370, 420, 61, 61));
        pushButton_10->setStyleSheet(QString::fromUtf8("background: rgb(255, 255, 255);  /* Fondo morado */\n"
"border-radius: 25px;  /* Bordes redondeados */\n"
"border: 5px ridge black;  /* Borde surcado morado */\n"
"font-size: 16px;  /* Tama\303\261o de fuente */\n"
"padding: 0px;"));
        playerGame->setCentralWidget(centralwidget);
        menubar = new QMenuBar(playerGame);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        playerGame->setMenuBar(menubar);
        statusbar = new QStatusBar(playerGame);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        playerGame->setStatusBar(statusbar);

        retranslateUi(playerGame);

        QMetaObject::connectSlotsByName(playerGame);
    } // setupUi

    void retranslateUi(QMainWindow *playerGame)
    {
        playerGame->setWindowTitle(QCoreApplication::translate("playerGame", "MainWindow", nullptr));
        previousPlay->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:704;\">0</span></p></body></html>", nullptr));
        actualPlayer->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:20pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:25pt; font-weight:400; color:#ffffff;\">Jugador 1</span></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">Jugada anterior:</span></p></body></html>", nullptr));
        previousPlayer->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:704;\">Jugador 1</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:704;\">CONTADOR</span></p></body></html>", nullptr));
        exit->setText(QCoreApplication::translate("playerGame", "SALIR", nullptr));
        counterFrame->setHtml(QCoreApplication::translate("playerGame", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:704;\">0</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        pushButton_2->setWhatsThis(QCoreApplication::translate("playerGame", "<html><head/><body><p><span style=\" font-size:18pt;\">g</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_2->setText(QCoreApplication::translate("playerGame", "2", nullptr));
        pushButton_7->setText(QCoreApplication::translate("playerGame", "7", nullptr));
        pushButton_9->setText(QCoreApplication::translate("playerGame", "9", nullptr));
        pushButton_8->setText(QCoreApplication::translate("playerGame", "8", nullptr));
        pushButton_3->setText(QCoreApplication::translate("playerGame", "3", nullptr));
        pushButton->setText(QCoreApplication::translate("playerGame", "1", nullptr));
        pushButton_5->setText(QCoreApplication::translate("playerGame", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("playerGame", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("playerGame", "4", nullptr));
        pushButton_10->setText(QCoreApplication::translate("playerGame", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playerGame: public Ui_playerGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERGAME_H
