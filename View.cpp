#include "View.h"
#include "Button.h"

View::View() : QGraphicsView()
{
    // ceate viewController
    viewController = new Controller();

    // create scene
    setScene(viewController->scene);

    // set background image
    setBackgroundBrush(QBrush(QImage(":/images/background.png")));

    //set fixed size
    setFixedSize(550,750);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    auto button1 = new Button("Play");
    button1->setPos(200,375);
    viewController->scene->addItem(button1);

    auto button2 = new Button("Help");
    button2->setPos(200,475);
    viewController->scene->addItem(button2);

    auto button3 = new Button("Exit");
    button3->setPos(200,575);
    viewController->scene->addItem(button3);



}

View::~View()
{
    delete viewTimer;
    delete viewController;
}
