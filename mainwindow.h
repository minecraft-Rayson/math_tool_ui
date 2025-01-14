#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include "test_1.h"
#include "bc.h"
#include "score.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    test_1 *page2 = nullptr;
    BC *Basic_calculation = nullptr;
    score *page3 = nullptr;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    Ui::MainWindow *ui;
    QPoint dragPosition; // 添加的成员变量，用于保存拖拽位置
    QSize normalSize; // 记录窗口正常大小
    QPoint normalPosition; // 记录窗口正常位置
};

#endif // MAINWINDOW_H
