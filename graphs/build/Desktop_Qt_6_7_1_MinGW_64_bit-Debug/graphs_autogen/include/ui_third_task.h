/********************************************************************************
** Form generated from reading UI file 'third_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRD_TASK_H
#define UI_THIRD_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Third_task
{
public:
    QPushButton *send_matrix;
    QPushButton *clear_button;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;

    void setupUi(QWidget *Third_task)
    {
        if (Third_task->objectName().isEmpty())
            Third_task->setObjectName("Third_task");
        Third_task->resize(685, 641);
        send_matrix = new QPushButton(Third_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(520, 570, 111, 41));
        clear_button = new QPushButton(Third_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(100, 313, 91, 41));
        QFont font;
        font.setPointSize(11);
        clear_button->setFont(font);
        label = new QLabel(Third_task);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 0, 41, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(Third_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 310, 301, 41));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);
        plainTextEdit = new QPlainTextEdit(Third_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(230, 30, 231, 141));
        textEdit = new QTextEdit(Third_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 360, 641, 191));

        retranslateUi(Third_task);

        QMetaObject::connectSlotsByName(Third_task);
    } // setupUi

    void retranslateUi(QWidget *Third_task)
    {
        Third_task->setWindowTitle(QCoreApplication::translate("Third_task", "Form", nullptr));
        send_matrix->setText(QCoreApplication::translate("Third_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        clear_button->setText(QCoreApplication::translate("Third_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Third_task", "BFS", nullptr));
        label_2->setText(QCoreApplication::translate("Third_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Third_task: public Ui_Third_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRD_TASK_H
