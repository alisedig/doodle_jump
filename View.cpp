#include "View.h"

View::View() : QGraphicsView()
{

    // create scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 550, 750);
    setScene(scene);

    // set background image
    setBackgroundBrush(QBrush(QImage(":/images/background.png")));

    //set fixed size
    setFixedSize(550,750);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

}

View::~View()
{
    delete scene;
    delete viewTimer;
}
