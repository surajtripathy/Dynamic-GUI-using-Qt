/********************************************************************************
** Form generated from reading UI file 'a1.ui'
**
** Created: Tue May 30 19:58:12 2017
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_A1_H
#define UI_A1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_A1
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *A1)
    {
        if (A1->objectName().isEmpty())
            A1->setObjectName(QString::fromUtf8("A1"));
        A1->resize(737, 550);
        centralWidget = new QWidget(A1);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 241, 31));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);\n"
"font: 75 16pt \"Serif\";\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 20, 231, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Serif\";\n"
"color: rgb(0, 0, 0);"));
        A1->setCentralWidget(centralWidget);

        retranslateUi(A1);

        QMetaObject::connectSlotsByName(A1);
    } // setupUi

    void retranslateUi(QMainWindow *A1)
    {
        A1->setWindowTitle(QApplication::translate("A1", "A1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("A1", "         TARGET  1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("A1", "        TARGET 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class A1: public Ui_A1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_A1_H
