#include "Controller.h"

Controller::Controller(QObject *parent)
    : QObject{parent}
{
    // create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 550, 750);

    // create holder
    holder = new QGraphicsRectItem();
    holder->setRect(0, 0, 550, 750);

    // create timer
    ctimer = new QTimer();
    ctimer->start(35);
}

Controller::~Controller()
{
    delete holder;
    delete scene;
}

void Controller::addPlatform(int x, int y,QString s)
{
    platformList.push_back(new Platform(scene,holder,ctimer, x, y,s));
}

void Controller::addDoodler()
{
    doodlerList.push_back(new Doodler(scene,holder,ctimer));
    doodlerList.last()->setFlag(QGraphicsItem::ItemIsFocusable);
    doodlerList.last()->setFocus();
}

void Controller::addPlatform1(int x, int y, QString s)
{
    multiplatform1List.push_back(new Multiplatform1(scene,holder,ctimer, x, y,s));
}

void Controller::addPlatform2(int x, int y, QString s)
{
    multiplatform2List.push_back(new Multiplatform2(scene,holder,ctimer, x, y,s));
}

void Controller::addDoodler1()
{
    multidoodler1List.push_back(new Multidoodler1(scene,holder,ctimer));
    doodlerList.last()->setFlag(QGraphicsItem::ItemIsFocusable);
    doodlerList.last()->setFocus();
}

void Controller::addDoodler2()
{
    multidoodler2List.push_back(new Multidoodler2(scene,holder,ctimer));
    doodlerList.last()->setFlag(QGraphicsItem::ItemIsFocusable);
    doodlerList.last()->setFocus();
}
