#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_comopen_clicked();

    void on_pushButton_send_clicked();

    void readMyCom();

private:
    Ui::Widget *ui;
    QSerialPort *my_serialPort;
    QByteArray requestData;
    QTimer *timer;
};

#endif // WIDGET_H
