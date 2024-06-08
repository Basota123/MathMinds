/********************************************************************************
** Form generated from reading UI file 'fifth_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTH_TASK_H
#define UI_FIFTH_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fifth_task
{
public:
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QPushButton *clear_button;
    QLabel *label;
    QPushButton *send_matrix;
    QTextEdit *textEdit;

    void setupUi(QWidget *Fifth_task)
    {
        if (Fifth_task->objectName().isEmpty())
            Fifth_task->setObjectName("Fifth_task");
        Fifth_task->resize(696, 612);
        plainTextEdit = new QPlainTextEdit(Fifth_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(240, 30, 231, 141));
        label_2 = new QLabel(Fifth_task);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 310, 301, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        clear_button = new QPushButton(Fifth_task);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(110, 310, 101, 41));
        QFont font1;
        font1.setPointSize(11);
        clear_button->setFont(font1);
        label = new QLabel(Fifth_task);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 0, 231, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);
        send_matrix = new QPushButton(Fifth_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(530, 560, 111, 41));
        textEdit = new QTextEdit(Fifth_task);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 360, 641, 191));

        retranslateUi(Fifth_task);

        QMetaObject::connectSlotsByName(Fifth_task);
    } // setupUi

    void retranslateUi(QWidget *Fifth_task)
    {
        Fifth_task->setWindowTitle(QCoreApplication::translate("Fifth_task", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Fifth_task", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        clear_button->setText(QCoreApplication::translate("Fifth_task", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Fifth_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
        send_matrix->setText(QCoreApplication::translate("Fifth_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fifth_task: public Ui_Fifth_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTH_TASK_H
