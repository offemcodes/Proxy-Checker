/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClear;
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QListWidget *listWidget;
    QLabel *label;
    QSpinBox *spinBox;
    QWidget *Tab2;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(855, 608);
        MainWindow->setAutoFillBackground(true);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName("actionClear");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(710, 470, 80, 26));
        progressBar = new QProgressBar(tab);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(10, 470, 691, 26));
        progressBar->setValue(0);
        listWidget = new QListWidget(tab);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 0, 256, 451));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 10, 66, 18));
        spinBox = new QSpinBox(tab);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(690, 10, 45, 27));
        spinBox->setMaximum(200);
        tabWidget->addTab(tab, QString());
        Tab2 = new QWidget();
        Tab2->setObjectName("Tab2");
        tableWidget = new QTableWidget(Tab2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 841, 511));
        tableWidget->setAutoFillBackground(true);
        tableWidget->setColumnCount(3);
        tabWidget->addTab(Tab2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(-5, 1, 841, 511));
        textBrowser->setAutoFillBackground(true);
        tabWidget->addTab(tab_2, QString());

        formLayout->setWidget(0, QFormLayout::SpanningRole, tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 855, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClear);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Proxy Check V1.0.1", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Check", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Threads:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Check Proxy", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Proxy", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Tab2), QCoreApplication::translate("MainWindow", "Proxy Table", nullptr));
        textBrowser->setPlaceholderText(QCoreApplication::translate("MainWindow", "If you would like to donate to this project to allow me to continue to develop, maintain, and implement user suggestions. You may do so buy donating to the developers wallet XMR Address:42Vz7kMVxDEapCwUg8xDUrCdG6CaiL41m8CVcHo8wG2FMcyxXERxtsHSQvtwx3coHeZkrUHpq2uovigaPVnByRL9Aw2GrxR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Donate", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
