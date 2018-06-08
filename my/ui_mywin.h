/********************************************************************************
** Form generated from reading ui file 'mywin.ui'
**
** Created: Thu Jun 7 17:18:31 2018
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MYWIN_H
#define UI_MYWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QGroupBox *groupBox_3;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QLabel *label;

    void setupUi(QWidget *Form)
    {
    if (Form->objectName().isEmpty())
        Form->setObjectName(QString::fromUtf8("Form"));
    Form->resize(396, 258);
    groupBox = new QGroupBox(Form);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 50, 111, 121));
    radioButton = new QRadioButton(groupBox);
    radioButton->setObjectName(QString::fromUtf8("radioButton"));
    radioButton->setGeometry(QRect(30, 20, 88, 23));
    radioButton->setChecked(true);
    radioButton_2 = new QRadioButton(groupBox);
    radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
    radioButton_2->setGeometry(QRect(30, 50, 88, 23));
    radioButton_3 = new QRadioButton(groupBox);
    radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
    radioButton_3->setGeometry(QRect(30, 80, 88, 23));
    pushButton = new QPushButton(Form);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(80, 200, 80, 27));
    groupBox_2 = new QGroupBox(Form);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(150, 20, 101, 171));
    radioButton_4 = new QRadioButton(groupBox_2);
    radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
    radioButton_4->setGeometry(QRect(20, 20, 88, 23));
    radioButton_5 = new QRadioButton(groupBox_2);
    radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
    radioButton_5->setGeometry(QRect(20, 50, 88, 23));
    radioButton_6 = new QRadioButton(groupBox_2);
    radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
    radioButton_6->setGeometry(QRect(20, 80, 88, 23));
    radioButton_7 = new QRadioButton(groupBox_2);
    radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
    radioButton_7->setGeometry(QRect(20, 110, 88, 23));
    radioButton_8 = new QRadioButton(groupBox_2);
    radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
    radioButton_8->setGeometry(QRect(20, 140, 88, 23));
    radioButton_8->setChecked(true);
    groupBox_3 = new QGroupBox(Form);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    groupBox_3->setGeometry(QRect(270, 30, 81, 151));
    radioButton_9 = new QRadioButton(groupBox_3);
    radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
    radioButton_9->setGeometry(QRect(20, 30, 88, 23));
    radioButton_10 = new QRadioButton(groupBox_3);
    radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
    radioButton_10->setGeometry(QRect(20, 70, 88, 23));
    radioButton_10->setChecked(true);
    radioButton_11 = new QRadioButton(groupBox_3);
    radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
    radioButton_11->setGeometry(QRect(20, 110, 88, 23));
    label = new QLabel(Form);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(180, 230, 211, 21));
    label->setFrameShape(QFrame::StyledPanel);

    retranslateUi(Form);

    QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
    Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("Form", "wave", 0, QApplication::UnicodeUTF8));
    radioButton->setText(QApplication::translate("Form", "fang", 0, QApplication::UnicodeUTF8));
    radioButton_2->setText(QApplication::translate("Form", "san", 0, QApplication::UnicodeUTF8));
    radioButton_3->setText(QApplication::translate("Form", "zheng", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Form", "ok", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("Form", "f", 0, QApplication::UnicodeUTF8));
    radioButton_4->setText(QApplication::translate("Form", "0.2", 0, QApplication::UnicodeUTF8));
    radioButton_5->setText(QApplication::translate("Form", "0.4", 0, QApplication::UnicodeUTF8));
    radioButton_6->setText(QApplication::translate("Form", "0.6", 0, QApplication::UnicodeUTF8));
    radioButton_7->setText(QApplication::translate("Form", "0.8", 0, QApplication::UnicodeUTF8));
    radioButton_8->setText(QApplication::translate("Form", "1.0", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("Form", "A", 0, QApplication::UnicodeUTF8));
    radioButton_9->setText(QApplication::translate("Form", "1.0", 0, QApplication::UnicodeUTF8));
    radioButton_10->setText(QApplication::translate("Form", "2.0", 0, QApplication::UnicodeUTF8));
    radioButton_11->setText(QApplication::translate("Form", "3.0", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Form", "150410423\346\233\271\345\256\207 150410426\346\235\216\345\255\232\346\230\212", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIN_H
