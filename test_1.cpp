#include "test_1.h"
#include "ui_test_1.h"
#include <QPushButton>

test_1::test_1(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::test_1)
{
    ui->setupUi(this);
    connect(ui -> pushButton, &QPushButton::clicked,[=](){
        emit back();
    });
}

test_1::~test_1()
{
    delete ui;
}
