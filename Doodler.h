#ifndef DOODLER_H
#define DOODLER_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <cstdlib>

class Doodler : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

private:
    QGraphicsScene *doodlerScene;

public:
    Doodler(QGraphicsScene *doodlerScene,QGraphicsItem *parent, QTimer *timer);
};

#endif // DOODLER_H
