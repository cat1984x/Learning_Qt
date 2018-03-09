#include <QtWidgets> //是QtWidgets
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//需要
//    QWidget *widget = new QWidget();
//    QWidget *widget = new QWidget(0,Qt::Dialog);
    QWidget *widget = new QWidget(0,Qt::Dialog|Qt::FramelessWindowHint);
    widget->setWindowTitle(QObject::tr("我是widget"));
//    QLabel *label = new QLabel();
//    QLabel *label = new QLabel(0,Qt::SplashScreen);
    QLabel *label = new QLabel(0,Qt::SplashScreen|Qt::WindowStaysOnTopHint);
    label->setWindowTitle(QObject::tr("我是label"));
    label->setText(QObject::tr("我是个窗口"));
    label->resize(180,20);
    QLabel *label2 = new QLabel(widget);
    label2->setText(QObject::tr("label2:我不是独立窗口，只是widget的子部件"));
    label2->resize(250,20);
    label->show();
    widget->show();

    int ret = a.exec();//需要
    delete label;
    delete widget;
    return ret;

}
