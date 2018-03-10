#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    foreach(const QSerialPortInfo &Info,QSerialPortInfo::availablePorts())
    {
        qDebug()<<"portName:"<<Info.portName();
        qDebug()<<"Description"<<Info.description();
        qDebug()<<"Manufacturer:"<<Info.manufacturer();

        QSerialPort serial;
        serial.setPort(Info);
        if (serial.open(QIODevice::ReadWrite))
        {
            ui->comboBox_portName->addItem(Info.portName());
            serial.close();
        }
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_comopen_clicked()
{
    my_serialPort = new QSerialPort(this);
    my_serialPort->setPortName(ui->comboBox_portName->currentText());
    my_serialPort->open(QIODevice::ReadWrite);
    qDebug()<<"open:"<<ui->comboBox_portName->currentText();
    my_serialPort->setBaudRate(ui->comboBox_baudRate->currentText().toInt());
    my_serialPort->setDataBits(QSerialPort::Data8);
    my_serialPort->setParity(QSerialPort::NoParity);
    my_serialPort->setFlowControl(QSerialPort::NoFlowControl);
    my_serialPort->setStopBits(QSerialPort::OneStop);

    timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(readMyCom()));
    timer->start(1000);
}

void Widget::on_pushButton_send_clicked()
{
    my_serialPort->write(ui->lineEdit_write->text().toUtf8());
}

void Widget::readMyCom()
{
    requestData = my_serialPort->readAll();
    if(requestData!=NULL)
    {
        ui->textEdit_read->append(requestData);
    }
    requestData.clear();
}
