#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include <QObject>
#include <QSpinBox>

namespace Ui {
class setting;
}

class setting : public QWidget
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

signals:
    void s_setDefined(int width,int height,int mineNum);

private slots:
    void on_pushButton_clicked();

    void on_spinBox_width_valueChanged(int arg1);

    void on_spinBox_height_valueChanged(int arg1);

private:
    Ui::setting *ui;

    int width,height,mineNum;
};

#endif // SETTING_H
