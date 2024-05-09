/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.2.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralwidget;
    QStackedWidget *views;
    QWidget *ahomepage;
    QWidget *userstoday;
    QLabel *label_7;
    QLabel *homeTotalUsers;
    QWidget *totalsales;
    QLabel *label_9;
    QLabel *homeTotalOrders;
    QWidget *totalorders;
    QLabel *label_11;
    QLabel *homeTotalSales;
    QWidget *namerollno;
    QLabel *homeLasUserName;
    QLabel *homeLasUserRollno;
    QLabel *homeLasUserPayement;
    QLabel *labelpic;
    QLabel *homeLasUserPicture;
    QLabel *homeLasUserOrderDateTime;
    QTableWidget *table1;
    QWidget *borderspage;
    QTableWidget *ordersViewAllOrdersTable;
    QLabel *label;
    QLabel *label_5;
    QPushButton *ordersViewAddNewButton;
    QLabel *label_12;
    QLabel *label_15;
    QWidget *cfoodpage;
    QPushButton *FoodViewUpdateFoodButton;
    QPushButton *FoodViewAddNewFoodButton;
    QPushButton *FoodViewRemoveFoodButton;
    QTableView *foodViewFoodItemsTable;
    QLabel *label_22;
    QWidget *duserpage;
    QPushButton *usersViewAddNewUserButton;
    QPushButton *usersViewRemoveUserButton;
    QPushButton *updateUserButton;
    QTableView *usersViewUsersTable;
    QLabel *label_23;
    QWidget *eloanpage;
    QTableWidget *loantable2;
    QTableWidget *loantable1;
    QLabel *label_17;
    QWidget *fsettingpage;
    QWidget *settingsUserEditButton;
    QLabel *homeLasUserName_2;
    QLabel *homeLasUserPicture_2;
    QLabel *label_6;
    QWidget *settingsLogoutButton;
    QLabel *homeLasUserName_4;
    QLabel *homeLasUserPicture_4;
    QLabel *label_10;
    QWidget *settingsButton1;
    QLabel *homeLasUserName_6;
    QLabel *homeLasUserPicture_6;
    QLabel *label_13;
    QWidget *settingsButton3;
    QLabel *homeLasUserName_7;
    QLabel *homeLasUserPicture_7;
    QLabel *label_14;
    QWidget *settingsButton2;
    QLabel *homeLasUserName_8;
    QLabel *homeLasUserPicture_8;
    QLabel *label_16;
    QLabel *label_8;
    QWidget *gaboutpage;
    QLabel *logo_2;
    QWidget *settingsButton1_2;
    QLabel *homeLasUserName_11;
    QLabel *label_24;
    QWidget *settingsButton3_2;
    QLabel *homeLasUserName_10;
    QLabel *label_26;
    QWidget *settingsButton2_2;
    QLabel *homeLasUserName_9;
    QLabel *label_25;
    QLabel *homeLasUserName_12;
    QLabel *homeLasUserName_13;
    QLabel *homeLasUserName_14;
    QWidget *huser;
    QComboBox *empDept;
    QLabel *id_12;
    QPushButton *pushButton_5;
    QLabel *label_18;
    QPushButton *userCancelButton;
    QLabel *label_19;
    QPushButton *pushButton_2;
    QLabel *id_4;
    QLabel *id_2;
    QLabel *id;
    QLabel *id_5;
    QComboBox *empGender;
    QLabel *id_6;
    QLineEdit *empFather;
    QLineEdit *empPhone;
    QLineEdit *empEmail;
    QLineEdit *empName;
    QLabel *id_7;
    QLineEdit *empPhone_2;
    QLineEdit *empID_2;
    QLabel *id_10;
    QLabel *label_20;
    QLineEdit *empID_3;
    QLabel *id_11;
    QLineEdit *empID_4;
    QLabel *id_13;
    QPushButton *ProfilePictureButton;
    QLabel *userprofilepctureview;
    QLabel *id_14;
    QComboBox *empDept_2;
    QWidget *iFoods;
    QLabel *label_21;
    QPushButton *foodItemPicture;
    QLabel *id_8;
    QLabel *id_9;
    QLabel *userprofilepctureview_2;
    QPushButton *foodAddNewSubmitButton;
    QLineEdit *newFoodItemSize;
    QPushButton *foodAddNewCancelButton;
    QLineEdit *newFoodItemName;
    QLabel *id_15;
    QLineEdit *newFoodItemPrice;
    QLabel *id_16;
    QLineEdit *newFoodItemQuantity;
    QWidget *jAddNewOrder;
    QLabel *id_33;
    QLineEdit *newOrderStudentCnic;
    QLabel *label_46;
    QLabel *userprofilepctureview_5;
    QLabel *id_34;
    QLineEdit *newOrderItemName;
    QLabel *newOrderStudentName;
    QListView *newOrderItemsListView;
    QPushButton *newOrderCancel;
    QPushButton *newOrdersubmit;
    QTableWidget *newOrderFinalItemstableWidget;
    QLabel *newOrderStudentName_2;
    QLabel *newOrderTotalPrice;
    QWidget *widget;
    QPushButton *HomeButton;
    QPushButton *OrdersButton;
    QPushButton *FoodButton;
    QPushButton *UserButton;
    QPushButton *SettingsButton;
    QLabel *logo;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *aboutbutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(1008, 742);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Home->sizePolicy().hasHeightForWidth());
        Home->setSizePolicy(sizePolicy);
        Home->setMinimumSize(QSize(1008, 742));
        Home->setMaximumSize(QSize(1008, 742));
        Home->setBaseSize(QSize(1008, 742));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        views = new QStackedWidget(centralwidget);
        views->setObjectName(QString::fromUtf8("views"));
        views->setEnabled(true);
        views->setGeometry(QRect(230, 0, 991, 721));
        sizePolicy1.setHeightForWidth(views->sizePolicy().hasHeightForWidth());
        views->setSizePolicy(sizePolicy1);
        views->setMaximumSize(QSize(16777215, 16777215));
        views->setSizeIncrement(QSize(17, 0));
        views->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(0, 0, 0);\n"
"background-color: rgb(61, 56, 70);\n"
" \n"
""));
        views->setFrameShape(QFrame::StyledPanel);
        views->setFrameShadow(QFrame::Raised);
        ahomepage = new QWidget();
        ahomepage->setObjectName(QString::fromUtf8("ahomepage"));
        userstoday = new QWidget(ahomepage);
        userstoday->setObjectName(QString::fromUtf8("userstoday"));
        userstoday->setGeometry(QRect(40, 20, 211, 131));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(true);
        userstoday->setFont(font);
        userstoday->setStyleSheet(QString::fromUtf8("#userstoday{\n"
"   background-color: #D9D9D9;\n"
"	border-radius: 12px;\n"
"	color:white;	\n"
"}"));
        label_7 = new QLabel(userstoday);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 91, 21));
        label_7->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"color: rgb(0, 0, 0);"));
        homeTotalUsers = new QLabel(userstoday);
        homeTotalUsers->setObjectName(QString::fromUtf8("homeTotalUsers"));
        homeTotalUsers->setGeometry(QRect(30, 60, 151, 41));
        QFont font1;
        font1.setPointSize(28);
        font1.setBold(true);
        homeTotalUsers->setFont(font1);
        homeTotalUsers->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"color: rgb(0, 0, 0);\n"
