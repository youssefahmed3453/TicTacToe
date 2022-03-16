/********************************************************************************
** Form generated from reading UI file 'tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE_H
#define UI_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_0;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *label;
    QLabel *player;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName(QString::fromUtf8("TicTacToe"));
        TicTacToe->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TicTacToe->sizePolicy().hasHeightForWidth());
        TicTacToe->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(TicTacToe);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 30, 655, 391));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(52);
        pushButton_5->setFont(font);
        pushButton_5->setFlat(true);

        gridLayout->addWidget(pushButton_5, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setFont(font);
        pushButton_1->setFlat(true);

        gridLayout->addWidget(pushButton_1, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setFont(font);
        pushButton_8->setFlat(true);

        gridLayout->addWidget(pushButton_8, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font);
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setFont(font);
        pushButton_7->setFlat(true);

        gridLayout->addWidget(pushButton_7, 2, 1, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setFont(font);
        pushButton_0->setFlat(true);

        gridLayout->addWidget(pushButton_0, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font);
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font);
        pushButton_6->setFlat(true);

        gridLayout->addWidget(pushButton_6, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 470, 81, 41));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        player = new QLabel(centralwidget);
        player->setObjectName(QString::fromUtf8("player"));
        player->setGeometry(QRect(140, 460, 121, 41));
        player->setFont(font1);
        TicTacToe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TicTacToe);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        TicTacToe->setMenuBar(menubar);
        statusbar = new QStatusBar(TicTacToe);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TicTacToe->setStatusBar(statusbar);

        retranslateUi(TicTacToe);

        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QCoreApplication::translate("TicTacToe", "TicTacToe", nullptr));
        pushButton_5->setText(QString());
        pushButton_1->setText(QString());
        pushButton_4->setText(QString());
        pushButton_8->setText(QString());
        pushButton_2->setText(QString());
        pushButton_7->setText(QString());
        pushButton_0->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        label->setText(QCoreApplication::translate("TicTacToe", "Turn", nullptr));
        player->setText(QCoreApplication::translate("TicTacToe", "Player1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_H
