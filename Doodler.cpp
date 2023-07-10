#include "Doodler.h"

Doodler::Doodler(QGraphicsScene *doodlerScene, QGraphicsItem *parent, QTimer *timer)
    : QObject() , QGraphicsPixmapItem(parent) , doodlerScene(doodlerScene)
{
    // set picture
    setPixmap(QPixmap(":/images/doodler.png"));

    // add to scene
    doodlerScene->addItem(this);
    setPos(200,390);

}


