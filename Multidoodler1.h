#ifndef MULTIDOODLER1_H
#define MULTIDOODLER1_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <cstdlib>

class Multidoodler1 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

private:
    QGraphicsScene *doodler1Scene;

public:
    Multidoodler1(QGraphicsScene *doodlerScene,QGraphicsItem *parent, QTimer *timer);
    void keyPressEvent(QKeyEvent * keyEvent);
};

#endif // MULTIDOODLER1_H
