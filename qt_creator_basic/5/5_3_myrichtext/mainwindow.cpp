#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextFrame>
#include <QDebug>
#include <QLineEdit>
#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>
#include "mysyntaxhighlighter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTextDocument * document = ui->textEdit->document();
    QTextFrame * rootFrame = document->rootFrame();
    QTextFrameFormat format;
    format.setBorderBrush(Qt::red);
    format.setBorder(3);
    rootFrame->setFrameFormat(format);

    QTextFrameFormat frameFormat;
    frameFormat.setBackground(Qt::lightGray);
    frameFormat.setMargin(10);
    frameFormat.setPadding(5);
    frameFormat.setBorder(2);
    frameFormat.setBorderStyle(QTextFrameFormat::BorderStyle_Dotted);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.insertFrame(frameFormat);

    QAction *action_textFrame = new QAction(tr("框架"),this);
    connect(action_textFrame,&QAction::triggered,this,&MainWindow::showTextFrame);
    ui->mainToolBar->addAction(action_textFrame);

    QAction *action_textBlock = new QAction(tr("文本块"),this);
    connect(action_textBlock,&QAction::triggered,this,&MainWindow::showTextBlock);
    ui->mainToolBar->addAction(action_textBlock);

    QAction *action_font = new QAction(tr("字体"),this);
    action_font->setCheckable(true);
    connect(action_font,&QAction::toggled,this,&MainWindow::setTextFont);
    ui->mainToolBar->addAction(action_font);

    QAction *action_textTable = new QAction(tr("表格"),this);
    QAction *action_textList = new QAction(tr("列表"),this);
    QAction *action_textImage = new QAction(tr("图片"),this);
    connect(action_textTable,&QAction::triggered,this,&MainWindow::insertTable);
    connect(action_textList,&QAction::triggered,this,&MainWindow::insertList);
    connect(action_textImage,&QAction::triggered,this,&MainWindow::insertImage);
    ui->mainToolBar->addAction(action_textTable);
    ui->mainToolBar->addAction(action_textList);
    ui->mainToolBar->addAction(action_textImage);

    QAction *action_textFind = new QAction(tr("查找"),this);
    connect(action_textFind,&QAction::triggered,this,&MainWindow::textFind);
    ui->mainToolBar->addAction(action_textFind);

    findDialog = new QDialog(this);
    lineEdit = new QLineEdit(findDialog);
    QPushButton *btn = new QPushButton(findDialog);
    btn->setText(tr("查找下一个"));
    connect(btn,&QPushButton::clicked,this,&MainWindow::findNext);
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(lineEdit);
    layout->addWidget(btn);
    findDialog->setLayout(layout);

    highlighter = new MySyntaxHighlighter(ui->textEdit->document());

    ui->textEdit->append(tr("<h1><font color = red>使用HTML</font></h1>"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTextFrame()
{
    QTextDocument *document = ui->textEdit->document();
    QTextFrame *frame = document->rootFrame();
    QTextFrame::iterator it;
    for(it = frame->begin(); !(it.atEnd()); ++it)
    {
        QTextFrame *childFrame = it.currentFrame();
        QTextBlock childBlock = it.currentBlock();
        if(childFrame)
            qDebug()<<"frame";
        else if(childBlock.isValid())
            qDebug()<<"block:"<<childBlock.text();
    }
}

void MainWindow::showTextBlock()
{
    QTextDocument *document = ui->textEdit->document();
    QTextBlock block = document->firstBlock();
    for(int i = 0; i < document->blockCount(); i++)
    {
        qDebug()<<tr("文本块%1，文本块首行行号为：%2,长度为：%3,内容为：")
                  .arg(i).arg(block.firstLineNumber()).arg(block.length())
               <<block.text();
        block = block.next();
    }
}

void MainWindow::setTextFont(bool checked)
{
    if(checked)
    {
        QTextCursor cursor = ui->textEdit->textCursor();
        QTextBlockFormat blockFormat;
        blockFormat.setAlignment(Qt::AlignCenter);
        cursor.insertBlock(blockFormat);
        QTextCharFormat charFormat;
        charFormat.setBackground(Qt::lightGray);
        charFormat.setForeground(Qt::blue);
        charFormat.setFont(QFont(tr("宋体"),12,QFont::Bold,true));
        charFormat.setFontUnderline(true);
        cursor.setCharFormat(charFormat);
        cursor.insertText(tr("测试字体"));
    }
    else
    {}
}

void MainWindow::insertTable()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    QTextTableFormat format;
    format.setCellSpacing(2);
    format.setCellPadding(10);
    cursor.insertTable(2,2,format);
}

void MainWindow::insertList()
{
    QTextListFormat format;
    format.setStyle(QTextListFormat::ListDecimal);
    ui->textEdit->textCursor().insertList(format);
}

void MainWindow::insertImage()
{
    QTextImageFormat format;
    format.setName("../5_3_myrichtext/logo.png");
    ui->textEdit->textCursor().insertImage(format);
}

void MainWindow::textFind()
{
    findDialog->show();
}

void MainWindow::findNext()
{
    QString string = lineEdit->text();
    bool isfind = ui->textEdit->find(string,QTextDocument::FindBackward);
    if(isfind)
    {
        qDebug()<<tr("行号：%1 列号：%2")
                  .arg(ui->textEdit->textCursor().blockNumber())
                  .arg(ui->textEdit->textCursor().columnNumber());
    }
}
