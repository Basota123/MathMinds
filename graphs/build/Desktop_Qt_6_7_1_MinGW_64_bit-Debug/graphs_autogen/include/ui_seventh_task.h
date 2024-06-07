/********************************************************************************
** Form generated from reading UI file 'seventh_task.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEVENTH_TASK_H
#define UI_SEVENTH_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seventh_task
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *send_matrix;
    QLabel *label;

    void setupUi(QWidget *Seventh_task)
    {
        if (Seventh_task->objectName().isEmpty())
            Seventh_task->setObjectName("Seventh_task");
        Seventh_task->resize(367, 265);
        plainTextEdit = new QPlainTextEdit(Seventh_task);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(70, 40, 231, 141));
        send_matrix = new QPushButton(Seventh_task);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(190, 190, 111, 31));
        label = new QLabel(Seventh_task);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 10, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(Seventh_task);

        QMetaObject::connectSlotsByName(Seventh_task);
    } // setupUi

    void retranslateUi(QWidget *Seventh_task)
    {
        Seventh_task->setWindowTitle(QCoreApplication::translate("Seventh_task", "Form", nullptr));
        send_matrix->setText(QCoreApplication::translate("Seventh_task", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Seventh_task", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seventh_task: public Ui_Seventh_task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEVENTH_TASK_H
