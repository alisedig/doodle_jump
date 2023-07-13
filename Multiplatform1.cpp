#include "Multiplatform1.h"

float Multiplatform1::speed = 9;
int Multiplatform1::doodler_xPos1;

Multiplatform1::Multiplatform1(QGraphicsScene *platformScene, QGraphicsItem *parent, QTimer *timer, int x, int y,QString s)
    : QObject(), QGraphicsPixmapItem(parent) , platform1Scene(platformScene) , type(s) , type2(s)
{
    speed = 9;
    m = rand()%5+1; k=1; n=1;

    // set picture
    if(type == "Green") {
        setPixmap(QPixmap(":/images/platform1.png"));
        setPos(x, y);
        platformScene->addItem(this);
        strength = 5;
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
    }

    if(type == "Brown") {
        setPixmap(QPixmap(":/images/platform2.png"));
        setPos(x,y);
        platformScene->addItem(this);
        strength = 1;
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
    }

    if(type == "Move") {
        setPixmap(QPixmap(":/images/platform3.png"));
        setPos(x,y);
        platformScene->addItem(this);
        strength = -1;
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
    }

    if(type == "Spring") {
        setPixmap(QPixmap(":/images/platform4.png"));
        setPos(x,y);
        platformScene->addItem(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
        strength = -1;
    }

    if(type == "Rocket") {
        setPixmap(QPixmap(":/images/platform5.png"));
        setPos(x,y);
        platformScene->addItem(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
        strength = -1;
    }

    if(s == "Speed") {
        setPixmap(QPixmap(":/images/platform6.png"));
        setPos(x,y);
        platformScene->addItem(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(Move1()));
        strength = -1;
    }
}

void Multiplatform1::Move1()
{

    if(speed < 0)
        if(((y() <= 589) && (y() >= 550)) && (((doodler_xPos1 <= x() + 49) && (x() - 40 <= doodler_xPos1)))){
            if(type == "Green" || type == "Brown" || type == "Move") speed = 10;
            else if(type == "Spring") speed = 30;
            else if(type == "Rocket") speed = 40;
            else if(type == "Speed") speed = 20;
            strength--;
        }

    speed -= 0.05;

    // move
    if(type == "Move") {
        if(right) {
            setPos(x() + 4, y() + speed);
            if(x() > 260) right = false;
        }
        if(!right) {
            setPos(x() - 4, y() + speed);
            if(x() < 15) right = true;
        }
    }
    else
        setPos(x(), y() + speed);


    // returning back the out of box item
    if(y() > 750 || strength == 0) {

        if(type2 == "Spring" || type2 == "Rocket" || type2 == "Speed") {
            if(k%m == 0 && n < 10) {
                if(type2 == "Spring") { type = "Spring"; this->setPixmap(QPixmap(":/images/platform4.png")); }
                if(type2 == "Rocket") { type = "Rocket"; this->setPixmap(QPixmap(":/images/platform5.png")); }
                if(type2 == "Speed") { type = "Speed"; this->setPixmap(QPixmap(":/images/platform6.png")); }
                n++;
            }
            else { type = "Green"; this->setPixmap(QPixmap(":/images/platform1.png")); }
            k++;
        }

        setPos(rand() % 250, y() - 700);

        if(type == "Green") strength = 5;
        if(type == "Brown") strength = 1;
    }
}
