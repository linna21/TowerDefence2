#include "tower.h"
#include <QPoint>
#include <QPixmap>
#include <QPainter>

Tower::Tower(QPoint pos,QString pixFilename) : QObject(0),pixmap(pixFilename)
{
    _pos = pos;

}
void Tower::draw(QPainter *painter){
    painter->drawPixmap(_pos,pixmap);
}
