/********************************************************************************
** Form generated from reading UI file 'child.ui'
**
** Created: Tue May 30 19:58:12 2017
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILD_H
#define UI_CHILD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Child
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Child)
    {
        if (Child->objectName().isEmpty())
            Child->setObjectName(QString::fromUtf8("Child"));
        Child->resize(348, 495);
        pushButton = new QPushButton(Child);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 460, 107, 27));
        groupBox = new QGroupBox(Child);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, -10, 311, 71));
        pushButton_2 = new QPushButton(Child);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 460, 101, 27));

        retranslateUi(Child);

        QMetaObject::connectSlotsByName(Child);
    } // setupUi

    void retranslateUi(QWidget *Child)
    {
        Child->setWindowTitle(QApplication::translate("Child", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Child", "Save Settings", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("Child", "Apply Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Child: public Ui_Child {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILD_H
