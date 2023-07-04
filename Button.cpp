#include "Button.h"
#include <QPen>

Button::Button(int x, int y, QString str)
{
    ellipse = new QGraphicsEllipseItem();
    ellipse->setRect(x, y, 150, 70);
    QPen *Pen = new QPen("black");
    Pen->setWidth(3);
    ellipse->setPen(*Pen);

}
