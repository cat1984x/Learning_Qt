#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>
#include <QColorDialog>
#include <QFileDialog>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_pushButton_clicked()
{
//    QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"));
//    QColor color = QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
//    qDebug()<< "color:"<<color;

    QColorDialog dialog(Qt::red);
    dialog.setOption(QColorDialog::ShowAlphaChannel);
    dialog.exec();
    QColor color =dialog.currentColor();
    qDebug()<< "color:" << color;
}

void MyWidget::on_pushButton_2_clicked()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this,tr("文件对话框"),"C:",tr("图片文件(*png *jpg);;文本文件(*txt)"));
    qDebug()<<"filename:"<<fileNames;
}
