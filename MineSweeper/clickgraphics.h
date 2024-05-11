#ifndef CLICKGRAPHICS_H
#define CLICKGRAPHICS_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class clickGraphics : public QGraphicsScene
{
    Q_OBJECT

public:
    clickGraphics();

    void addImage(int type);

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event)override;

private:
    bool status=false;      //默认是关闭的

signals:
    void s_changeMode(bool);
};

#endif // CLICKGRAPHICS_H
