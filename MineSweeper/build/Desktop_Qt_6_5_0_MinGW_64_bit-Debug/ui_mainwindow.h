/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_primary;
    QAction *action_medium;
    QAction *action_advanced;
    QAction *actionuser_defined;
    QAction *action_about;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *lcdNumber_mine;
    QGraphicsView *graphicsView_image;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumber_flag;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(279, 389);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        action_primary = new QAction(MainWindow);
        action_primary->setObjectName("action_primary");
        action_medium = new QAction(MainWindow);
        action_medium->setObjectName("action_medium");
        action_advanced = new QAction(MainWindow);
        action_advanced->setObjectName("action_advanced");
        actionuser_defined = new QAction(MainWindow);
        actionuser_defined->setObjectName("actionuser_defined");
        action_about = new QAction(MainWindow);
        action_about->setObjectName("action_about");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        lcdNumber_mine = new QLCDNumber(centralWidget);
        lcdNumber_mine->setObjectName("lcdNumber_mine");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber_mine->sizePolicy().hasHeightForWidth());
        lcdNumber_mine->setSizePolicy(sizePolicy);
        lcdNumber_mine->setMinimumSize(QSize(0, 30));
        lcdNumber_mine->setMaximumSize(QSize(16777215, 30));

        verticalLayout_2->addWidget(lcdNumber_mine);


        horizontalLayout_2->addLayout(verticalLayout_2);

        graphicsView_image = new QGraphicsView(centralWidget);
        graphicsView_image->setObjectName("graphicsView_image");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView_image->sizePolicy().hasHeightForWidth());
        graphicsView_image->setSizePolicy(sizePolicy1);
        graphicsView_image->setMinimumSize(QSize(31, 31));
        graphicsView_image->setMaximumSize(QSize(31, 31));

        horizontalLayout_2->addWidget(graphicsView_image);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lcdNumber_flag = new QLCDNumber(centralWidget);
        lcdNumber_flag->setObjectName("lcdNumber_flag");
        sizePolicy.setHeightForWidth(lcdNumber_flag->sizePolicy().hasHeightForWidth());
        lcdNumber_flag->setSizePolicy(sizePolicy);
        lcdNumber_flag->setMinimumSize(QSize(0, 30));
        lcdNumber_flag->setMaximumSize(QSize(16777215, 30));

        verticalLayout_3->addWidget(lcdNumber_flag);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 279, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_help = new QMenu(menuBar);
        menu_help->setObjectName("menu_help");
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_help->menuAction());
        menu->addAction(action);
        menu->addSeparator();
        menu->addAction(action_primary);
        menu->addAction(action_medium);
        menu->addAction(action_advanced);
        menu->addAction(actionuser_defined);
        menu_help->addAction(action_about);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
        action_primary->setText(QCoreApplication::translate("MainWindow", "\345\210\235\347\272\247", nullptr));
        action_medium->setText(QCoreApplication::translate("MainWindow", "\344\270\255\347\272\247", nullptr));
        action_advanced->setText(QCoreApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
        actionuser_defined->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\351\232\276\345\272\246", nullptr));
        action_about->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
        menu_help->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
