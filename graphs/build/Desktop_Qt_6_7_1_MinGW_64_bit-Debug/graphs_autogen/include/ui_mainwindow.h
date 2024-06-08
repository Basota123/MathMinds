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
    QPushButton *second_task_button;
    QPushButton *fourth_task_button;
    QPushButton *fifth_task_button;
    QPushButton *sixth_task_button;
    QPushButton *seventh_task_button;
    QPushButton *first_task_button;
    QPushButton *third_task_button;
    QPushButton *eighth_task_button;
    QPushButton *prufer_code_button;
    QPushButton *prufer_decode_button;
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
        label->setGeometry(QRect(390, 0, 551, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        null_task_button = new QPushButton(centralwidget);
        null_task_button->setObjectName("null_task_button");
        null_task_button->setGeometry(QRect(410, 50, 151, 111));
        second_task_button = new QPushButton(centralwidget);
        second_task_button->setObjectName("second_task_button");
        second_task_button->setGeometry(QRect(770, 50, 151, 111));
        fourth_task_button = new QPushButton(centralwidget);
        fourth_task_button->setObjectName("fourth_task_button");
        fourth_task_button->setGeometry(QRect(590, 180, 151, 111));
        fifth_task_button = new QPushButton(centralwidget);
        fifth_task_button->setObjectName("fifth_task_button");
        fifth_task_button->setGeometry(QRect(770, 180, 151, 111));
        sixth_task_button = new QPushButton(centralwidget);
        sixth_task_button->setObjectName("sixth_task_button");
        sixth_task_button->setGeometry(QRect(410, 310, 151, 111));
        seventh_task_button = new QPushButton(centralwidget);
        seventh_task_button->setObjectName("seventh_task_button");
        seventh_task_button->setGeometry(QRect(590, 310, 151, 111));
        first_task_button = new QPushButton(centralwidget);
        first_task_button->setObjectName("first_task_button");
        first_task_button->setGeometry(QRect(590, 50, 151, 111));
        third_task_button = new QPushButton(centralwidget);
        third_task_button->setObjectName("third_task_button");
        third_task_button->setGeometry(QRect(410, 180, 151, 111));
        eighth_task_button = new QPushButton(centralwidget);
        eighth_task_button->setObjectName("eighth_task_button");
        eighth_task_button->setGeometry(QRect(770, 310, 151, 111));
        prufer_code_button = new QPushButton(centralwidget);
        prufer_code_button->setObjectName("prufer_code_button");
        prufer_code_button->setGeometry(QRect(410, 440, 151, 111));
        prufer_decode_button = new QPushButton(centralwidget);
        prufer_decode_button->setObjectName("prufer_decode_button");
        prufer_decode_button->setGeometry(QRect(590, 440, 151, 111));
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
        label->setText(QCoreApplication::translate("MainWindow", "MathMinds - \320\262\320\260\321\210 \320\275\320\260\320\264\321\221\320\266\320\265\320\275\321\213\320\271 \320\277\320\276\320\274\320\276\321\211\320\275\320\270\320\272 \320\262 \321\200\320\265\321\210\320\265\320\275\320\270\320\270 \320\267\320\260\320\264\320\260\321\207", nullptr));
        null_task_button->setText(QCoreApplication::translate("MainWindow", "\320\235\321\203\320\273\320\265\320\262\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        second_task_button->setText(QCoreApplication::translate("MainWindow", "is DFS?", nullptr));
        fourth_task_button->setText(QCoreApplication::translate("MainWindow", "is BFS?", nullptr));
        fifth_task_button->setText(QCoreApplication::translate("MainWindow", "\320\247\320\232\320\241", nullptr));
        sixth_task_button->setText(QCoreApplication::translate("MainWindow", "\320\247\320\232\320\241?", nullptr));
        seventh_task_button->setText(QCoreApplication::translate("MainWindow", "\320\234\320\236\320\224", nullptr));
        first_task_button->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        third_task_button->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        eighth_task_button->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\321\214\320\274\320\260\321\217 \320\267\320\260\320\264\320\260\321\207\320\260", nullptr));
        prufer_code_button->setText(QCoreApplication::translate("MainWindow", "PruferCode", nullptr));
        prufer_decode_button->setText(QCoreApplication::translate("MainWindow", "PruferCode", nullptr));
        menuMathMinds->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
