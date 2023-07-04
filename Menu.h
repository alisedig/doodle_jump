#ifndef MENU_H
#define MENU_H

#include <QObject>
#include <QGraphicsEllipseItem>
#include <Button.h>

class Menu : public QObject
{
    Q_OBJECT

private:



public:
    explicit Menu(QObject *parent = nullptr);
    Menu();
    ~Menu();

signals:

};

#endif // MENU_H
