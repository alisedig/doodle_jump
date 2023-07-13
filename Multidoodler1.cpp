#include "Multidoodler1.h"
#include "Multiplatform1.h"

Multidoodler1::Multidoodler1(QGraphicsScene *doodlerScene, QGraphicsItem *parent, QTimer *timer)
    : QObject() , QGraphicsPixmapItem(parent) , doodler1Scene(doodlerScene)
{
    // set picture
    setPixmap(QPixmap(":/images/doodler.png"));

    // add to scene
    doodlerScene->addItem(this);
    setPos(150,550);

    Multiplatform1::doodler_xPos1 = 150;
}

void Multidoodler1::keyPressEvent(QKeyEvent *keyEvent)
{
    //move to right
    if(keyEvent->key() == Qt::Key_D){
        this->setPixmap(QPixmap(":/images/doodler.png"));
        setPos(x() + 10, y());
    }

    //move to left
    if(keyEvent->key() == Qt::Key_A){
        this->setPixmap(QPixmap(":/images/doodler2.png"));
        setPos(x() - 10, y());
    }

    if(x() >= 235){
        setPos(x() - 275, y());

    }

    if(x() <= -20){
        setPos(x() + 275, y());
    }
    Multiplatform1::doodler_xPos1 = x();
}
