#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPixmap>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QFont font;
    font.setFamily("华文行楷");
    font.setPointSize(20);
    font.setBold(true);
    font.setItalic(true);
    ui->label->setFont(font);
    QString string = tr("标题太长，需要进行省略！");
    QString str =ui->label->fontMetrics().elidedText(string,Qt::ElideMiddle,180);
    ui->label->setText(str);
    ui->label->setPixmap(QPixmap("cat.jpg"));
}

MyWidget::~MyWidget()
{
    delete ui;
}
