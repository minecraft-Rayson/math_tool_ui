#ifndef TEST_1_H
#define TEST_1_H

#include <QDialog>

namespace Ui {
class test_1;
}

class test_1 : public QDialog
{
    Q_OBJECT

public:
    explicit test_1(QWidget *parent = nullptr);
    ~test_1();
signals:
    void back();
private:
    Ui::test_1 *ui;
};

#endif // TEST_1_H
