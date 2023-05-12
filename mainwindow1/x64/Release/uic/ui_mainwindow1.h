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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow1Class
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *win1;
    QTextBrowser *textBrowser;
    QWidget *win2;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *save_image;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_1;
    QWidget *win3;
    QTextBrowser *textBrowser_3;
    QPushButton *save_image_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QFrame *frame_3;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QFrame *frame;
    QPushButton *show_win1;
    QPushButton *show_win2;
    QPushButton *show_win3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainwindow1Class)
    {
        if (mainwindow1Class->objectName().isEmpty())
            mainwindow1Class->setObjectName("mainwindow1Class");
        mainwindow1Class->resize(946, 535);
        mainwindow1Class->setIconSize(QSize(1000, 1000));
        centralWidget = new QWidget(mainwindow1Class);
        centralWidget->setObjectName("centralWidget");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(100, 30, 841, 451));
        QFont font;
        font.setKerning(false);
        stackedWidget->setFont(font);
        stackedWidget->setFrameShape(QFrame::NoFrame);
        win1 = new QWidget();
        win1->setObjectName("win1");
        textBrowser = new QTextBrowser(win1);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 841, 461));
        textBrowser->setAutoFillBackground(true);
        textBrowser->setInputMethodHints(Qt::ImhNone);
        textBrowser->setOpenLinks(true);
        stackedWidget->addWidget(win1);
        win2 = new QWidget();
        win2->setObjectName("win2");
        textBrowser_2 = new QTextBrowser(win2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(0, 0, 871, 451));
        textBrowser_2->setAutoFillBackground(true);
        textBrowser_2->setInputMethodHints(Qt::ImhNone);
        textBrowser_2->setOpenLinks(true);
        pushButton = new QPushButton(win2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 40, 81, 24));
        pushButton_2 = new QPushButton(win2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(750, 130, 81, 24));
        pushButton_3 = new QPushButton(win2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(750, 80, 81, 24));
        save_image = new QPushButton(win2);
        save_image->setObjectName("save_image");
        save_image->setGeometry(QRect(750, 410, 81, 31));
        frame_2 = new QFrame(win2);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 80, 701, 351));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        frame_2->setLineWidth(10);
        frame_2->setMidLineWidth(10);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 321, 321));
        label_1 = new QLabel(frame_2);
        label_1->setObjectName("label_1");
        label_1->setGeometry(QRect(350, 20, 321, 321));
        stackedWidget->addWidget(win2);
        win3 = new QWidget();
        win3->setObjectName("win3");
        textBrowser_3 = new QTextBrowser(win3);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(0, 0, 871, 451));
        textBrowser_3->setAutoFillBackground(true);
        textBrowser_3->setInputMethodHints(Qt::ImhNone);
        textBrowser_3->setOpenLinks(true);
        save_image_2 = new QPushButton(win3);
        save_image_2->setObjectName("save_image_2");
        save_image_2->setGeometry(QRect(740, 370, 81, 31));
        pushButton_8 = new QPushButton(win3);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(740, 250, 81, 24));
        pushButton_7 = new QPushButton(win3);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(740, 200, 81, 21));
        pushButton_4 = new QPushButton(win3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(740, 150, 81, 24));
        frame_3 = new QFrame(win3);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(20, 90, 701, 351));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(10);
        frame_3->setMidLineWidth(10);
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 20, 321, 321));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 20, 321, 321));
        pushButton_5 = new QPushButton(win3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(20, 40, 81, 24));
        stackedWidget->addWidget(win3);
        frame = new QFrame(centralWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 20, 81, 461));
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
        show_win3 = new QPushButton(frame);
        show_win3->setObjectName("show_win3");
        show_win3->setGeometry(QRect(0, 170, 75, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("C:/Users/a9001/Downloads/flat-g0cb2ae7f4_1280.png"), QSize(), QIcon::Normal, QIcon::Off);
        show_win3->setIcon(icon2);
        show_win3->setIconSize(QSize(50, 50));
        mainwindow1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindow1Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 946, 22));
        mainwindow1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainwindow1Class);
        mainToolBar->setObjectName("mainToolBar");
        mainwindow1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainwindow1Class);
        statusBar->setObjectName("statusBar");
        mainwindow1Class->setStatusBar(statusBar);

        retranslateUi(mainwindow1Class);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(mainwindow1Class);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow1Class)
    {
        mainwindow1Class->setWindowTitle(QCoreApplication::translate("mainwindow1Class", "mainwindow1", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("mainwindow1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#0872e0;\">[Home]</span><span style=\" font-size:16pt; font-weight:700; color:#555555;\"> \347\260\241\346\230\223\345\234\226\345\203\217\350\231\225\347\220\206\345\231\250</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; fon"
                        "t-size:10pt; color:#555555;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#555555;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#555555;\">\346\223\215\344\275\234\350\252\252\346\230\216:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#555555;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#555555;\">1.\351\226\213\345\225\237\350\263\207\346\226\231\345\244\276\344\270\255\345\234\226\346\252\224</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#555555;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#555555;\">2.\351\273\236\346\223\212\345\212\237\350\203\275\346\214\211\351\210\225,\351\200\262\350\241\214\345\234\226\345\203\217\350\231\225\347\220\206 (\347\201\260\345\214\226\345\272\246\343\200\201\351\202\212\347\267\243\346\252\242\346\270\254\343\200\201...)</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#555555;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#555555;\">3.\345\217\257\345\204\262\345\255\230\347\267\250\350\274\257\345\276\214\347\232\204\345\234\226\346\252\224</span></p>"
                        "</body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("mainwindow1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#0872e0;\">[\345\210\235\347\264\232\345\212\237\350\203\275]</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("mainwindow1Class", "\351\226\213\345\225\237\345\234\226\346\252\224", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mainwindow1Class", "\351\253\230\346\226\257\346\250\241\347\263\212", nullptr));
        pushButton_3->setText(QCoreApplication::translate("mainwindow1Class", "\347\201\260\351\232\216", nullptr));
        save_image->setText(QCoreApplication::translate("mainwindow1Class", "\345\260\216\345\207\272\345\234\226\346\252\224>", nullptr));
        label->setText(QCoreApplication::translate("mainwindow1Class", "\345\216\237\345\247\213\345\234\226\346\252\224", nullptr));
        label_1->setText(QCoreApplication::translate("mainwindow1Class", "\345\234\226\345\203\217\350\231\225\347\220\206\345\276\214", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("mainwindow1Class", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft JhengHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#0872e0;\">[\351\200\262\351\232\216\345\212\237\350\203\275]</span></p></body></html>", nullptr));
        save_image_2->setText(QCoreApplication::translate("mainwindow1Class", "\345\260\216\345\207\272\345\234\226\346\252\224>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("mainwindow1Class", "\351\234\215\345\244\253\346\211\276\345\234\223", nullptr));
        pushButton_7->setText(QCoreApplication::translate("mainwindow1Class", "\344\272\214\345\200\274\345\214\226", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mainwindow1Class", "\351\202\212\347\267\243\346\252\242\346\270\254", nullptr));
        label_2->setText(QCoreApplication::translate("mainwindow1Class", "\345\216\237\345\247\213\345\234\226\346\252\224", nullptr));
        label_3->setText(QCoreApplication::translate("mainwindow1Class", "\345\234\226\345\203\217\350\231\225\347\220\206\345\276\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("mainwindow1Class", "\351\226\213\345\225\237\345\234\226\346\252\224", nullptr));
        show_win1->setText(QString());
        show_win2->setText(QString());
        show_win3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mainwindow1Class: public Ui_mainwindow1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
