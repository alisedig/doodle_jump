#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include <QGraphicsView>
#include <QTimer>
#include "Controller.h"

class View : public QGraphicsView
{
    Q_OBJECT

private:
    QTimer *viewTimer;
    Controller *viewController;

public:
    explicit View();
    ~View();

signals:

public slots:
    void menu();
    void intro();
    void help();
    void singleMode();
    void multiMode();

};

#endif // VIEW_H
