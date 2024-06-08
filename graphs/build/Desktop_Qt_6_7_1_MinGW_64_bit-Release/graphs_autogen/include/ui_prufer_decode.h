/********************************************************************************
** Form generated from reading UI file 'prufer_decode.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRUFER_DECODE_H
#define UI_PRUFER_DECODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Prufer_decode
{
public:
    QPushButton *send_matrix;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *clear_button;

    void setupUi(QWidget *Prufer_decode)
    {
        if (Prufer_decode->objectName().isEmpty())
            Prufer_decode->setObjectName("Prufer_decode");
        Prufer_decode->resize(662, 617);
        send_matrix = new QPushButton(Prufer_decode);
        send_matrix->setObjectName("send_matrix");
        send_matrix->setGeometry(QRect(510, 560, 111, 41));
        label = new QLabel(Prufer_decode);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 0, 231, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        plainTextEdit = new QPlainTextEdit(Prufer_decode);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(220, 30, 231, 141));
        label_2 = new QLabel(Prufer_decode);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 310, 301, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        textEdit = new QTextEdit(Prufer_decode);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 360, 641, 191));
        clear_button = new QPushButton(Prufer_decode);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(90, 310, 121, 41));
        QFont font2;
        font2.setPointSize(11);
        clear_button->setFont(font2);

        retranslateUi(Prufer_decode);

        QMetaObject::connectSlotsByName(Prufer_decode);
    } // setupUi

    void retranslateUi(QWidget *Prufer_decode)
    {
        Prufer_decode->setWindowTitle(QCoreApplication::translate("Prufer_decode", "Form", nullptr));
        send_matrix->setText(QCoreApplication::translate("Prufer_decode", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Prufer_decode", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\264 \320\237\321\200\321\216\321\204\320\265\321\200\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Prufer_decode", "\320\236\321\202\320\262\320\265\321\202", nullptr));
        clear_button->setText(QCoreApplication::translate("Prufer_decode", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Prufer_decode: public Ui_Prufer_decode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRUFER_DECODE_H
