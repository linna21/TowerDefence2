#ifndef CARDLIST_H
#define CARDLIST_H

#include <QObject>
#include <QLabel>
#include <QMovie>
#include <QSound>
#include <QMouseEvent>

#include "myobject.h"
#include "window1.h"
#include "window2.h"


class CardList : public MyObject
{
public:
    CardList(QWidget* parent = 0);
    ~CardList();
    int plantIndex;
    int sunPoint = 50;
    int frame_max = 1, frame = 1;
    virtual void act();
    QWidget* front;
    QWidget* back;
    QLabel* frontText;
    void setIndex(int index);
    void transFront();
protected:
    void mousePressEvent(QMouseEvent* event);
};
//
class SunFlowerCard : public CardList
{
public:
    SunFlowerCard(QWidget* parent = 0);
    ~SunFlowerCard();
private:
    QMovie* anim = new QMovie(":/SunFlower.png");
};
//
class PeaShooterCard : public CardList
{
public:
    PeaShooterCard(QWidget* parent = 0);
    ~PeaShooterCard();
private:
    QMovie* anim = new QMovie(":/PeaShooter.png");
};
//
class PotatoCard : public CardList
{
public:
    PotatoCard(QWidget* parent = 0);
    ~PotatoCard();
private:
    QMovie* anim = new QMovie(":/Potato.png");
};
//
class PeaShooter2Card: public CardList
{
public:
    PeaShooter2Card(QWidget* parent = 0);
    ~PeaShooter2Card();
private:
    QMovie* anim = new QMovie(":/PeaShooter2.png");
};
//
class PotatoMineCard: public CardList
{
public:
    PotatoMineCard(QWidget* parent = 0);
    ~PotatoMineCard();
private:
    QMovie* anim = new QMovie(":/PotatoMine.png");
};
//
class FireTreeCard: public CardList
{
public:
    FireTreeCard(QWidget* parent = 0);
    ~FireTreeCard();
private:
    QMovie* anim = new QMovie(":/FireTree.png");
};
//
class CherryBombCard: public CardList
{
public:
    CherryBombCard(QWidget* parent = 0);
    ~CherryBombCard();
private:
    QMovie* anim = new QMovie(":/CherryBomb.png");
};
//
class IcePeaShooterCard: public CardList
{
public:
    IcePeaShooterCard(QWidget* parent = 0);
    ~IcePeaShooterCard();
private:
    QMovie* anim = new QMovie(":/IcePeaShooter.png");
};
//
class MushroomCard : public CardList
{
public:
    MushroomCard(QWidget* parent = 0);
    ~MushroomCard();
private:
    QMovie* anim = new QMovie(":/Mushroom.png");
};
//
class Shovel : public CardList
{
public:
    Shovel(QWidget* parent = 0);
    ~Shovel();
private:
    QMovie* anim = new QMovie(":/Shovel.png");
};

#endif // CARDLIST_H
