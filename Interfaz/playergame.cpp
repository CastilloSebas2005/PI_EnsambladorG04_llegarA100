#include "playergame.h"
#include "playerComputer.h"

playerGame::playerGame(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::playerGame) {
  ui->setupUi(this);
}

playerGame::~playerGame() { delete ui; }

void playerGame::resizeEvent(QResizeEvent *event) {
  (void)event;
  this->resize(800, 600);
}

void playerGame::updateTextBrowser1() {
  // Convertir counter a QString y actualizar el texto del QTextBrowser con
  // formato HTML
  QString text = QString::number(this->counter);
  QString formattedText =
      QString("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
              "\"http://www.w3.org/TR/REC-html40/strict.dtd\">"
              "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta "
              "charset=\"utf-8\" />"
              "<style type=\"text/css\">"
              "p, li { white-space: pre-wrap; }"
              "hr { height: 1px; border-width: 0; }"
              "li.unchecked::marker { content: \"\\2610\"; }"
              "li.checked::marker { content: \"\\2612\"; }"
              "</style></head>"
              "<body style=\" font-family:'Sans Serif'; font-size:9pt; "
              "font-weight:400; font-style:normal;\">"
              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; "
              "margin-left:0px; margin-right:0px; -qt-block-indent:0; "
              "text-indent:0px;\">"
              "<span style=\" font-size:24pt; font-weight:700;\">%1</span>"
              "</p></body></html>")
          .arg(text);
  ui->counterFrame->setHtml(formattedText);
}

void playerGame::updateTextBrowser2(uint8_t play) {
  // Convertir counter a QString y actualizar el texto del QTextBrowser con
  // formato HTML
  QString text = QString::number(play);
  QString formattedText =
      QString("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
              "\"http://www.w3.org/TR/REC-html40/strict.dtd\">"
              "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta "
              "charset=\"utf-8\" />"
              "<style type=\"text/css\">"
              "p, li { white-space: pre-wrap; }"
              "hr { height: 1px; border-width: 0; }"
              "li.unchecked::marker { content: \"\\2610\"; }"
              "li.checked::marker { content: \"\\2612\"; }"
              "</style></head>"
              "<body style=\" font-family:'Sans Serif'; font-size:9pt; "
              "font-weight:400; font-style:normal;\">"
              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; "
              "margin-left:0px; margin-right:0px; -qt-block-indent:0; "
              "text-indent:0px;\">"
              "<span style=\" font-size:14pt; font-weight:700;\">%1</span>"
              "</p></body></html>")
          .arg(text);
  ui->previousPlay->setHtml(formattedText);
}

void playerGame::updateTextBrowser3(QString player) {
  QString formattedText =
      QString("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
              "\"http://www.w3.org/TR/REC-html40/strict.dtd\">"
              "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta "
              "charset=\"utf-8\" />"
              "<style type=\"text/css\">"
              "p, li { white-space: pre-wrap; }"
              "hr { height: 1px; border-width: 0; }"
              "li.unchecked::marker { content: \"\\2610\"; }"
              "li.checked::marker { content: \"\\2612\"; }"
              "</style></head>"
              "<body style=\" font-family:'Sans Serif'; font-size:20pt; "
              "font-weight:700; font-style:normal;\">"
              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; "
              "margin-left:0px; margin-right:0px; -qt-block-indent:0; "
              "text-indent:0px;\">"
              "<span style=\" font-size:25pt; font-weight:400; "
              "color:#ffffff;\">%1</span>"
              "</p></body></html>")
          .arg(player);
  ui->actualPlayer->setHtml(formattedText);
}

void playerGame::updateTextBrowser4(QString player) {
  QString formattedText =
      QString("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" "
              "\"http://www.w3.org/TR/REC-html40/strict.dtd\">"
              "<html><head><meta name=\"qrichtext\" content=\"1\" /><meta "
              "charset=\"utf-8\" />"
              "<style type=\"text/css\">"
              "p, li { white-space: pre-wrap; }"
              "hr { height: 1px; border-width: 0; }"
              "li.unchecked::marker { content: \"\\2610\"; }"
              "li.checked::marker { content: \"\\2612\"; }"
              "</style></head>"
              "<body style=\" font-family:'Sans Serif'; font-size:16px; "
              "font-weight:400; font-style:normal;\">"
              "<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; "
              "margin-left:0px; margin-right:0px; -qt-block-indent:0; "
              "text-indent:0px;\">"
              "<span style=\" font-size:20pt; font-weight:704;\">%1</span>"
              "</p></body></html>")
          .arg(player);
  ui->previousPlayer->setHtml(formattedText);
}

void playerGame::on_pushButton_clicked() {
  if (turn) {
    uint8_t adder = 1;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 1;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_2_clicked() {
  if (turn) {
    uint8_t adder = 2;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 2;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_3_clicked() {
  if (turn) {
    uint8_t adder = 3;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 3;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_4_clicked() {
  if (turn) {
    uint8_t adder = 4;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 4;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_5_clicked() {
  if (turn) {
    uint8_t adder = 5;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 5;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_6_clicked() {
  if (turn) {
    uint8_t adder = 6;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 6;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_7_clicked() {
  if (turn) {
    uint8_t adder = 7;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 7;
    updateCounter(&(this->counter), adder);
    if (this->counter >= 100) {
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_8_clicked() {
  if (turn) {
    uint8_t adder = 8;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 8;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_9_clicked() {
  if (turn) {
    uint8_t adder = 9;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 9;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_pushButton_10_clicked() {
  if (turn) {
    uint8_t adder = 10;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 2");
    updateTextBrowser4("Jugador 1");
    this->turn = false;
  } else {
    uint8_t adder = 10;
    updateCounter(&(this->counter), adder);
    if(this->counter >= 100){
      // logic to show winner
    }
    updateTextBrowser1();
    updateTextBrowser2(adder);
    updateTextBrowser3("Jugador 1");
    updateTextBrowser4("Jugador 2");
    this->turn = true;
  }
}

void playerGame::on_exit_clicked() { this->close(); }
