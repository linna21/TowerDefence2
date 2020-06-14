#ifndef MYOBJECT_H
#define MYOBJECT_H


#include <QLabel>
#include <QMovie>
#include <QMouseEvent>


class Window1;
class MyObject : public QLabel
{
    Q_OBJECT
public:
    explicit MyObject(QWidget* parent = 0);
    bool alive = true;
    virtual void act()=0;
    int strength = 1;
    Window1* win1;
};




#endif // MYOBJECT_H
