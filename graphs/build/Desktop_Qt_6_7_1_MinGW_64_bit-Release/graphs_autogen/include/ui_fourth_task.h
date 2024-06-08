/********************************************************************************
** Form generated from reading UI file 'fourth_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTH_TASK_H
#define UI_FOURTH_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fourth_task
{
public:
    QTextEdit *textEdit;
    QLabel *label_2;
    QLabel *label;
    QPushButton *send_matrix;
    QPushButton *clear_button;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Fourth_task)
    {
        if (Fourth_task->objectName().isEmpty())
            Fourth_task->setObjectName("Fourth_task");
        Fourth_task->resize(711, 617);
        textEdit = new QTextEdit(Fourth_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 360, 641, 191));
        label_2 = new QLabel(Fourth_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 310, 301, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        label = new QLabel(Fourth_task);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 0, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        send_matrix = new QPushButton(Fourth_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(530, 560, 111, 41));
        clear_button = new QPushButton(Fourth_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(110, 310, 101, 41));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);
        plainTextEdit = new QPlainTextEdit(Fourth_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(240, 30, 231, 141));

        retranslateUi(Fourth_task);

        QMetaObject::connectSlotsByName(Fourth_task);
    } // setupUi

    void retranslateUi(QWidget *Fourth_task)
    {
        Fourth_task->setWindowTitle(QCoreApplication::translate("Fourth_task", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Fourth_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("Fourth_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 BFS", nullptr));
        send_matrix->setText(QCoreApplication::translate("Fourth_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        clear_button->setText(QCoreApplication::translate("Fourth_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fourth_task: public Ui_Fourth_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTH_TASK_H
