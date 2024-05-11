/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox_width;
    QLabel *label_2;
    QSpinBox *spinBox_height;
    QLabel *label_3;
    QSpinBox *spinBox_mine;
    QPushButton *pushButton;

    void setupUi(QWidget *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName("setting");
        setting->resize(171, 138);
        gridLayout = new QGridLayout(setting);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(setting);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox_width = new QSpinBox(setting);
        spinBox_width->setObjectName("spinBox_width");

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_width);

        label_2 = new QLabel(setting);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        spinBox_height = new QSpinBox(setting);
        spinBox_height->setObjectName("spinBox_height");

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_height);

        label_3 = new QLabel(setting);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBox_mine = new QSpinBox(setting);
        spinBox_mine->setObjectName("spinBox_mine");

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_mine);


        verticalLayout->addLayout(formLayout);

        pushButton = new QPushButton(setting);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QWidget *setting)
    {
        setting->setWindowTitle(QCoreApplication::translate("setting", "Form", nullptr));
        label->setText(QCoreApplication::translate("setting", "\345\256\275(9~30)", nullptr));
        label_2->setText(QCoreApplication::translate("setting", "\351\253\230(9~24)", nullptr));
        label_3->setText(QCoreApplication::translate("setting", "\351\233\267\346\225\260(>=1)", nullptr));
        pushButton->setText(QCoreApplication::translate("setting", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
