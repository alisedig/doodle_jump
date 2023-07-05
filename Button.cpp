#include "Button.h"

Button::Button(QString str)
{
    action = str;

    if(str == "Play") {
     setPixmap(QPixmap(":/images/playButton.png"));
    }

    if(str == "Help") {
     setPixmap(QPixmap(":/images/helpButton.png"));
    }

    if(str == "Exit") {
     setPixmap(QPixmap(":/images/exitButton.png"));
    }

    if(str == "Back") {
     setPixmap(QPixmap(":/images/backButton.png"));
    }

}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(action == "Exit")  exit(1);
}
