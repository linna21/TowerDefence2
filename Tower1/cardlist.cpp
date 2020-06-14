#include "cardlist.h"

CardList::CardList(QWidget* parent) : MyObject(parent)
{
    this->setCursor(Qt::PointingHandCursor);
    back = new QWidget(this);
    back->setStyleSheet("background-color: rgba(0, 0, 0, 50%);");
    back->show();
    back->raise();
    front = new QWidget(this);
    front->setStyleSheet("background-color: rgba(0, 0, 0, 50%);");
    front->show();
    front->raise();
    frontText = new QLabel(this);
    frontText->setText("50");
    frontText->setGeometry(60, 33, 40, 20);
    frontText->setAlignment(Qt::AlignHCenter);
    frontText->setFont(QFont("Calibri", 11));
    frontText->show();
    frontText->raise();
    this->show();
    this->raise();
}

void CardList::act()
{
    if (this->frame > 0)
    {
        this->frame --;
    }
    this->transFront();
    this->raise();
}

void CardList::setIndex(int index)
{
    this->setGeometry(125, 40 + 60 * index, 100, 60);
}

void CardList::transFront()
{
    front->setGeometry(0, 6, 100, 54 * this->frame / this->frame_max);
    if (win1->sunPoint >= this->sunPoint)
    {
        back->setGeometry(0, 0, 0, 0);
    }
    else
    {
        back->setGeometry(0, 6, 100, 54);
    }
}

void CardList::mousePressEvent(QMouseEvent* event)
{
    if (win1->currentCard != nullptr)
    {
        win1->currentCard->move(win1->currentPos);
    }
    if (event->button() == Qt::LeftButton)
    {
        if (this->front->height() > 0)
        {
            QSound::play(":/Sounds/rc/NotEnoughSun.wav");
            win1->currentCard = nullptr;
            return;
        }
        if (this->win1->sunPoint < this->sunPoint)
        {
            QSound::play(":/NotEnoughSun.wav");
            win1->currentCard = nullptr;
            return;
        }
        QSound::play(":/Place.wav");
        win1->currentPos = this->pos();
        win1->currentCard = this;
    }
    else
    {
        win1->currentCard = nullptr;
    }
}

CardList::~CardList()
{
    delete (this->back);
    delete (this->front);
    delete (this->frontText);
}

SunFlowerCard::SunFlowerCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("50");
    this->frame_max = 100;
    this->frame = 100;
    this->plantIndex = 1;
    this->sunPoint = 50;
}

SunFlowerCard::~SunFlowerCard()
{
    delete this->anim;
}

PeaShooterCard::PeaShooterCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("100");
    this->frame_max = 100;
    this->frame = 100;
    this->plantIndex = 2;
    this->sunPoint = 100;
}

PeaShooterCard::~PeaShooterCard()
{
    delete this->anim;
}

PotatoCard::PotatoCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("50");
    this->frame_max = 500;
    this->frame = 500;
    this->plantIndex = 3;
    this->sunPoint = 50;
}

PotatoCard::~PotatoCard()
{
    delete this->anim;
}

PeaShooter2Card::PeaShooter2Card(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("200");
    this->frame_max = 100;
    this->frame = 100;
    this->plantIndex = 4;
    this->sunPoint = 200;
}

PeaShooter2Card::~PeaShooter2Card()
{
    delete this->anim;
}

PotatoMineCard::PotatoMineCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("25");
    this->frame_max = 500;
    this->frame = 500;
    this->plantIndex = 5;
    this->sunPoint = 25;
}

PotatoMineCard::~PotatoMineCard()
{
    delete this->anim;
}

FireTreeCard::FireTreeCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("175");
    this->frame_max = 300;
    this->frame = 300;
    this->plantIndex = 6;
    this->sunPoint = 175;
}

FireTreeCard::~FireTreeCard()
{
    delete this->anim;
}

CherryBombCard::CherryBombCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("150");
    this->frame_max = 500;
    this->frame = 500;
    this->plantIndex = 7;
    this->sunPoint = 150;
}

CherryBombCard::~CherryBombCard()
{
    delete this->anim;
}

IcePeaShooterCard::IcePeaShooterCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("175");
    this->frame_max = 100;
    this->frame = 100;
    this->plantIndex = 8;
    this->sunPoint = 175;
}

IcePeaShooterCard::~IcePeaShooterCard()
{
    delete this->anim;
}

MushroomCard::MushroomCard(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    anim->start();
    this->frontText->setText("0");
    this->frame_max = 300;
    this->frame = 300;
    this->plantIndex = 9;
    this->sunPoint = 0;
}

MushroomCard::~MushroomCard()
{
    delete this->anim;
}

Shovel::Shovel(QWidget* parent) : CardList(parent)
{
    this->setMovie(anim);
    this->setGeometry(250, 5, 76, 34);
    anim->start();
    this->frontText->setText("");
    this->frame_max = 1;
    this->frame = 0;
    this->plantIndex = 0;
    this->sunPoint = 0;
}

Shovel::~Shovel()
{
    delete this->anim;
}

