#include "bc.h"
#include "ui_bc.h"

#include <QPushButton>
#include <QString>
#include <QStringList>

BC::BC(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BC)
    , index("")
    , index2("")
    , index3(QStringList())
{

    ui->setupUi(this);
    connect(ui -> back, &QPushButton::clicked, this, [=](){
        emit back();
    });



    connect(ui -> one, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("1");
        ui -> _show -> setText(index);
    });
    connect(ui -> two, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("2");
        ui -> _show -> setText(index);
    });
    connect(ui -> three, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("3");
        ui -> _show -> setText(index);
    });
    connect(ui -> four, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("4");
        ui -> _show -> setText(index);
    });
    connect(ui -> five, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("5");
        ui -> _show -> setText(index);
    });
    connect(ui -> six, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("6");
        ui -> _show -> setText(index);
    });
    connect(ui -> seven, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("7");
        ui -> _show -> setText(index);
    });
    connect(ui -> eight, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("8");
        ui -> _show -> setText(index);
    });
    connect(ui -> nine, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("9");
        ui -> _show -> setText(index);
    });
    connect(ui -> zero, &QPushButton::clicked, this, [=](){
        index += QString::fromLatin1("0");
        ui -> _show -> setText(index);
    });



    connect(ui -> add, &QPushButton::clicked, this, [=](){
        ui -> _show -> setText("+");
        index2 = "+";
        index += QString::fromLatin1(" ");
    });
    connect(ui -> sub, &QPushButton::clicked, this, [=](){
        ui -> _show -> setText("-");
        index2 = "-";
        index += QString::fromLatin1(" ");
    });
    connect(ui -> mul, &QPushButton::clicked, this, [=](){
        ui -> _show -> setText("*");
        index2 = "*";
        index += QString::fromLatin1(" ");
    });
    connect(ui -> div, &QPushButton::clicked, this, [=](){
        ui -> _show -> setText("/");
        index2 = "/";
        index += QString::fromLatin1(" ");
    });
    connect(ui -> Enter, &QPushButton::clicked, this, [=](){
        index3 = index.split(" ");
        ui -> _show -> setText(c(index3[0].toDouble(), index2, index3[1].toDouble()));
        index = "";
        index2 = "";
    });

}
QString BC::c(double num_1, QString symbol, double num_2){
    if (symbol == "+"){
        return QString::number(num_1 + num_2, 'g', 17);
    }
    else if (symbol == "-"){
        return QString::number(num_1 - num_2, 'g', 17);
    }
    else if (symbol == "*"){
        return QString::number(num_1 * num_2, 'g', 17);
    }
    else{
        return QString::number(num_1 / num_2, 'g', 17);
    }
}
void BC::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_1) {
        index += QString::fromLatin1("1");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_2) {
        index += QString::fromLatin1("2");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_3) {
        index += QString::fromLatin1("3");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_4) {
        index += QString::fromLatin1("4");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_5) {
        index += QString::fromLatin1("5");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_6) {
        index += QString::fromLatin1("6");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_7) {
        index += QString::fromLatin1("7");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_8) {
        index += QString::fromLatin1("8");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_9) {
        index += QString::fromLatin1("9");
        ui->_show->setText(index);
    }else if (event->key() == Qt::Key_0) {
        index += QString::fromLatin1("0");
        ui->_show->setText(index);
    }

    else if (event->key() == Qt::Key_Plus) {
        ui -> _show -> setText("+");
        index2 = "+";
        index += QString::fromLatin1(" ");
    }else if (event->key() == Qt::Key_Minus) {
        ui -> _show -> setText("-");
        index2 = "-";
        index += QString::fromLatin1(" ");
    }else if (event->key() == Qt::Key_Asterisk) {
        ui -> _show -> setText("*");
        index2 = "*";
        index += QString::fromLatin1(" ");
    }else if (event->key() == Qt::Key_Slash) {
        ui -> _show -> setText("/");
        index2 = "/";
        index += QString::fromLatin1(" ");
    }

    else if (event->key() == Qt::Key_Equal) {
        index3 = index.split(" ");
        ui -> _show -> setText(c(index3[0].toDouble(), index2, index3[1].toDouble()));
        index = "";
        index2 = "";
    }else if (event -> key() == Qt::Key_Enter){
        index3 = index.split(" ");
        ui -> _show -> setText(c(index3[0].toDouble(), index2, index3[1].toDouble()));
        index = "";
        index2 = "";
    }
    QDialog::keyPressEvent(event);
}
BC::~BC()
{
    delete ui;
}
