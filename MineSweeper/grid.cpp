#include "grid.h"

grid::grid()
{

}

void grid::leftClicked()
{
    if(!isDug && !isMark){
        qDebug()<<"left clicked";
        emit s_isDug();
        showGrid();
        if(content==0)  emit s_findNone(row,col);
        if(content==9)  emit s_findMine(row,col);
    }
}

void grid::rightClicked()
{
    if(!isDug){
        isMark=!isMark;         //状态翻转
        if(isMark){
            setPixmap(QPixmap("://image/flag.jpg"));
            emit s_changeMarkNum(1);
        }
        else{
            setPixmap(QPixmap("://image/initial.jpg"));
            emit s_changeMarkNum(-1);
        }
    }
}

void grid::showGrid()
{
    isDug=true;
    switch(content){
        case 0:setPixmap(QPixmap("://image/mine0.jpg"));break;
        case 1:setPixmap(QPixmap("://image/mine1.jpg"));break;
        case 2:setPixmap(QPixmap("://image/mine2.jpg"));break;
        case 3:setPixmap(QPixmap("://image/mine3.jpg"));break;
        case 4:setPixmap(QPixmap("://image/mine4.jpg"));break;
        case 5:setPixmap(QPixmap("://image/mine5.jpg"));break;
        case 6:setPixmap(QPixmap("://image/mine6.jpg"));break;
        case 7:setPixmap(QPixmap("://image/mine7.jpg"));break;
        case 8:setPixmap(QPixmap("://image/mine8.jpg"));break;
        case 9:setPixmap(QPixmap("://image/oh!no.jpg"));break;
    }
}

void grid::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(!isDug){
        if(event->button()==Qt::LeftButton)     //左键点击
            leftClicked();
        if(event->button()==Qt::RightButton)    //右键点击
            rightClicked();
    }
    emit s_check();
}
