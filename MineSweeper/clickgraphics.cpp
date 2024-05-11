#include "clickgraphics.h"

clickGraphics::clickGraphics()
{

}

void clickGraphics::addImage(int type)
{
    this->clear();

    switch (type) {
    case 1:status ? addPixmap(QPixmap("://image/smile.png")) : addPixmap(QPixmap("://image/sleep.png"));break;
    case 2:addPixmap(QPixmap("://image/victory.png"));break;
    case 3:addPixmap(QPixmap("://image/fail.png"));break;
    case 4:addPixmap(QPixmap("://image/dizzy.png"));break;
    }
}

void clickGraphics::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    status=!status;
    emit s_changeMode(status);
}
