/********************************************************************************
** Form generated from reading UI file 'capwindow.ui'
**
** Created: Mon Mar 1 23:35:02 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPWINDOW_H
#define UI_CAPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtGui/QSystemTrayIcon>


QT_BEGIN_NAMESPACE

class Ui_CapWindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelProv;
    QLineEdit *lineProv;
    QLabel *labelLocal;
    QLineEdit *lineLocal;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelComune;
    QLineEdit *lineComune;
    QPushButton *buttonCerca;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonExit;
    QLabel *labelCap;
    QLineEdit *lineCap;
    QLabel *labelTitle;

    void setupUi(QDialog *CapWindow)
    {
        if (CapWindow->objectName().isEmpty())
            CapWindow->setObjectName(QString::fromUtf8("CapWindow"));
        CapWindow->resize(534, 203);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../cap.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CapWindow->setWindowIcon(icon);
        layoutWidget = new QWidget(CapWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 518, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        labelProv = new QLabel(layoutWidget);
        labelProv->setObjectName(QString::fromUtf8("labelProv"));

        horizontalLayout->addWidget(labelProv);

        lineProv = new QLineEdit(layoutWidget);
        lineProv->setObjectName(QString::fromUtf8("lineProv"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineProv->sizePolicy().hasHeightForWidth());
        lineProv->setSizePolicy(sizePolicy);
        lineProv->setMinimumSize(QSize(0, 25));
        lineProv->setMaximumSize(QSize(51, 16777215));
        lineProv->setMaxLength(2);

        horizontalLayout->addWidget(lineProv);

        labelLocal = new QLabel(layoutWidget);
        labelLocal->setObjectName(QString::fromUtf8("labelLocal"));

        horizontalLayout->addWidget(labelLocal);

        lineLocal = new QLineEdit(layoutWidget);
        lineLocal->setObjectName(QString::fromUtf8("lineLocal"));
        sizePolicy.setHeightForWidth(lineLocal->sizePolicy().hasHeightForWidth());
        lineLocal->setSizePolicy(sizePolicy);
        lineLocal->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(lineLocal);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelComune = new QLabel(layoutWidget);
        labelComune->setObjectName(QString::fromUtf8("labelComune"));

        horizontalLayout_2->addWidget(labelComune);

        lineComune = new QLineEdit(layoutWidget);
        lineComune->setObjectName(QString::fromUtf8("lineComune"));
        sizePolicy.setHeightForWidth(lineComune->sizePolicy().hasHeightForWidth());
        lineComune->setSizePolicy(sizePolicy);
        lineComune->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(lineComune);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        buttonCerca = new QPushButton(layoutWidget);
        buttonCerca->setObjectName(QString::fromUtf8("buttonCerca"));
        buttonCerca->setMinimumSize(QSize(200, 23));

        horizontalLayout_4->addWidget(buttonCerca);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        buttonExit = new QPushButton(layoutWidget);
        buttonExit->setObjectName(QString::fromUtf8("buttonExit"));

        horizontalLayout_3->addWidget(buttonExit);

        labelCap = new QLabel(layoutWidget);
        labelCap->setObjectName(QString::fromUtf8("labelCap"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCap->sizePolicy().hasHeightForWidth());
        labelCap->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(labelCap);

        lineCap = new QLineEdit(layoutWidget);
        lineCap->setObjectName(QString::fromUtf8("lineCap"));
        lineCap->setMinimumSize(QSize(0, 25));
        lineCap->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setBold(true);
        font.setWeight(75);
        lineCap->setFont(font);

        horizontalLayout_3->addWidget(lineCap);


        verticalLayout->addLayout(horizontalLayout_3);

        labelTitle = new QLabel(CapWindow);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(20, 0, 491, 41));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        labelTitle->setFont(font1);
        labelTitle->setAlignment(Qt::AlignCenter);


        retranslateUi(CapWindow);

        QMetaObject::connectSlotsByName(CapWindow);
    } // setupUi

    void retranslateUi(QDialog *CapWindow)
    {
        CapWindow->setWindowTitle(QApplication::translate("CapWindow", "CapWindow", 0, QApplication::UnicodeUTF8));
        labelProv->setText(QApplication::translate("CapWindow", "Provincia:", 0, QApplication::UnicodeUTF8));
        labelLocal->setText(QApplication::translate("CapWindow", "Localit\303\240:", 0, QApplication::UnicodeUTF8));
        labelComune->setText(QApplication::translate("CapWindow", "Comune: ", 0, QApplication::UnicodeUTF8));
        buttonCerca->setText(QApplication::translate("CapWindow", "Cerca", 0, QApplication::UnicodeUTF8));
        buttonExit->setText(QApplication::translate("CapWindow", "Esci", 0, QApplication::UnicodeUTF8));
        labelCap->setText(QApplication::translate("CapWindow", "                                                                   CAP:", 0, QApplication::UnicodeUTF8));
        labelTitle->setText(QApplication::translate("CapWindow", "Reve Cap Search", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CapWindow: public Ui_CapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPWINDOW_H
