#include "myobject.h"



MyObject::MyObject(QWidget *parent) : QLabel(parent)
{
    this->setMouseTracking(true);
    this->win1 = (Window1*)this->parent();
}
