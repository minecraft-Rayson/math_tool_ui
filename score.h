#ifndef SCORE_H
#define SCORE_H

#include <QWidget>

namespace Ui {
class score;
}

class score : public QWidget
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = nullptr);
    ~score();
signals:
    void back();
private:
    Ui::score *ui;
};

#endif // SCORE_H
