#include "Multidoodler2.h"
#include "Multiplatform2.h"

Multidoodler2::Multidoodler2(QGraphicsScene *doodlerScene, QGraphicsItem *parent, QTimer *timer)
    : QObject() , QGraphicsPixmapItem(parent) , doodler2Scene(doodlerScene)
{
    // set picture
    setPixmap(QPixmap(":/images/doodler.png"));

    // add to scene
    doodlerScene->addItem(this);
    setPos(400,550);

    Multiplatform2::doodler_xPos2 = 400;
}

void Multidoodler2::keyPressEvent(QKeyEvent *keyEvent)
{
    //move to right
    if(keyEvent->key() == Qt::Key_Right){
        this->setPixmap(QPixmap(":/images/doodler.png"));
        setPos(x() + 10, y());
    }

    //move to left
    if(keyEvent->key() == Qt::Key_Left){
        this->setPixmap(QPixmap(":/images/doodler2.png"));
        setPos(x() - 10, y());
    }

    if(x() >= 530){
        setPos(x() - 275, y());

    }

    if(x() <= 275){
        setPos(x() + 275, y());
    }
    Multiplatform2::doodler_xPos2 = x();
}
