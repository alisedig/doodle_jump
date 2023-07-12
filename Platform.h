#ifndef PLATFORM_H
#define PLATFORM_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <cstdlib>
#include "Doodler.h"

class Platform : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

    friend class Doodler;
private:
    QGraphicsScene *platformScene;
    static float speed;
    static int doodler_xPos;
    QString type;
    int strength;
    int m = rand() % 50 + 10,k=1,n=1;
    bool right = true;

public:
    Platform(QGraphicsScene *platformScene,QGraphicsItem *parent, QTimer *timer, int x, int y,QString s);

public slots:
    void Move(); // To Do
};

#endif // PLATFORM_H
