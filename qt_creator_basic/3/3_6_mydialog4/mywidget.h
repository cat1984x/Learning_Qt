#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class Mywidget;
}

class Mywidget : public QWidget
{
    Q_OBJECT

public:
    explicit Mywidget(QWidget *parent = 0);
    ~Mywidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Mywidget *ui;
};

#endif // MYWIDGET_H
