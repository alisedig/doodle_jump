#ifndef MULTIDOODLER2_H
#define MULTIDOODLER2_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <cstdlib>

class Multidoodler2 : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

private:
    QGraphicsScene *doodlerScene;

public:
    Multidoodler2(QGraphicsScene *doodlerScene,QGraphicsItem *parent, QTimer *timer);
    void keyPressEvent(QKeyEvent * keyEvent);
};
#endif // MULTIDOODLER2_H
