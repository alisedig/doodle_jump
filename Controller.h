#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsRectItem>
#include <Platform.h>
#include <Doodler.h>
#include <Multiplatform1.h>
#include <Multiplatform2.h>
#include <Multidoodler1.h>
#include <Multidoodler2.h>

class Controller : public QObject
{
    Q_OBJECT
    friend class View;
    friend class Menu;
private:
    QGraphicsScene *scene;
    QTimer *ctimer;
    QGraphicsRectItem *holder;
    QList <Platform *> platformList;
    QList <Doodler *> doodlerList;

    // mutliplayer
    QList <Multiplatform1 *> multiplatform1List;
    QList <Multiplatform2 *> multiplatform2List;
    QList <Multidoodler1 *> multidoodler1List;
    QList <Multidoodler2 *> multidoodler2List;

public:
    explicit Controller(QObject *parent = nullptr);
    ~Controller();
    void addPlatform(int x, int y,QString s);
    void addDoodler();
    void addPlatform1(int x, int y,QString s);
    void addPlatform2(int x, int y,QString s);
    void addDoodler1();
    void addDoodler2();


signals:

};

#endif // CONTROLLER_H
