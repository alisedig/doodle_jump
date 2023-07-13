#ifndef MULTIPLATFORM2_H
#define MULTIPLATFORM2_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <cstdlib>
#include "Multidoodler2.h"

class Multiplatform2 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

    friend class Multidoodler2;
private:
    QGraphicsScene *platform2Scene;
    static float speed;
    static int doodler_xPos2;
    QString type,type2;
    int strength;
    int m,k,n;
    bool right = true;

public:
    Multiplatform2(QGraphicsScene *platformScene,QGraphicsItem *parent, QTimer *timer, int x, int y,QString s);

public slots:
    void Move2(); // To Do
};

#endif // MULTIPLATFORM2_H
