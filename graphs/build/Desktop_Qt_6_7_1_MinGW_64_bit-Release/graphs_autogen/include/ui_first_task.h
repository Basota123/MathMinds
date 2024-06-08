/********************************************************************************
** Form generated from reading UI file 'first_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_TASK_H
#define UI_FIRST_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_First_task
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *clear_button;
    QPlainTextEdit *plainTextEdit;
    QPushButton *send_matrix;
    QTextEdit *textEdit;

    void setupUi(QWidget *First_task)
    {
        if (First_task->objectName().isEmpty())
            First_task->setObjectName("First_task");
        First_task->resize(708, 633);
        label_2 = new QLabel(First_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 310, 301, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label = new QLabel(First_task);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 0, 41, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        clear_button = new QPushButton(First_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(110, 313, 91, 41));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);
        plainTextEdit = new QPlainTextEdit(First_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(240, 30, 231, 141));
        send_matrix = new QPushButton(First_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(530, 570, 111, 41));
        textEdit = new QTextEdit(First_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 360, 641, 191));

        retranslateUi(First_task);

        QMetaObject::connectSlotsByName(First_task);
    } // setupUi

    void retranslateUi(QWidget *First_task)
    {
        First_task->setWindowTitle(QCoreApplication::translate("First_task", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("First_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("First_task", "DFS", nullptr));
        clear_button->setText(QCoreApplication::translate("First_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        send_matrix->setText(QCoreApplication::translate("First_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class First_task: public Ui_First_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_TASK_H
