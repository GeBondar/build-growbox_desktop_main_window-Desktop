/********************************************************************************
** Form generated from reading UI file 'info_link.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_LINK_H
#define UI_INFO_LINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_info_link
{
public:
    QPushButton *pushButton;
    QLabel *label_pic;

    void setupUi(QDialog *info_link)
    {
        if (info_link->objectName().isEmpty())
            info_link->setObjectName(QString::fromUtf8("info_link"));
        info_link->resize(400, 231);
        pushButton = new QPushButton(info_link);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 191, 61));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        label_pic = new QLabel(info_link);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        label_pic->setGeometry(QRect(210, 50, 181, 171));

        retranslateUi(info_link);

        QMetaObject::connectSlotsByName(info_link);
    } // setupUi

    void retranslateUi(QDialog *info_link)
    {
        info_link->setWindowTitle(QCoreApplication::translate("info_link", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("info_link", "\320\276\321\202\320\272\321\200\321\213\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202\320\260\321\206\320\270\321\216", nullptr));
        label_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class info_link: public Ui_info_link {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_LINK_H
