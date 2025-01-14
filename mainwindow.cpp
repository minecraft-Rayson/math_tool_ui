#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "test_1.h"
#include "score.h"
#include <QMouseEvent>
#include <QSize>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , normalSize(this->size())
    , normalPosition(this->pos())
{
    ui->setupUi(this);
    this->page2 = new test_1;
    this->Basic_calculation = new BC;
    this->page3 = new score;

    this->setWindowTitle("Math Tool");
    this->setWindowIcon(QIcon(":/icon/.icon/icon_for_math-tool_png.png"));
    this->setWindowFlags(Qt::FramelessWindowHint);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::close);
    connect(ui->close, &QPushButton::clicked, this, &MainWindow::close);

    connect(ui -> pushButton_2, &QPushButton::clicked, this, [=](){
        this -> hide();
        this -> page2 -> show();
    });
    connect(this -> page2, &test_1::back, [=](){
        this -> page2 -> hide();
        this -> show();
    });


    connect(ui -> calculater, &QPushButton::clicked, this, [=](){
        this -> hide();
        this -> Basic_calculation -> show();
    });
    connect(this -> Basic_calculation, &BC::back, [=](){
        this -> Basic_calculation -> hide();
        this -> show();
    });


    connect(ui -> pushButton_3, &QPushButton::clicked, this, [=](){
        this -> hide();
        this -> page3 -> show();
    });
    connect(this -> page3, &score::back, [=](){
        this -> page3 -> hide();
        this -> show();
    });
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        dragPosition = event->globalPosition().toPoint() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPosition().toPoint() - dragPosition);
        event->accept();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
