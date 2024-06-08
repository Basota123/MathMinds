/********************************************************************************
** Form generated from reading UI file 'prufer_code.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRUFER_CODE_H
#define UI_PRUFER_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prufer_code
{
public:
    QPushButton *send_matrix;
    QPushButton *clear_button;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit;
    QTextEdit *textEdit;
    QLabel *label;

    void setupUi(QWidget *Prufer_code)
    {
        if (Prufer_code->objectName().isEmpty())
            Prufer_code->setObjectName("Prufer_code");
        Prufer_code->resize(697, 612);
        send_matrix = new QPushButton(Prufer_code);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(530, 560, 111, 41));
        clear_button = new QPushButton(Prufer_code);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(110, 310, 121, 41));
        QFont font;
        font.setPointSize(11);
        clear_button->setFont(font);
        label_2 = new QLabel(Prufer_code);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 310, 301, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        plainTextEdit = new QPlainTextEdit(Prufer_code);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(240, 30, 231, 141));
        textEdit = new QTextEdit(Prufer_code);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 360, 641, 191));
        label = new QLabel(Prufer_code);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 0, 231, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);

        retranslateUi(Prufer_code);

        QMetaObject::connectSlotsByName(Prufer_code);
    } // setupUi

    void retranslateUi(QWidget *Prufer_code)
    {
        Prufer_code->setWindowTitle(QCoreApplication::translate("Prufer_code", "Form", nullptr));
        send_matrix->setText(QCoreApplication::translate("Prufer_code", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        clear_button->setText(QCoreApplication::translate("Prufer_code", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Prufer_code", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("Prufer_code", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\201\320\274\320\265\320\266\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prufer_code: public Ui_Prufer_code {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRUFER_CODE_H
