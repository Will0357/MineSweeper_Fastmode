#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "game.h"
#include <QGraphicsView>
#include <QDebug>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include "setting.h"
#include "clickgraphics.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setGameBoard(int width, int height, int mineNum);

private:
    Ui::MainWindow *ui;

    game *gm;
    clickGraphics *scene_img;   //表情的场景
    setting *setSelfDefined;
    QLabel *timeLabel;
    QTimer *timer;
    QTime *time;
    bool fastMode=false;        //快捷模式默认未开启
};

#endif // MAINWINDOW_H
