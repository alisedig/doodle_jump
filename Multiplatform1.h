#ifndef MULTIPLATFORM1_H
#define MULTIPLATFORM1_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QTimer>
#include <cstdlib>
#include "Multidoodler1.h"

class Multiplatform1 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

    friend class Multidoodler1;
private:
    QGraphicsScene *platformScene;
    static float speed;
    static int doodler_xPos;
    QString type,type2;
    int strength;
    int m,k,n;
    bool right = true;

public:
    Multiplatform1(QGraphicsScene *platformScene,QGraphicsItem *parent, QTimer *timer, int x, int y,QString s);

public slots:
    void Move1(); // To Do
};

#endif // MULTIPLATFORM1_H
