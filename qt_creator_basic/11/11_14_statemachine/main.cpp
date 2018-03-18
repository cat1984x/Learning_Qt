#include <QApplication>
#include <QPushButton>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPropertyAnimation>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    QPushButton button("State Machine");

    QStateMachine machine;
    QState *s1 = new QState(&machine);
    QState *s2 = new QState(&machine);
    QState *s3 = new QState(&machine);

    s1->assignProperty(&button,"geometry",QRect(100,100,120,50));
    s2->assignProperty(&button,"geometry",QRect(300,100,120,50));
    s3->assignProperty(&button,"geometry",QRect(200,200,120,50));

//    s1->addTransition(&button,SIGNAL(clicked(bool)),s2);
//    s2->addTransition(&button,SIGNAL(clicked(bool)),s3);
//    s3->addTransition(&button,SIGNAL(clicked(bool)),s1);

//    QObject::connect(s3,&QState::entered,&button,&QPushButton::showMinimized);

    QSignalTransition *transition1 = s1->addTransition(&button,&QPushButton::clicked,s2);
    QSignalTransition *transition2 = s2->addTransition(&button,&QPushButton::clicked,s3);
    QSignalTransition *transition3 = s3->addTransition(&button,&QPushButton::clicked,s1);

    QPropertyAnimation *animation = new QPropertyAnimation(&button,"geometry");
//    transition1->addAnimation(animation);
//    transition2->addAnimation(animation);
//    transition3->addAnimation(animation);

    machine.addDefaultAnimation(animation);

    machine.setInitialState(s1);
    machine.start();
    button.show();

    return app.exec();
}