""));
        totalsales = new QWidget(ahomepage);
        totalsales->setObjectName(QString::fromUtf8("totalsales"));
        totalsales->setGeometry(QRect(290, 20, 211, 131));
        totalsales->setFont(font);
        totalsales->setStyleSheet(QString::fromUtf8("#totalsales{\n"
"  background-color: #9FFB7E;\n"
"border-radius: 12px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        label_9 = new QLabel(totalsales);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 91, 21));
        label_9->setStyleSheet(QString::fromUtf8("background-color: #9FFB7E;\n"
"color: rgb(0, 0, 0);"));
        homeTotalOrders = new QLabel(totalsales);
        homeTotalOrders->setObjectName(QString::fromUtf8("homeTotalOrders"));
        homeTotalOrders->setGeometry(QRect(30, 60, 151, 41));
        homeTotalOrders->setFont(font1);
        homeTotalOrders->setStyleSheet(QString::fromUtf8("background-color: #9FFB7E;\n"
"color: rgb(0, 0, 0);\n"
""));
        totalorders = new QWidget(ahomepage);
        totalorders->setObjectName(QString::fromUtf8("totalorders"));
        totalorders->setGeometry(QRect(530, 20, 221, 131));
        totalorders->setFont(font);
        totalorders->setStyleSheet(QString::fromUtf8("#totalorders{\n"
"  background-color: #76EBF2;\n"
"border-radius: 12px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        label_11 = new QLabel(totalorders);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 10, 91, 21));
        label_11->setStyleSheet(QString::fromUtf8("background-color: #76EBF2;\n"
"color: rgb(0, 0, 0);"));
        homeTotalSales = new QLabel(totalorders);
        homeTotalSales->setObjectName(QString::fromUtf8("homeTotalSales"));
        homeTotalSales->setGeometry(QRect(30, 60, 171, 41));
        homeTotalSales->setFont(font1);
        homeTotalSales->setStyleSheet(QString::fromUtf8("background-color: #76EBF2;\n"
"color: rgb(0, 0, 0);\n"
""));
        namerollno = new QWidget(ahomepage);
        namerollno->setObjectName(QString::fromUtf8("namerollno"));
        namerollno->setGeometry(QRect(50, 560, 361, 111));
        namerollno->setFont(font);
        namerollno->setStyleSheet(QString::fromUtf8("#namerollno{\n"
"  background-color: #9FFB7E;\n"
"border-radius: 12px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        homeLasUserName = new QLabel(namerollno);
        homeLasUserName->setObjectName(QString::fromUtf8("homeLasUserName"));
        homeLasUserName->setGeometry(QRect(100, 20, 191, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        homeLasUserName->setFont(font2);
        homeLasUserName->setStyleSheet(QString::fromUtf8("background-color: #9FFB7E;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserRollno = new QLabel(namerollno);
        homeLasUserRollno->setObjectName(QString::fromUtf8("homeLasUserRollno"));
        homeLasUserRollno->setGeometry(QRect(100, 50, 101, 31));
        QFont font3;
        font3.setPointSize(11);
        homeLasUserRollno->setFont(font3);
        homeLasUserRollno->setStyleSheet(QString::fromUtf8("background-color: #9FFB7E;\n"
"color: rgb(0, 0, 0);\n"
""));
        homeLasUserPayement = new QLabel(namerollno);
        homeLasUserPayement->setObjectName(QString::fromUtf8("homeLasUserPayement"));
        homeLasUserPayement->setGeometry(QRect(250, 10, 101, 20));
        homeLasUserPayement->setStyleSheet(QString::fromUtf8("\n"
"background-color: #37C43C;\n"
"border-radius: 10px;\n"
"color: rgb(0, 0, 0);\n"
"padding-left:10px;"));
        labelpic = new QLabel(namerollno);
        labelpic->setObjectName(QString::fromUtf8("labelpic"));
        labelpic->setGeometry(QRect(30, 30, 61, 51));
        labelpic->setStyleSheet(QString::fromUtf8("#labelpic{\n"
"  background-color: #F2E3D8;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        labelpic->setWordWrap(true);
        homeLasUserPicture = new QLabel(namerollno);
        homeLasUserPicture->setObjectName(QString::fromUtf8("homeLasUserPicture"));
        homeLasUserPicture->setGeometry(QRect(50, 40, 21, 31));
        homeLasUserPicture->setStyleSheet(QString::fromUtf8("\n"
"  background-color: #F2E3D8;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
""));
        homeLasUserPicture->setPixmap(QPixmap(QString::fromUtf8(":/Images/user1.svg")));
        homeLasUserPicture->setScaledContents(true);
        homeLasUserPicture->setWordWrap(true);
        homeLasUserPicture->setIndent(0);
        homeLasUserOrderDateTime = new QLabel(namerollno);
        homeLasUserOrderDateTime->setObjectName(QString::fromUtf8("homeLasUserOrderDateTime"));
        homeLasUserOrderDateTime->setGeometry(QRect(290, 80, 61, 31));
        homeLasUserOrderDateTime->setFont(font3);
        homeLasUserOrderDateTime->setStyleSheet(QString::fromUtf8("background-color: #9FFB7E;\n"
"color: rgb(0, 0, 0);\n"
""));
        table1 = new QTableWidget(ahomepage);
        if (table1->columnCount() < 6)
            table1->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table1->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (table1->rowCount() < 10)
            table1->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table1->setVerticalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table1->setItem(0, 0, __qtablewidgetitem16);
        table1->setObjectName(QString::fromUtf8("table1"));
        table1->setEnabled(true);
        table1->setGeometry(QRect(40, 180, 701, 361));
        table1->setMouseTracking(true);
        table1->setTabletTracking(true);
        table1->setStyleSheet(QString::fromUtf8("#table1{\n"
"background-color: #F2E3D8;\n"
"border-radius: 19px;\n"
"font: 700 11pt \"Ubuntu Mono\";\n"
"	color: rgb(0, 0, 0);\n"
"}"));
        table1->setFrameShape(QFrame::StyledPanel);
        table1->setFrameShadow(QFrame::Sunken);
        table1->setLineWidth(2);
        table1->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        table1->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        table1->setAutoScrollMargin(15);
        table1->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table1->setShowGrid(true);
        table1->setGridStyle(Qt::SolidLine);
        table1->setSortingEnabled(false);
        table1->setWordWrap(true);
        table1->setCornerButtonEnabled(true);
        table1->setRowCount(10);
        table1->horizontalHeader()->setVisible(true);
        table1->horizontalHeader()->setCascadingSectionResizes(false);
        table1->horizontalHeader()->setMinimumSectionSize(10);
        table1->horizontalHeader()->setDefaultSectionSize(80);
        table1->horizontalHeader()->setHighlightSections(true);
        table1->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        table1->horizontalHeader()->setStretchLastSection(true);
        table1->verticalHeader()->setVisible(true);
        table1->verticalHeader()->setCascadingSectionResizes(false);
        table1->verticalHeader()->setMinimumSectionSize(2);
        table1->verticalHeader()->setHighlightSections(true);
        views->addWidget(ahomepage);
        borderspage = new QWidget();
        borderspage->setObjectName(QString::fromUtf8("borderspage"));
        ordersViewAllOrdersTable = new QTableWidget(borderspage);
        if (ordersViewAllOrdersTable->columnCount() < 7)
            ordersViewAllOrdersTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setHorizontalHeaderItem(6, __qtablewidgetitem23);
        if (ordersViewAllOrdersTable->rowCount() < 15)
            ordersViewAllOrdersTable->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(4, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(5, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(6, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(7, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(8, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(9, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(10, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(11, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(12, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(13, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        ordersViewAllOrdersTable->setVerticalHeaderItem(14, __qtablewidgetitem38);
        ordersViewAllOrdersTable->setObjectName(QString::fromUtf8("ordersViewAllOrdersTable"));
        ordersViewAllOrdersTable->setGeometry(QRect(20, 74, 721, 571));
        ordersViewAllOrdersTable->setStyleSheet(QString::fromUtf8("\n"
"  background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
""));
        ordersViewAllOrdersTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ordersViewAllOrdersTable->setEditTriggers(QAbstractItemView::SelectedClicked);
        ordersViewAllOrdersTable->setTabKeyNavigation(false);
        ordersViewAllOrdersTable->setProperty("showDropIndicator", QVariant(false));
        ordersViewAllOrdersTable->setDragDropOverwriteMode(false);
        ordersViewAllOrdersTable->setAlternatingRowColors(true);
        ordersViewAllOrdersTable->setGridStyle(Qt::SolidLine);
        ordersViewAllOrdersTable->setSortingEnabled(false);
        ordersViewAllOrdersTable->setCornerButtonEnabled(false);
        ordersViewAllOrdersTable->horizontalHeader()->setCascadingSectionResizes(false);
        ordersViewAllOrdersTable->horizontalHeader()->setMinimumSectionSize(27);
        ordersViewAllOrdersTable->horizontalHeader()->setDefaultSectionSize(100);
        ordersViewAllOrdersTable->horizontalHeader()->setStretchLastSection(true);
        ordersViewAllOrdersTable->verticalHeader()->setCascadingSectionResizes(false);
        ordersViewAllOrdersTable->verticalHeader()->setMinimumSectionSize(22);
        ordersViewAllOrdersTable->verticalHeader()->setDefaultSectionSize(36);
        ordersViewAllOrdersTable->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(borderspage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 212, 29));
        label_5 = new QLabel(borderspage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 20, 91, 29));
        ordersViewAddNewButton = new QPushButton(borderspage);
        ordersViewAddNewButton->setObjectName(QString::fromUtf8("ordersViewAddNewButton"));
        ordersViewAddNewButton->setGeometry(QRect(505, 15, 231, 41));
        ordersViewAddNewButton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color: rgb(53, 132, 228);\n"
"color:white;\n"
"font:bold;"));
        label_12 = new QLabel(borderspage);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(660, 659, 81, 29));
        label_15 = new QLabel(borderspage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(429, 658, 212, 29));
        views->addWidget(borderspage);
        cfoodpage = new QWidget();
        cfoodpage->setObjectName(QString::fromUtf8("cfoodpage"));
        FoodViewUpdateFoodButton = new QPushButton(cfoodpage);
        FoodViewUpdateFoodButton->setObjectName(QString::fromUtf8("FoodViewUpdateFoodButton"));
        FoodViewUpdateFoodButton->setGeometry(QRect(480, 20, 121, 41));
        FoodViewUpdateFoodButton->setStyleSheet(QString::fromUtf8("#updateFoodButton{\n"
"background-color: rgb(192, 97, 203);\n"
"border-radius: 20%;\n"
"}\n"
"#updateFoodButton::hover{\n"
"background-color: rgb(220, 138, 221);\n"
"}"));
        FoodViewAddNewFoodButton = new QPushButton(cfoodpage);
        FoodViewAddNewFoodButton->setObjectName(QString::fromUtf8("FoodViewAddNewFoodButton"));
        FoodViewAddNewFoodButton->setGeometry(QRect(340, 20, 121, 41));
        FoodViewAddNewFoodButton->setStyleSheet(QString::fromUtf8("#addNewFoodButton{\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 20%;\n"
"}\n"
"#addNewFoodButton::hover{\n"
"background-color: rgb(143, 240, 164)\n"
"}"));
        FoodViewRemoveFoodButton = new QPushButton(cfoodpage);
        FoodViewRemoveFoodButton->setObjectName(QString::fromUtf8("FoodViewRemoveFoodButton"));
        FoodViewRemoveFoodButton->setGeometry(QRect(610, 20, 121, 41));
        FoodViewRemoveFoodButton->setStyleSheet(QString::fromUtf8("#removeFoodButton{\n"
"background-color: rgb(224, 27, 36);\n"
"border-radius: 20%;\n"
"}\n"
"#removeFoodButton::hover{\n"
"background-color: rgb(246, 97, 81);\n"
"}"));
        foodViewFoodItemsTable = new QTableView(cfoodpage);
        foodViewFoodItemsTable->setObjectName(QString::fromUtf8("foodViewFoodItemsTable"));
        foodViewFoodItemsTable->setGeometry(QRect(30, 80, 711, 591));
        foodViewFoodItemsTable->setStyleSheet(QString::fromUtf8("background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: lightgray;"));
        foodViewFoodItemsTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        foodViewFoodItemsTable->setAlternatingRowColors(true);
        label_22 = new QLabel(cfoodpage);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(50, 20, 149, 35));
        views->addWidget(cfoodpage);
        duserpage = new QWidget();
        duserpage->setObjectName(QString::fromUtf8("duserpage"));
        usersViewAddNewUserButton = new QPushButton(duserpage);
        usersViewAddNewUserButton->setObjectName(QString::fromUtf8("usersViewAddNewUserButton"));
        usersViewAddNewUserButton->setGeometry(QRect(340, 20, 151, 51));
        usersViewAddNewUserButton->setStyleSheet(QString::fromUtf8("#addNewUserButton{\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 20%;\n"
"}\n"
"#addNewUserButton::hover{\n"
"background-color: rgb(143, 240, 164)\n"
"}"));
        usersViewRemoveUserButton = new QPushButton(duserpage);
        usersViewRemoveUserButton->setObjectName(QString::fromUtf8("usersViewRemoveUserButton"));
        usersViewRemoveUserButton->setGeometry(QRect(510, 20, 101, 51));
        usersViewRemoveUserButton->setStyleSheet(QString::fromUtf8("#removeUserButton{\n"
"background-color: rgb(224, 27, 36);\n"
"border-radius: 20%;\n"
"}\n"
"#removeUserButton::hover{\n"
"background-color: rgb(246, 97, 81);\n"
"}"));
        updateUserButton = new QPushButton(duserpage);
        updateUserButton->setObjectName(QString::fromUtf8("updateUserButton"));
        updateUserButton->setGeometry(QRect(630, 20, 101, 51));
        updateUserButton->setStyleSheet(QString::fromUtf8("#updateUserButton{\n"
"background-color: rgb(192, 97, 203);\n"
"border-radius: 20%;\n"
"}\n"
"#updateUserButton::hover{\n"
"background-color: rgb(220, 138, 221);\n"
"}"));
        usersViewUsersTable = new QTableView(duserpage);
        usersViewUsersTable->setObjectName(QString::fromUtf8("usersViewUsersTable"));
        usersViewUsersTable->setGeometry(QRect(30, 90, 711, 581));
        usersViewUsersTable->setStyleSheet(QString::fromUtf8("background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: lightgray;"));
        usersViewUsersTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        usersViewUsersTable->setAlternatingRowColors(true);
        label_23 = new QLabel(duserpage);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(50, 30, 73, 35));
        views->addWidget(duserpage);
        eloanpage = new QWidget();
        eloanpage->setObjectName(QString::fromUtf8("eloanpage"));
        loantable2 = new QTableWidget(eloanpage);
        if (loantable2->columnCount() < 4)
            loantable2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(3, __qtablewidgetitem42);
        if (loantable2->rowCount() < 15)
            loantable2->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(5, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(6, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(7, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(8, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(9, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(10, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(11, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(12, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(13, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(14, __qtablewidgetitem57);
        loantable2->setObjectName(QString::fromUtf8("loantable2"));
        loantable2->setGeometry(QRect(410, 20, 371, 491));
        loantable2->setStyleSheet(QString::fromUtf8("#loantable2{\n"
"  background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        loantable2->setProperty("showDropIndicator", QVariant(true));
        loantable2->setGridStyle(Qt::SolidLine);
        loantable2->horizontalHeader()->setDefaultSectionSize(91);
        loantable1 = new QTableWidget(eloanpage);
        if (loantable1->columnCount() < 4)
            loantable1->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(3, __qtablewidgetitem61);
        if (loantable1->rowCount() < 23)
            loantable1->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(0, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(1, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(2, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(3, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(4, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(5, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(6, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(7, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(8, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(9, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(10, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(11, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(12, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(13, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(14, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(15, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(16, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(17, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(18, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(19, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(20, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(21, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(22, __qtablewidgetitem84);
        loantable1->setObjectName(QString::fromUtf8("loantable1"));
        loantable1->setGeometry(QRect(40, 20, 351, 661));
        loantable1->setMouseTracking(true);
        loantable1->setTabletTracking(true);
        loantable1->setToolTipDuration(-65);
        loantable1->setStyleSheet(QString::fromUtf8("#loantable1{\n"
"  background-color: #F2E3D8;\n"
"border-radius: 19px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        loantable1->setLineWidth(2);
        loantable1->horizontalHeader()->setDefaultSectionSize(79);
        loantable1->horizontalHeader()->setStretchLastSection(true);
        label_17 = new QLabel(eloanpage);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(580, 550, 121, 121));
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"border-radius:20px;\n"
"padding:30px"));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/Images/Plus.svg")));
        label_17->setScaledContents(true);
        label_17->setWordWrap(false);
        views->addWidget(eloanpage);
        fsettingpage = new QWidget();
        fsettingpage->setObjectName(QString::fromUtf8("fsettingpage"));
        settingsUserEditButton = new QWidget(fsettingpage);
        settingsUserEditButton->setObjectName(QString::fromUtf8("settingsUserEditButton"));
        settingsUserEditButton->setGeometry(QRect(50, 60, 631, 61));
        settingsUserEditButton->setFont(font);
        settingsUserEditButton->setStyleSheet(QString::fromUtf8("#settingsUserEditButton{\n"
"background-color: rgb(118, 178, 96);\n"
"border-radius: 12px;\n"
"}\n"
"#settingsUserEditButton:Hover{\n"
"	background-color: #9FFB7E;\n"
"}\n"
" "));
        homeLasUserName_2 = new QLabel(settingsUserEditButton);
        homeLasUserName_2->setObjectName(QString::fromUtf8("homeLasUserName_2"));
        homeLasUserName_2->setGeometry(QRect(80, 18, 371, 26));
        homeLasUserName_2->setFont(font2);
        homeLasUserName_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserPicture_2 = new QLabel(settingsUserEditButton);
        homeLasUserPicture_2->setObjectName(QString::fromUtf8("homeLasUserPicture_2"));
        homeLasUserPicture_2->setGeometry(QRect(30, 16, 31, 31));
        homeLasUserPicture_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"padding:10px;\n"
""));
        homeLasUserPicture_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/user1.svg")));
        homeLasUserPicture_2->setScaledContents(true);
        homeLasUserPicture_2->setAlignment(Qt::AlignCenter);
        homeLasUserPicture_2->setWordWrap(true);
        homeLasUserPicture_2->setMargin(0);
        homeLasUserPicture_2->setIndent(0);
        label_6 = new QLabel(settingsUserEditButton);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(590, 10, 19, 39));
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        settingsLogoutButton = new QWidget(fsettingpage);
        settingsLogoutButton->setObjectName(QString::fromUtf8("settingsLogoutButton"));
        settingsLogoutButton->setGeometry(QRect(60, 520, 631, 61));
        settingsLogoutButton->setFont(font);
        settingsLogoutButton->setStyleSheet(QString::fromUtf8("#settingsLogoutButton{\n"
"	background-color: rgb(184, 53, 59);\n"
"   border-radius: 12px;\n"
"}\n"
"#settingsLogoutButton:Hover{\n"
"	background-color: rgb(169, 81, 85);\n"
"}\n"
" "));
        homeLasUserName_4 = new QLabel(settingsLogoutButton);
        homeLasUserName_4->setObjectName(QString::fromUtf8("homeLasUserName_4"));
        homeLasUserName_4->setGeometry(QRect(80, 18, 371, 26));
        homeLasUserName_4->setFont(font2);
        homeLasUserName_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserPicture_4 = new QLabel(settingsLogoutButton);
        homeLasUserPicture_4->setObjectName(QString::fromUtf8("homeLasUserPicture_4"));
        homeLasUserPicture_4->setGeometry(QRect(30, 16, 31, 31));
        homeLasUserPicture_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(246, 97, 81);\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"padding:10px;\n"
""));
        homeLasUserPicture_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/Logout.svg")));
        homeLasUserPicture_4->setScaledContents(true);
        homeLasUserPicture_4->setAlignment(Qt::AlignCenter);
        homeLasUserPicture_4->setWordWrap(true);
        homeLasUserPicture_4->setMargin(0);
        homeLasUserPicture_4->setIndent(0);
        label_10 = new QLabel(settingsLogoutButton);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(590, 10, 19, 39));
        label_10->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        settingsButton1 = new QWidget(fsettingpage);
        settingsButton1->setObjectName(QString::fromUtf8("settingsButton1"));
        settingsButton1->setGeometry(QRect(50, 210, 631, 61));
        settingsButton1->setFont(font);
        settingsButton1->setStyleSheet(QString::fromUtf8("#settingsButton1{\n"
"	background-color: rgb(36, 31, 49);\n"
"	border-top-left-radius: 20px;\n"
"	border-top-right-radius: 20px;\n"
"}\n"
"#settingsButton1:Hover{\n"
"	background-color: rgb(87, 78, 108);\n"
"}"));
        homeLasUserName_6 = new QLabel(settingsButton1);
        homeLasUserName_6->setObjectName(QString::fromUtf8("homeLasUserName_6"));
        homeLasUserName_6->setGeometry(QRect(80, 18, 371, 26));
        homeLasUserName_6->setFont(font2);
        homeLasUserName_6->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserPicture_6 = new QLabel(settingsButton1);
        homeLasUserPicture_6->setObjectName(QString::fromUtf8("homeLasUserPicture_6"));
        homeLasUserPicture_6->setGeometry(QRect(30, 16, 31, 31));
        homeLasUserPicture_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(246, 97, 81);\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"padding:10px;\n"
""));
        homeLasUserPicture_6->setPixmap(QPixmap(QString::fromUtf8(":/Images/Logout.svg")));
        homeLasUserPicture_6->setScaledContents(true);
        homeLasUserPicture_6->setAlignment(Qt::AlignCenter);
        homeLasUserPicture_6->setWordWrap(true);
        homeLasUserPicture_6->setMargin(0);
        homeLasUserPicture_6->setIndent(0);
        label_13 = new QLabel(settingsButton1);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(590, 10, 19, 39));
        label_13->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        settingsButton3 = new QWidget(fsettingpage);
        settingsButton3->setObjectName(QString::fromUtf8("settingsButton3"));
        settingsButton3->setGeometry(QRect(50, 334, 631, 61));
        settingsButton3->setFont(font);
        settingsButton3->setStyleSheet(QString::fromUtf8("#settingsButton3{\n"
"	background-color: rgb(36, 31, 49);\n"
"border-bottom-left-radius: 20px;\n"
"border-bottom-right-radius: 20px;\n"
"}\n"
"#settingsButton3:Hover{\n"
"	background-color: rgb(87, 78, 108);\n"
"}"));
        homeLasUserName_7 = new QLabel(settingsButton3);
        homeLasUserName_7->setObjectName(QString::fromUtf8("homeLasUserName_7"));
        homeLasUserName_7->setGeometry(QRect(80, 18, 371, 26));
        homeLasUserName_7->setFont(font2);
        homeLasUserName_7->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserPicture_7 = new QLabel(settingsButton3);
        homeLasUserPicture_7->setObjectName(QString::fromUtf8("homeLasUserPicture_7"));
        homeLasUserPicture_7->setGeometry(QRect(30, 16, 31, 31));
        homeLasUserPicture_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(246, 97, 81);\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"padding:10px;\n"
""));
        homeLasUserPicture_7->setPixmap(QPixmap(QString::fromUtf8(":/Images/Logout.svg")));
        homeLasUserPicture_7->setScaledContents(true);
        homeLasUserPicture_7->setAlignment(Qt::AlignCenter);
        homeLasUserPicture_7->setWordWrap(true);
        homeLasUserPicture_7->setMargin(0);
        homeLasUserPicture_7->setIndent(0);
        label_14 = new QLabel(settingsButton3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(590, 10, 19, 39));
        label_14->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        settingsButton2 = new QWidget(fsettingpage);
        settingsButton2->setObjectName(QString::fromUtf8("settingsButton2"));
        settingsButton2->setGeometry(QRect(50, 272, 631, 61));
        settingsButton2->setFont(font);
        settingsButton2->setStyleSheet(QString::fromUtf8("#settingsButton2{\n"
"	background-color: rgb(36, 31, 49);\n"
"}\n"
"#settingsButton2:Hover{\n"
"	background-color: rgb(87, 78, 108);\n"
"}"));
        homeLasUserName_8 = new QLabel(settingsButton2);
        homeLasUserName_8->setObjectName(QString::fromUtf8("homeLasUserName_8"));
        homeLasUserName_8->setGeometry(QRect(80, 18, 371, 26));
        homeLasUserName_8->setFont(font2);
        homeLasUserName_8->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserPicture_8 = new QLabel(settingsButton2);
        homeLasUserPicture_8->setObjectName(QString::fromUtf8("homeLasUserPicture_8"));
        homeLasUserPicture_8->setGeometry(QRect(30, 16, 31, 31));
        homeLasUserPicture_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(246, 97, 81);\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"padding:10px;\n"
""));
        homeLasUserPicture_8->setPixmap(QPixmap(QString::fromUtf8(":/Images/Logout.svg")));
        homeLasUserPicture_8->setScaledContents(true);
        homeLasUserPicture_8->setAlignment(Qt::AlignCenter);
        homeLasUserPicture_8->setWordWrap(true);
        homeLasUserPicture_8->setMargin(0);
        homeLasUserPicture_8->setIndent(0);
        label_16 = new QLabel(settingsButton2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(590, 10, 19, 39));
        label_16->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_8 = new QLabel(fsettingpage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 170, 129, 18));
        views->addWidget(fsettingpage);
        gaboutpage = new QWidget();
        gaboutpage->setObjectName(QString::fromUtf8("gaboutpage"));
        logo_2 = new QLabel(gaboutpage);
        logo_2->setObjectName(QString::fromUtf8("logo_2"));
        logo_2->setGeometry(QRect(280, 50, 181, 151));
        logo_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/logo.svg")));
        logo_2->setScaledContents(true);
        settingsButton1_2 = new QWidget(gaboutpage);
        settingsButton1_2->setObjectName(QString::fromUtf8("settingsButton1_2"));
        settingsButton1_2->setGeometry(QRect(80, 408, 631, 61));
        settingsButton1_2->setFont(font);
        settingsButton1_2->setStyleSheet(QString::fromUtf8(" \n"
"	background-color: rgb(36, 31, 49);\n"
"	border-top-left-radius: 20px;\n"
"	border-top-right-radius: 20px;\n"
" "));
        homeLasUserName_11 = new QLabel(settingsButton1_2);
        homeLasUserName_11->setObjectName(QString::fromUtf8("homeLasUserName_11"));
        homeLasUserName_11->setGeometry(QRect(30, 20, 371, 26));
        homeLasUserName_11->setFont(font2);
        homeLasUserName_11->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_24 = new QLabel(settingsButton1_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(580, 20, 21, 20));
        label_24->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_24->setPixmap(QPixmap(QString::fromUtf8(":/Images/warning.svg")));
        label_24->setScaledContents(true);
        settingsButton3_2 = new QWidget(gaboutpage);
        settingsButton3_2->setObjectName(QString::fromUtf8("settingsButton3_2"));
        settingsButton3_2->setGeometry(QRect(80, 532, 631, 61));
        settingsButton3_2->setFont(font);
        settingsButton3_2->setStyleSheet(QString::fromUtf8(" \n"
"	background-color: rgb(36, 31, 49);\n"
"border-bottom-left-radius: 20px;\n"
"border-bottom-right-radius: 20px;\n"
" "));
        homeLasUserName_10 = new QLabel(settingsButton3_2);
        homeLasUserName_10->setObjectName(QString::fromUtf8("homeLasUserName_10"));
        homeLasUserName_10->setGeometry(QRect(30, 16, 371, 26));
        homeLasUserName_10->setFont(font2);
        homeLasUserName_10->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_26 = new QLabel(settingsButton3_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(580, 20, 21, 20));
        label_26->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_26->setPixmap(QPixmap(QString::fromUtf8(":/Images/warning.svg")));
        label_26->setScaledContents(true);
        settingsButton2_2 = new QWidget(gaboutpage);
        settingsButton2_2->setObjectName(QString::fromUtf8("settingsButton2_2"));
        settingsButton2_2->setGeometry(QRect(80, 470, 631, 61));
        settingsButton2_2->setFont(font);
        settingsButton2_2->setStyleSheet(QString::fromUtf8(" \n"
"	background-color: rgb(36, 31, 49);\n"
" "));
        homeLasUserName_9 = new QLabel(settingsButton2_2);
        homeLasUserName_9->setObjectName(QString::fromUtf8("homeLasUserName_9"));
        homeLasUserName_9->setGeometry(QRect(30, 20, 371, 26));
        homeLasUserName_9->setFont(font2);
        homeLasUserName_9->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        label_25 = new QLabel(settingsButton2_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(580, 20, 21, 20));
        label_25->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_25->setPixmap(QPixmap(QString::fromUtf8(":/Images/warning.svg")));
        label_25->setScaledContents(true);
        homeLasUserName_12 = new QLabel(gaboutpage);
        homeLasUserName_12->setObjectName(QString::fromUtf8("homeLasUserName_12"));
        homeLasUserName_12->setGeometry(QRect(290, 210, 163, 58));
        homeLasUserName_12->setFont(font2);
        homeLasUserName_12->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserName_13 = new QLabel(gaboutpage);
        homeLasUserName_13->setObjectName(QString::fromUtf8("homeLasUserName_13"));
        homeLasUserName_13->setGeometry(QRect(320, 270, 107, 23));
        homeLasUserName_13->setFont(font2);
        homeLasUserName_13->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"font: 18pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        homeLasUserName_14 = new QLabel(gaboutpage);
        homeLasUserName_14->setObjectName(QString::fromUtf8("homeLasUserName_14"));
        homeLasUserName_14->setGeometry(QRect(340, 300, 71, 21));
        homeLasUserName_14->setFont(font2);
        homeLasUserName_14->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 97, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 18pt \"Segoe UI\";\n"
"border-radius:8px;\n"
" "));
        homeLasUserName_14->setAlignment(Qt::AlignCenter);
        views->addWidget(gaboutpage);
        huser = new QWidget();
        huser->setObjectName(QString::fromUtf8("huser"));
        empDept = new QComboBox(huser);
        empDept->addItem(QString());
        empDept->addItem(QString());
        empDept->setObjectName(QString::fromUtf8("empDept"));
        empDept->setGeometry(QRect(40, 570, 141, 32));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(10);
        empDept->setFont(font4);
        empDept->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_12 = new QLabel(huser);
        id_12->setObjectName(QString::fromUtf8("id_12"));
        id_12->setGeometry(QRect(50, 550, 141, 21));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        id_12->setFont(font5);
        pushButton_5 = new QPushButton(huser);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(620, 630, 121, 32));
        QFont font6;
        font6.setPointSize(10);
        pushButton_5->setFont(font6);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setFocusPolicy(Qt::TabFocus);
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#pushButton_5:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        label_18 = new QLabel(huser);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 50, 241, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(12);
        font7.setBold(true);
        label_18->setFont(font7);
        userCancelButton = new QPushButton(huser);
        userCancelButton->setObjectName(QString::fromUtf8("userCancelButton"));
        userCancelButton->setEnabled(true);
        userCancelButton->setGeometry(QRect(480, 630, 121, 32));
        userCancelButton->setFont(font6);
        userCancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        userCancelButton->setFocusPolicy(Qt::TabFocus);
        userCancelButton->setStyleSheet(QString::fromUtf8("#userCancelButton\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#userCancelButton:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        label_19 = new QLabel(huser);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 320, 241, 31));
        label_19->setFont(font7);
        pushButton_2 = new QPushButton(huser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 130, 41, 32));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"	border:none;\n"
"	background:white;\n"
"border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/id_card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        id_4 = new QLabel(huser);
        id_4->setObjectName(QString::fromUtf8("id_4"));
        id_4->setGeometry(QRect(40, 250, 141, 21));
        id_4->setFont(font5);
        id_2 = new QLabel(huser);
        id_2->setObjectName(QString::fromUtf8("id_2"));
        id_2->setGeometry(QRect(40, 110, 141, 21));
        id_2->setFont(font5);
        id = new QLabel(huser);
        id->setObjectName(QString::fromUtf8("id"));
        id->setGeometry(QRect(40, 180, 141, 21));
        id->setFont(font5);
        id_5 = new QLabel(huser);
        id_5->setObjectName(QString::fromUtf8("id_5"));
        id_5->setGeometry(QRect(300, 110, 141, 21));
        id_5->setFont(font5);
        empGender = new QComboBox(huser);
        empGender->addItem(QString());
        empGender->addItem(QString());
        empGender->addItem(QString());
        empGender->setObjectName(QString::fromUtf8("empGender"));
        empGender->setGeometry(QRect(30, 270, 131, 32));
        empGender->setFont(font4);
        empGender->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_6 = new QLabel(huser);
        id_6->setObjectName(QString::fromUtf8("id_6"));
        id_6->setGeometry(QRect(210, 250, 141, 21));
        id_6->setFont(font5);
        empFather = new QLineEdit(huser);
        empFather->setObjectName(QString::fromUtf8("empFather"));
        empFather->setGeometry(QRect(30, 130, 241, 32));
        empFather->setFont(font4);
        empFather->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
"\n"
""));
        empFather->setInputMethodHints(Qt::ImhPreferNumbers);
        empPhone = new QLineEdit(huser);
        empPhone->setObjectName(QString::fromUtf8("empPhone"));
        empPhone->setGeometry(QRect(200, 270, 240, 32));
        empPhone->setFont(font4);
        empPhone->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        empPhone->setInputMethodHints(Qt::ImhPreferNumbers);
        empEmail = new QLineEdit(huser);
        empEmail->setObjectName(QString::fromUtf8("empEmail"));
        empEmail->setGeometry(QRect(290, 130, 221, 32));
        empEmail->setFont(font4);
        empEmail->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        empName = new QLineEdit(huser);
        empName->setObjectName(QString::fromUtf8("empName"));
        empName->setGeometry(QRect(30, 200, 240, 32));
        empName->setFont(font4);
        empName->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        empName->setInputMethodHints(Qt::ImhPreferLowercase);
        id_7 = new QLabel(huser);
        id_7->setObjectName(QString::fromUtf8("id_7"));
        id_7->setGeometry(QRect(300, 180, 141, 21));
        id_7->setFont(font5);
        empPhone_2 = new QLineEdit(huser);
        empPhone_2->setObjectName(QString::fromUtf8("empPhone_2"));
        empPhone_2->setGeometry(QRect(290, 200, 221, 32));
        empPhone_2->setFont(font4);
        empPhone_2->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        empPhone_2->setInputMethodHints(Qt::ImhPreferNumbers);
        empID_2 = new QLineEdit(huser);
        empID_2->setObjectName(QString::fromUtf8("empID_2"));
        empID_2->setEnabled(true);
        empID_2->setGeometry(QRect(40, 380, 201, 32));
        empID_2->setFont(font4);
        empID_2->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_10 = new QLabel(huser);
        id_10->setObjectName(QString::fromUtf8("id_10"));
        id_10->setGeometry(QRect(50, 360, 141, 21));
        id_10->setFont(font5);
        label_20 = new QLabel(huser);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(40, 430, 241, 31));
        label_20->setFont(font7);
        empID_3 = new QLineEdit(huser);
        empID_3->setObjectName(QString::fromUtf8("empID_3"));
        empID_3->setEnabled(true);
        empID_3->setGeometry(QRect(40, 490, 201, 32));
        empID_3->setFont(font4);
        empID_3->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_11 = new QLabel(huser);
        id_11->setObjectName(QString::fromUtf8("id_11"));
        id_11->setGeometry(QRect(50, 470, 141, 21));
        id_11->setFont(font5);
        empID_4 = new QLineEdit(huser);
        empID_4->setObjectName(QString::fromUtf8("empID_4"));
        empID_4->setEnabled(true);
        empID_4->setGeometry(QRect(270, 490, 201, 32));
        empID_4->setFont(font4);
        empID_4->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_13 = new QLabel(huser);
        id_13->setObjectName(QString::fromUtf8("id_13"));
        id_13->setGeometry(QRect(280, 470, 141, 21));
        id_13->setFont(font5);
        ProfilePictureButton = new QPushButton(huser);
        ProfilePictureButton->setObjectName(QString::fromUtf8("ProfilePictureButton"));
        ProfilePictureButton->setGeometry(QRect(530, 260, 201, 32));
        ProfilePictureButton->setFont(font6);
        ProfilePictureButton->setCursor(QCursor(Qt::PointingHandCursor));
        ProfilePictureButton->setFocusPolicy(Qt::TabFocus);
        ProfilePictureButton->setStyleSheet(QString::fromUtf8("#ProfilePictureButton\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"    border-radius:14px;\n"
"}\n"
"\n"
"#ProfilePictureButton:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        userprofilepctureview = new QLabel(huser);
        userprofilepctureview->setObjectName(QString::fromUtf8("userprofilepctureview"));
        userprofilepctureview->setGeometry(QRect(550, 90, 161, 161));
        userprofilepctureview->setStyleSheet(QString::fromUtf8("border-radius: 77px;\n"
"background-color: rgb(192, 97, 203);"));
        userprofilepctureview->setPixmap(QPixmap(QString::fromUtf8(":/Images/user1.svg")));
        userprofilepctureview->setScaledContents(false);
        userprofilepctureview->setAlignment(Qt::AlignCenter);
        userprofilepctureview->setWordWrap(true);
        id_14 = new QLabel(huser);
        id_14->setObjectName(QString::fromUtf8("id_14"));
        id_14->setGeometry(QRect(210, 550, 141, 21));
        id_14->setFont(font5);
        empDept_2 = new QComboBox(huser);
        empDept_2->addItem(QString());
        empDept_2->addItem(QString());
        empDept_2->setObjectName(QString::fromUtf8("empDept_2"));
        empDept_2->setGeometry(QRect(200, 570, 141, 32));
        empDept_2->setFont(font4);
        empDept_2->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        views->addWidget(huser);
        id_12->raise();
        id_11->raise();
        id_13->raise();
        id_10->raise();
        id_4->raise();
        empDept->raise();
        label_18->raise();
        label_19->raise();
        id_2->raise();
        id->raise();
        id_5->raise();
        empGender->raise();
        id_6->raise();
        empFather->raise();
        empPhone->raise();
        empEmail->raise();
        empName->raise();
        pushButton_2->raise();
        id_7->raise();
        empPhone_2->raise();
        empID_2->raise();
        label_20->raise();
        empID_3->raise();
        empID_4->raise();
        userprofilepctureview->raise();
        ProfilePictureButton->raise();
        pushButton_5->raise();
        userCancelButton->raise();
        id_14->raise();
        empDept_2->raise();
        iFoods = new QWidget();
        iFoods->setObjectName(QString::fromUtf8("iFoods"));
        label_21 = new QLabel(iFoods);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(40, 50, 241, 31));
        label_21->setFont(font7);
        foodItemPicture = new QPushButton(iFoods);
        foodItemPicture->setObjectName(QString::fromUtf8("foodItemPicture"));
        foodItemPicture->setGeometry(QRect(380, 260, 201, 32));
        foodItemPicture->setFont(font6);
        foodItemPicture->setCursor(QCursor(Qt::PointingHandCursor));
        foodItemPicture->setFocusPolicy(Qt::TabFocus);
        foodItemPicture->setStyleSheet(QString::fromUtf8("#foodItemPicture\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"    border-radius:14px;\n"
"}\n"
"\n"
"#foodItemPicture:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        id_8 = new QLabel(iFoods);
        id_8->setObjectName(QString::fromUtf8("id_8"));
        id_8->setGeometry(QRect(80, 150, 141, 21));
        id_8->setFont(font5);
        id_9 = new QLabel(iFoods);
        id_9->setObjectName(QString::fromUtf8("id_9"));
        id_9->setGeometry(QRect(80, 330, 141, 21));
        id_9->setFont(font5);
        userprofilepctureview_2 = new QLabel(iFoods);
        userprofilepctureview_2->setObjectName(QString::fromUtf8("userprofilepctureview_2"));
        userprofilepctureview_2->setGeometry(QRect(390, 80, 161, 161));
        userprofilepctureview_2->setStyleSheet(QString::fromUtf8("border-radius: 77px;\n"
"background-color: rgb(192, 97, 203);"));
        userprofilepctureview_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/user1.svg")));
        userprofilepctureview_2->setScaledContents(false);
        userprofilepctureview_2->setAlignment(Qt::AlignCenter);
        userprofilepctureview_2->setWordWrap(true);
        foodAddNewSubmitButton = new QPushButton(iFoods);
        foodAddNewSubmitButton->setObjectName(QString::fromUtf8("foodAddNewSubmitButton"));
        foodAddNewSubmitButton->setGeometry(QRect(630, 630, 121, 32));
        foodAddNewSubmitButton->setFont(font6);
        foodAddNewSubmitButton->setCursor(QCursor(Qt::PointingHandCursor));
        foodAddNewSubmitButton->setFocusPolicy(Qt::TabFocus);
        foodAddNewSubmitButton->setStyleSheet(QString::fromUtf8("#foodAddNewSubmitButton\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#foodAddNewSubmitButton:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        newFoodItemSize = new QLineEdit(iFoods);
        newFoodItemSize->setObjectName(QString::fromUtf8("newFoodItemSize"));
        newFoodItemSize->setGeometry(QRect(70, 350, 241, 32));
        newFoodItemSize->setFont(font4);
        newFoodItemSize->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        foodAddNewCancelButton = new QPushButton(iFoods);
        foodAddNewCancelButton->setObjectName(QString::fromUtf8("foodAddNewCancelButton"));
        foodAddNewCancelButton->setEnabled(true);
        foodAddNewCancelButton->setGeometry(QRect(490, 630, 121, 32));
        foodAddNewCancelButton->setFont(font6);
        foodAddNewCancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        foodAddNewCancelButton->setFocusPolicy(Qt::TabFocus);
        foodAddNewCancelButton->setStyleSheet(QString::fromUtf8("#foodAddNewCancelButton\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#foodAddNewCancelButton:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        newFoodItemName = new QLineEdit(iFoods);
        newFoodItemName->setObjectName(QString::fromUtf8("newFoodItemName"));
        newFoodItemName->setGeometry(QRect(70, 170, 240, 32));
        newFoodItemName->setFont(font4);
        newFoodItemName->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        newFoodItemName->setInputMethodHints(Qt::ImhPreferLowercase);
        id_15 = new QLabel(iFoods);
        id_15->setObjectName(QString::fromUtf8("id_15"));
        id_15->setGeometry(QRect(80, 420, 141, 21));
        id_15->setFont(font5);
        newFoodItemPrice = new QLineEdit(iFoods);
        newFoodItemPrice->setObjectName(QString::fromUtf8("newFoodItemPrice"));
        newFoodItemPrice->setGeometry(QRect(70, 440, 241, 32));
        newFoodItemPrice->setFont(font4);
        newFoodItemPrice->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        id_16 = new QLabel(iFoods);
        id_16->setObjectName(QString::fromUtf8("id_16"));
        id_16->setGeometry(QRect(80, 250, 141, 21));
        id_16->setFont(font5);
        newFoodItemQuantity = new QLineEdit(iFoods);
        newFoodItemQuantity->setObjectName(QString::fromUtf8("newFoodItemQuantity"));
        newFoodItemQuantity->setGeometry(QRect(70, 270, 241, 32));
        newFoodItemQuantity->setFont(font4);
        newFoodItemQuantity->setStyleSheet(QString::fromUtf8("background:white;\n"
"color:black;\n"
"border:none;\n"
"padding-left:12px;\n"
"border-radius: 10px;\n"
""));
        views->addWidget(iFoods);
        jAddNewOrder = new QWidget();
        jAddNewOrder->setObjectName(QString::fromUtf8("jAddNewOrder"));
        id_33 = new QLabel(jAddNewOrder);
        id_33->setObjectName(QString::fromUtf8("id_33"));
        id_33->setGeometry(QRect(50, 110, 141, 21));
        id_33->setFont(font5);
        newOrderStudentCnic = new QLineEdit(jAddNewOrder);
        newOrderStudentCnic->setObjectName(QString::fromUtf8("newOrderStudentCnic"));
        newOrderStudentCnic->setGeometry(QRect(40, 131, 240, 35));
        newOrderStudentCnic->setFont(font4);
        newOrderStudentCnic->setStyleSheet(QString::fromUtf8("#newOrderStudentCnic{\n"
"border:1px solid  rgb(255, 255, 255);\n"
"border-radius: 8px; \n"
"padding-left: 20px;\n"
"color: rgb(255, 255, 255);\n"
"}"));
        newOrderStudentCnic->setInputMethodHints(Qt::ImhPreferLowercase);
        label_46 = new QLabel(jAddNewOrder);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(40, 30, 241, 31));
        label_46->setFont(font7);
        userprofilepctureview_5 = new QLabel(jAddNewOrder);
        userprofilepctureview_5->setObjectName(QString::fromUtf8("userprofilepctureview_5"));
        userprofilepctureview_5->setGeometry(QRect(590, 60, 121, 111));
        userprofilepctureview_5->setStyleSheet(QString::fromUtf8("border-radius: 77px;\n"
"background-color: rgb(192, 97, 203);"));
        userprofilepctureview_5->setPixmap(QPixmap(QString::fromUtf8(":/Images/user1.svg")));
        userprofilepctureview_5->setScaledContents(false);
        userprofilepctureview_5->setAlignment(Qt::AlignCenter);
        userprofilepctureview_5->setWordWrap(true);
        id_34 = new QLabel(jAddNewOrder);
        id_34->setObjectName(QString::fromUtf8("id_34"));
        id_34->setGeometry(QRect(43, 179, 141, 21));
        id_34->setFont(font5);
        newOrderItemName = new QLineEdit(jAddNewOrder);
        newOrderItemName->setObjectName(QString::fromUtf8("newOrderItemName"));
        newOrderItemName->setGeometry(QRect(43, 200, 171, 35));
        newOrderItemName->setFont(font4);
        newOrderItemName->setStyleSheet(QString::fromUtf8(" \n"
"border:1px solid  rgb(255, 255, 255);\n"
"border-radius: 8px; \n"
"padding-left: 20px;\n"
"color: rgb(255, 255, 255);\n"
" "));
        newOrderItemName->setInputMethodHints(Qt::ImhPreferLowercase);
        newOrderStudentName = new QLabel(jAddNewOrder);
        newOrderStudentName->setObjectName(QString::fromUtf8("newOrderStudentName"));
        newOrderStudentName->setGeometry(QRect(300, 132, 241, 23));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Cantarell")});
        font8.setPointSize(20);
        font8.setBold(false);
        font8.setItalic(false);
        newOrderStudentName->setFont(font8);
        newOrderStudentName->setStyleSheet(QString::fromUtf8("font: 20pt \"Cantarell\";\n"
"color: rgb(255, 255, 255);"));
        newOrderItemsListView = new QListView(jAddNewOrder);
        newOrderItemsListView->setObjectName(QString::fromUtf8("newOrderItemsListView"));
        newOrderItemsListView->setGeometry(QRect(50, 240, 151, 341));
        newOrderItemsListView->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        newOrderCancel = new QPushButton(jAddNewOrder);
        newOrderCancel->setObjectName(QString::fromUtf8("newOrderCancel"));
        newOrderCancel->setEnabled(true);
        newOrderCancel->setGeometry(QRect(480, 640, 121, 32));
        newOrderCancel->setFont(font6);
        newOrderCancel->setCursor(QCursor(Qt::PointingHandCursor));
        newOrderCancel->setFocusPolicy(Qt::TabFocus);
        newOrderCancel->setStyleSheet(QString::fromUtf8("#newOrderCancel\n"
"{\n"
"	background:#EC3245;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#newOrderCancel:hover\n"
"{\n"
"	background:#2d2d2d;\n"
"	border:2px solid #EC3245;\n"
"	color:#EC3245;\n"
"}"));
        newOrdersubmit = new QPushButton(jAddNewOrder);
        newOrdersubmit->setObjectName(QString::fromUtf8("newOrdersubmit"));
        newOrdersubmit->setGeometry(QRect(620, 640, 121, 32));
        newOrdersubmit->setFont(font6);
        newOrdersubmit->setCursor(QCursor(Qt::PointingHandCursor));
        newOrdersubmit->setFocusPolicy(Qt::TabFocus);
        newOrdersubmit->setStyleSheet(QString::fromUtf8("#newOrdersubmit\n"
"{\n"
"	background:#00855C;\n"
"	border:none;\n"
"	color:white;\n"
"border-radius:14px;\n"
"}\n"
"\n"
"#newOrdersubmit:hover\n"
"{\n"
"	background:#2D2D2D;\n"
"	border:2px solid #00855C;\n"
"	color:#00855C;\n"
"}"));
        newOrderFinalItemstableWidget = new QTableWidget(jAddNewOrder);
        if (newOrderFinalItemstableWidget->columnCount() < 4)
            newOrderFinalItemstableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        newOrderFinalItemstableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        newOrderFinalItemstableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        newOrderFinalItemstableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        newOrderFinalItemstableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem88);
        newOrderFinalItemstableWidget->setObjectName(QString::fromUtf8("newOrderFinalItemstableWidget"));
        newOrderFinalItemstableWidget->setGeometry(QRect(240, 200, 501, 411));
        newOrderFinalItemstableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(143, 240, 164);\n"
"border-radius: 12px;\n"
"color: rgb(0, 0, 0);"));
        newOrderFinalItemstableWidget->setSortingEnabled(false);
        newOrderFinalItemstableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        newOrderFinalItemstableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        newOrderFinalItemstableWidget->horizontalHeader()->setStretchLastSection(true);
        newOrderStudentName_2 = new QLabel(jAddNewOrder);
        newOrderStudentName_2->setObjectName(QString::fromUtf8("newOrderStudentName_2"));
        newOrderStudentName_2->setGeometry(QRect(70, 650, 82, 23));
        newOrderStudentName_2->setFont(font5);
        newOrderTotalPrice = new QLabel(jAddNewOrder);
        newOrderTotalPrice->setObjectName(QString::fromUtf8("newOrderTotalPrice"));
        newOrderTotalPrice->setGeometry(QRect(160, 644, 161, 35));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Cantarell")});
        font9.setPointSize(22);
        font9.setBold(true);
        font9.setItalic(false);
        newOrderTotalPrice->setFont(font9);
        newOrderTotalPrice->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 22pt \"Cantarell\";"));
        newOrderTotalPrice->setScaledContents(false);
        views->addWidget(jAddNewOrder);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 231, 741));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setBaseSize(QSize(1980, 1440));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
""));
        HomeButton = new QPushButton(widget);
        HomeButton->setObjectName(QString::fromUtf8("HomeButton"));
        HomeButton->setGeometry(QRect(10, 180, 221, 44));
        HomeButton->setStyleSheet(QString::fromUtf8("#HomeButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	border-bottom: 2px solid dodgerblue;\n"
"	border-top: 2px solid dodgerblue;\n"
"	border-left: 2px solid dodgerblue;\n"
"	\n"
"	border-top-left-radius: 20px;\n"
"	border-bottom-left-radius: 20px;\n"
"	\n"
"	color:white;	\n"
"	background:transparent;\n"
"\n"
"}\n"
""));
        OrdersButton = new QPushButton(widget);
        OrdersButton->setObjectName(QString::fromUtf8("OrdersButton"));
        OrdersButton->setGeometry(QRect(10, 230, 221, 44));
        OrdersButton->setStyleSheet(QString::fromUtf8("#OrdersButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	border:none;\n"
"	background:transparent;\n"
"}\n"
"\n"
"#OrdersButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        FoodButton = new QPushButton(widget);
        FoodButton->setObjectName(QString::fromUtf8("FoodButton"));
        FoodButton->setGeometry(QRect(10, 280, 221, 44));
        FoodButton->setStyleSheet(QString::fromUtf8("#FoodButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"#FoodButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        UserButton = new QPushButton(widget);
        UserButton->setObjectName(QString::fromUtf8("UserButton"));
        UserButton->setGeometry(QRect(10, 330, 221, 41));
        UserButton->setStyleSheet(QString::fromUtf8("#UserButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"#UserButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        SettingsButton = new QPushButton(widget);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setGeometry(QRect(10, 380, 221, 44));
        SettingsButton->setStyleSheet(QString::fromUtf8("#SettingsButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"#SettingsButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        logo = new QLabel(widget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(60, 50, 121, 97));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/Images/logo.svg")));
        logo->setScaledContents(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 640, 71, 17));
        label_2->setStyleSheet(QString::fromUtf8(" \n"
"color: rgb(255, 255, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 640, 16, 17));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(224, 27, 36);"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 660, 51, 17));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        aboutbutton = new QPushButton(widget);
        aboutbutton->setObjectName(QString::fromUtf8("aboutbutton"));
        aboutbutton->setGeometry(QRect(10, 430, 221, 44));
        aboutbutton->setStyleSheet(QString::fromUtf8("#aboutbutton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"#aboutbutton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        Home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 23));
        Home->setMenuBar(menubar);
        statusbar = new QStatusBar(Home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Home->setStatusBar(statusbar);

        retranslateUi(Home);

        views->setCurrentIndex(3);
        ProfilePictureButton->setDefault(true);
        foodItemPicture->setDefault(true);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Home", nullptr));
        label_7->setText(QCoreApplication::translate("Home", "Total User's", nullptr));
        homeTotalUsers->setText(QCoreApplication::translate("Home", "0", nullptr));
        label_9->setText(QCoreApplication::translate("Home", "Total orders", nullptr));
        homeTotalOrders->setText(QCoreApplication::translate("Home", "0", nullptr));
        label_11->setText(QCoreApplication::translate("Home", "Total sales", nullptr));
        homeTotalSales->setText(QCoreApplication::translate("Home", "0", nullptr));
        homeLasUserName->setText(QCoreApplication::translate("Home", "User Name", nullptr));
        homeLasUserRollno->setText(QCoreApplication::translate("Home", "  23p-0000", nullptr));
        homeLasUserPayement->setText(QCoreApplication::translate("Home", "Rs. 200 ", nullptr));
        labelpic->setText(QString());
        homeLasUserPicture->setText(QString());
        homeLasUserOrderDateTime->setText(QCoreApplication::translate("Home", "3:12 am", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table1->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Home", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table1->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Home", "Payment", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table1->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Home", "Status", nullptr));

        const bool __sortingEnabled = table1->isSortingEnabled();
        table1->setSortingEnabled(false);
        table1->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem6 = ordersViewAllOrdersTable->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Home", "Order Id", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ordersViewAllOrdersTable->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ordersViewAllOrdersTable->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ordersViewAllOrdersTable->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Home", "Items", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = ordersViewAllOrdersTable->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Home", "Paid", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ordersViewAllOrdersTable->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Home", "Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ordersViewAllOrdersTable->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Home", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Total Orders Today : </span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">0</span></p></body></html>", nullptr));
        ordersViewAddNewButton->setText(QCoreApplication::translate("Home", "Add New", nullptr));
        label_12->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">0</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Total Sales Today : </span></p></body></html>", nullptr));
        FoodViewUpdateFoodButton->setText(QCoreApplication::translate("Home", "Update Item", nullptr));
        FoodViewAddNewFoodButton->setText(QCoreApplication::translate("Home", "Add new Item", nullptr));
        FoodViewRemoveFoodButton->setText(QCoreApplication::translate("Home", "Remove Item", nullptr));
        label_22->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; color:#1c71d8;\">Food Items</span></p></body></html>", nullptr));
        usersViewAddNewUserButton->setText(QCoreApplication::translate("Home", "Add New", nullptr));
        usersViewRemoveUserButton->setText(QCoreApplication::translate("Home", "Remove User", nullptr));
        updateUserButton->setText(QCoreApplication::translate("Home", "Update User", nullptr));
        label_23->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:22pt; color:#1c71d8;\">Users</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = loantable2->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = loantable2->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = loantable2->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = loantable2->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Home", "Free debtors", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = loantable1->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = loantable1->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = loantable1->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = loantable1->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Home", "Loan recipients", nullptr));
        label_17->setText(QString());
        homeLasUserName_2->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">User Name</span></p></body></html>", nullptr));
        homeLasUserPicture_2->setText(QString());
        label_6->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">&gt;</span></p></body></html>", nullptr));
        homeLasUserName_4->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Logout</span></p></body></html>", nullptr));
        homeLasUserPicture_4->setText(QString());
        label_10->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">&gt;</span></p></body></html>", nullptr));
        homeLasUserName_6->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Logout</span></p></body></html>", nullptr));
        homeLasUserPicture_6->setText(QString());
        label_13->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">&gt;</span></p></body></html>", nullptr));
        homeLasUserName_7->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Logout</span></p></body></html>", nullptr));
        homeLasUserPicture_7->setText(QString());
        label_14->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">&gt;</span></p></body></html>", nullptr));
        homeLasUserName_8->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:16pt; color:#ffffff;\">Logout</span></p></body></html>", nullptr));
        homeLasUserPicture_8->setText(QString());
        label_16->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:20pt; color:#ffffff;\">&gt;</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">App Configurations</span></p></body></html>", nullptr));
        logo_2->setText(QString());
        homeLasUserName_11->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">Email us</span></p></body></html>", nullptr));
        label_24->setText(QString());
        homeLasUserName_10->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">...</span></p></body></html>", nullptr));
        label_26->setText(QString());
        homeLasUserName_9->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">...</span></p></body></html>", nullptr));
        label_25->setText(QString());
        homeLasUserName_12->setText(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; font-weight:700; color:#ffffff;\">CafeKit</span></p></body></html>", nullptr));
        homeLasUserName_13->setText(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#c0bfbc;\">OOP Project</span></p></body></html>", nullptr));
        homeLasUserName_14->setText(QCoreApplication::translate("Home", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:700; color:#ffffff;\">V 1.0.0</span></p></body></html>", nullptr));
        empDept->setItemText(0, QCoreApplication::translate("Home", "Enabled", nullptr));
        empDept->setItemText(1, QCoreApplication::translate("Home", "Disabaled", nullptr));

        id_12->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Account Status</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Home", "Submit", nullptr));
        label_18->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:24pt; color:#e66100;\">New User</span></p></body></html>", nullptr));
        userCancelButton->setText(QCoreApplication::translate("Home", "Cancel", nullptr));
        label_19->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#c01c28;\">Pin</span></p></body></html>", nullptr));
        pushButton_2->setText(QString());
        id_4->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Gender</span></p></body></html>", nullptr));
        id_2->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Nic Number</span></p></body></html>", nullptr));
        id->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", nullptr));
        id_5->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Email</span></p></body></html>", nullptr));
        empGender->setItemText(0, QCoreApplication::translate("Home", "Male", nullptr));
        empGender->setItemText(1, QCoreApplication::translate("Home", "Female", nullptr));
        empGender->setItemText(2, QCoreApplication::translate("Home", "Other", nullptr));

        id_6->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Phone No</span></p></body></html>", nullptr));
        empFather->setText(QString());
        id_7->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Roll  No</span></p></body></html>", nullptr));
        id_10->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Security Pin</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#e66100;\">Limits</span></p></body></html>", nullptr));
        id_11->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Daily Limit</span></p></body></html>", nullptr));
        id_13->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Monthly Limit</span></p></body></html>", nullptr));
        ProfilePictureButton->setText(QCoreApplication::translate("Home", "Profile Picture", nullptr));
        userprofilepctureview->setText(QString());
        id_14->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Loan  Status</span></p></body></html>", nullptr));
        empDept_2->setItemText(0, QCoreApplication::translate("Home", "Enabled", nullptr));
        empDept_2->setItemText(1, QCoreApplication::translate("Home", "Disabaled", nullptr));

        label_21->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:24pt; color:#e66100;\">New Food Item</span></p></body></html>", nullptr));
        foodItemPicture->setText(QCoreApplication::translate("Home", "Picture", nullptr));
        id_8->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Name</span></p></body></html>", nullptr));
        id_9->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Size</span></p></body></html>", nullptr));
        userprofilepctureview_2->setText(QString());
        foodAddNewSubmitButton->setText(QCoreApplication::translate("Home", "Submit", nullptr));
        foodAddNewCancelButton->setText(QCoreApplication::translate("Home", "Cancel", nullptr));
        id_15->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Price</span></p></body></html>", nullptr));
        id_16->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Quantity</span></p></body></html>", nullptr));
        id_33->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Student Cnic</span></p></body></html>", nullptr));
        label_46->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:22pt; color:#1c71d8;\">New Food Item</span></p></body></html>", nullptr));
        userprofilepctureview_5->setText(QString());
        id_34->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#ffffff;\">Item Name</span></p></body></html>", nullptr));
        newOrderStudentName->setText(QCoreApplication::translate("Home", "Student Name", nullptr));
        newOrderCancel->setText(QCoreApplication::translate("Home", "Cancel", nullptr));
        newOrdersubmit->setText(QCoreApplication::translate("Home", "Submit", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = newOrderFinalItemstableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = newOrderFinalItemstableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Home", "Qty", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = newOrderFinalItemstableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Home", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = newOrderFinalItemstableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Home", "Remove", nullptr));
        newOrderStudentName_2->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:14pt; color:#ffffff;\">Total  R.s:</span></p></body></html>", nullptr));
        newOrderTotalPrice->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:22pt; color:#ffffff;\">00</span></p></body></html>", nullptr));
        HomeButton->setText(QCoreApplication::translate("Home", "Home", nullptr));
        OrdersButton->setText(QCoreApplication::translate("Home", "Orders", nullptr));
        FoodButton->setText(QCoreApplication::translate("Home", "Food Settings", nullptr));
        UserButton->setText(QCoreApplication::translate("Home", "Users", nullptr));
        SettingsButton->setText(QCoreApplication::translate("Home", "Settings", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("Home", "Made with", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" color:#a51d2d;\">\342\231\241  </span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Home", "v 1.0.0", nullptr));
        aboutbutton->setText(QCoreApplication::translate("Home", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
