#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>

class View : public QGraphicsView
{
    Q_OBJECT

private:
    QGraphicsScene *scene;
    QTimer *viewTimer;

public:
    explicit View();
    ~View();

signals:

};

#endif // VIEW_H
