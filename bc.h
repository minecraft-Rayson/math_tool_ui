#ifndef BC_H
#define BC_H

#include <QDialog>
#include <QWidget>
#include <QKeyEvent>

namespace Ui {
class BC;
}

class BC : public QDialog
{
    Q_OBJECT

public:
    explicit BC(QWidget *parent = nullptr);
    ~BC();
signals:
    void back();
protected:
    void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::BC *ui;
    QString index;     //num
    QString index2;    //char
    QStringList index3;    //num
    QString c(double num_1, QString symbol, double num_2);
};

#endif // BC_H
