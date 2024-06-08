/********************************************************************************
** Form generated from reading UI file 'second_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_TASK_H
#define UI_SECOND_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Second_task
{
public:
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *send_matrix;
    QPushButton *clear_button;

    void setupUi(QWidget *Second_task)
    {
        if (Second_task->objectName().isEmpty())
            Second_task->setObjectName("Second_task");
        Second_task->resize(674, 629);
        textEdit = new QTextEdit(Second_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 360, 641, 191));
        plainTextEdit = new QPlainTextEdit(Second_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(220, 30, 231, 141));
        label = new QLabel(Second_task);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 0, 101, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(Second_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 310, 301, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        send_matrix = new QPushButton(Second_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(510, 570, 111, 41));
        clear_button = new QPushButton(Second_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(90, 313, 91, 41));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);

        retranslateUi(Second_task);

        QMetaObject::connectSlotsByName(Second_task);
    } // setupUi

    void retranslateUi(QWidget *Second_task)
    {
        Second_task->setWindowTitle(QCoreApplication::translate("Second_task", "Form", nullptr));
        label->setText(QCoreApplication::translate("Second_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 DFS", nullptr));
        label_2->setText(QCoreApplication::translate("Second_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        send_matrix->setText(QCoreApplication::translate("Second_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        clear_button->setText(QCoreApplication::translate("Second_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Second_task: public Ui_Second_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_TASK_H
