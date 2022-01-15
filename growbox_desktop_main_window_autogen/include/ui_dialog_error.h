/********************************************************************************
** Form generated from reading UI file 'dialog_error.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ERROR_H
#define UI_DIALOG_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_error
{
public:
    QLabel *label;
    QLabel *label_pic;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog_error)
    {
        if (Dialog_error->objectName().isEmpty())
            Dialog_error->setObjectName(QString::fromUtf8("Dialog_error"));
        Dialog_error->resize(400, 300);
        label = new QLabel(Dialog_error);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 240, 111, 31));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label_pic = new QLabel(Dialog_error);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(30, 30, 341, 191));
        pushButton = new QPushButton(Dialog_error);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 240, 171, 31));
        pushButton->setFont(font);

        retranslateUi(Dialog_error);

        QMetaObject::connectSlotsByName(Dialog_error);
    } // setupUi

    void retranslateUi(QDialog *Dialog_error)
    {
        Dialog_error->setWindowTitle(QCoreApplication::translate("Dialog_error", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_error", "ERROR 404", nullptr));
        label_pic->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog_error", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_error: public Ui_Dialog_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ERROR_H
