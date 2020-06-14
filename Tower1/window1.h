#ifndef WINDOW1_H
#define WINDOW1_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QList>
#include <QFile>
#include <QTextStream>
#include"tower.h"
#include"myobject.h"
#include"cardlist.h"
class CardList;
class Window1 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);//重绘事件处理函数的声明
    void set_tower();
    int sunPoint = 50;
    CardList* currentCard = nullptr;
    QPoint currentPos;
    QList<CardList*> Cards;
    virtual void uiSetup();
private:
    QList<Tower*>tower_list;
    QList<MyObject*>object_list;

signals:
     void chooseBack();

};

#endif // WINDOW1_H
