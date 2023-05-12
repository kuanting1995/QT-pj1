/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow1Class
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *win1;
    QWidget *win2;
    QFrame *frame;
    QPushButton *show_win1;
    QPushButton *show_win2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindow1Class)
    {
        if (mainwindow1Class->objectName().isEmpty())
            mainwindow1Class->setObjectName("mainwindow1Class");
        mainwindow1Class->resize(683, 483);
        mainwindow1Class->setIconSize(QSize(1000, 1000));
        centralWidget = new QWidget(mainwindow1Class);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(130, 30, 531, 391));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        win1 = new QWidget();
        win1->setObjectName("win1");
        stackedWidget->addWidget(win1);
        win2 = new QWidget();
        win2->setObjectName("win2");
        stackedWidget->addWidget(win2);
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 81, 411));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(3);
        show_win1 = new QPushButton(frame);
        show_win1->setObjectName("show_win1");
        show_win1->setGeometry(QRect(0, 10, 75, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/a9001/Downloads/icon-g6be787465_1280.png"), QSize(), QIcon::Normal, QIcon::Off);
        show_win1->setIcon(icon);
        show_win1->setIconSize(QSize(90, 90));
        show_win2 = new QPushButton(frame);
        show_win2->setObjectName("show_win2");
        show_win2->setGeometry(QRect(0, 90, 75, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/a9001/Downloads/setting_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        show_win2->setIcon(icon1);
        show_win2->setIconSize(QSize(90, 90));
        mainwindow1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindow1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 683, 22));
        mainwindow1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindow1Class);
        mainToolBar->setObjectName("mainToolBar");
        mainwindow1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindow1Class);
        statusBar->setObjectName("statusBar");
        mainwindow1Class->setStatusBar(statusBar);

        retranslateUi(mainwindow1Class);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainwindow1Class);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow1Class)
    {
        mainwindow1Class->setWindowTitle(QCoreApplication::translate("mainwindow1Class", "mainwindow1", nullptr));
        show_win1->setText(QString());
        show_win2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainwindow1Class: public Ui_mainwindow1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
