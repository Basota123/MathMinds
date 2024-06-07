/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit_from_application;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *null_task_button;
    QPushButton *first_task_button;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *fifth_task_button;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QMenu *menuMathMinds;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1338, 734);
        exit_from_application = new QAction(MainWindow);
        exit_from_application->setObjectName("exit_from_application");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 0, 551, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        null_task_button = new QPushButton(centralwidget);
        null_task_button->setObjectName("null_task_button");
        null_task_button->setGeometry(QRect(110, 70, 101, 81));
        first_task_button = new QPushButton(centralwidget);
        first_task_button->setObjectName("first_task_button");
        first_task_button->setGeometry(QRect(240, 70, 101, 81));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 70, 101, 81));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(510, 70, 101, 81));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(640, 70, 101, 81));
        fifth_task_button = new QPushButton(centralwidget);
        fifth_task_button->setObjectName("fifth_task_button");
        fifth_task_button->setGeometry(QRect(760, 70, 101, 81));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(890, 70, 101, 81));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(1020, 70, 101, 81));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(1150, 70, 101, 81));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1338, 21));
        menuMathMinds = new QMenu(menubar);
        menuMathMinds->setObjectName("menuMathMinds");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMathMinds->menuAction());
        menuMathMinds->addAction(exit_from_application);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exit_from_application->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MathMinds - \320\262\320\260\321\210 \320\275\320\265\320\264\320\260\320\266\320\265\320\275\321\213\320\271 \320\277\320\276\320\274\320\276\321\211\320\275\320\270\320\272 \320\262 \321\200\320\265\321\210\320\265\320\275\320\270\320\270 \320\267\320\260\320\264\320\260\321\207", nullptr));
        null_task_button->setText(QCoreApplication::translate("MainWindow", "\320\235\321\203\320\273\320\265\320\262\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        first_task_button->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\202\320\276\321\200\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\321\202\321\214\321\217 \320\227\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\321\202\320\262\320\265\321\200\321\202\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        fifth_task_button->setText(QCoreApplication::translate("MainWindow", "\320\237\321\217\321\202\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\250\320\265\321\201\321\202\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\264\321\214\320\274\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\214\320\274\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        menuMathMinds->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
