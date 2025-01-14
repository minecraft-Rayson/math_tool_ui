#include "score.h"
#include "ui_score.h"
#include <QPushButton>

score::score(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::score)
{
    ui->setupUi(this);

    connect(ui -> back, &QPushButton::clicked, this, [=](){
        emit back();
    });
}

score::~score()
{
    delete ui;
}
