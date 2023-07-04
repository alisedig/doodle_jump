#include "View.h"
#include "Menu.h"

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

    Button *x = new Button(200, 375, "play");
    scene->addItem(x->ellipse);

    Button *y = new Button(200, 475, "help");
    scene->addItem(y->ellipse);

    Button *z = new Button(200, 575, "quit");
    scene->addItem(z->ellipse);


    delete x; delete y; delete z;

}

View::~View()
{
    delete scene;
    delete viewTimer;
}
