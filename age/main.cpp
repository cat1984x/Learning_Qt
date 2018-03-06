#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *widget = new QWidget;
    widget->setWindowTitle("age");
    QSlider *slider = new QSlider(Qt::Horizontal);
    QSpinBox *spinbox = new QSpinBox;
    slider->setRange(0,100);
    spinbox->setRange(0,100);

    QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));

    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addWidget(spinbox);
    hlayout->addWidget(slider);

    widget->setLayout(hlayout);

    widget->show();

    return a.exec();
}
