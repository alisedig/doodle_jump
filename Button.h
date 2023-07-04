#ifndef BUTTON_H
#define BUTTON_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsEllipseItem>

class Button: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
private:

public:
    QGraphicsEllipseItem *ellipse;
    //constructor
    Button(int x, int y, QString str);

signals:

};

#endif // BUTTON_H
