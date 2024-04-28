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
    QLabel *label_15;
    QTableWidget *orderstable2;
    QTableWidget *ordertable1;
    QWidget *cfoodpage;
    QPushButton *addNewFoodCategorieButton;
    QPushButton *updateFoodCategorieButton;
    QPushButton *removeFoodCategorieButton;
    QTableView *foodViewCategoryTable;
    QPushButton *updateFoodButton;
    QPushButton *addNewFoodButton;
    QPushButton *removeFoodButton;
    QTableView *foodViewFoodItemTable;
    QWidget *duserpage;
    QPushButton *addNewUserButton;
    QPushButton *removeUserButton;
    QPushButton *updateUserButton;
    QTableView *usersViewUsersTable;
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
    QWidget *ghelppage;
    QLabel *label;
    QLabel *label_5;
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
    QWidget *widget;
    QPushButton *HomeButton;
    QPushButton *OrdersButton;
    QPushButton *FoodButton;
    QPushButton *UserButton;
    QPushButton *LoanButton;
    QPushButton *SettingsButton;
    QPushButton *HelpButton;
    QLabel *logo;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
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
        homeTotalUsers->setGeometry(QRect(30, 60, 81, 41));
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
        homeTotalOrders->setGeometry(QRect(30, 60, 81, 41));
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
        homeTotalSales->setGeometry(QRect(30, 60, 81, 41));
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
        label_15 = new QLabel(borderspage);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(620, 480, 121, 121));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137);\n"
"border-radius:20px;\n"
"padding:30px"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/Images/Plus.svg")));
        label_15->setScaledContents(true);
        label_15->setWordWrap(false);
        orderstable2 = new QTableWidget(borderspage);
        if (orderstable2->columnCount() < 4)
            orderstable2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        orderstable2->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        orderstable2->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        orderstable2->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        orderstable2->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        if (orderstable2->rowCount() < 15)
            orderstable2->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(6, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(7, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(8, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(9, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(10, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(11, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(12, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(13, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        orderstable2->setVerticalHeaderItem(14, __qtablewidgetitem35);
        orderstable2->setObjectName(QString::fromUtf8("orderstable2"));
        orderstable2->setGeometry(QRect(370, 20, 401, 431));
        orderstable2->setStyleSheet(QString::fromUtf8("#orderstable2{\n"
"  background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        orderstable2->setGridStyle(Qt::SolidLine);
        orderstable2->horizontalHeader()->setCascadingSectionResizes(false);
        orderstable2->horizontalHeader()->setDefaultSectionSize(99);
        orderstable2->verticalHeader()->setDefaultSectionSize(27);
        ordertable1 = new QTableWidget(borderspage);
        if (ordertable1->columnCount() < 4)
            ordertable1->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        ordertable1->setHorizontalHeaderItem(0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        ordertable1->setHorizontalHeaderItem(1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        ordertable1->setHorizontalHeaderItem(2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        ordertable1->setHorizontalHeaderItem(3, __qtablewidgetitem39);
        if (ordertable1->rowCount() < 23)
            ordertable1->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(6, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(7, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(8, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(9, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(10, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(11, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(12, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(13, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(14, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(15, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(16, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(17, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(18, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(19, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(20, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(21, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        ordertable1->setVerticalHeaderItem(22, __qtablewidgetitem62);
        ordertable1->setObjectName(QString::fromUtf8("ordertable1"));
        ordertable1->setGeometry(QRect(40, 20, 321, 631));
        ordertable1->setMouseTracking(true);
        ordertable1->setTabletTracking(true);
        ordertable1->setToolTipDuration(-65);
        ordertable1->setStyleSheet(QString::fromUtf8("#ordertable1{\n"
"  background-color: #F2E3D8;\n"
"border-radius: 19px;\n"
"color: rgb(0, 0, 0);\n"
"}"));
        ordertable1->setLineWidth(2);
        ordertable1->horizontalHeader()->setCascadingSectionResizes(true);
        ordertable1->horizontalHeader()->setMinimumSectionSize(41);
        ordertable1->horizontalHeader()->setDefaultSectionSize(73);
        ordertable1->horizontalHeader()->setStretchLastSection(true);
        ordertable1->verticalHeader()->setMinimumSectionSize(23);
        ordertable1->verticalHeader()->setDefaultSectionSize(26);
        views->addWidget(borderspage);
        cfoodpage = new QWidget();
        cfoodpage->setObjectName(QString::fromUtf8("cfoodpage"));
        addNewFoodCategorieButton = new QPushButton(cfoodpage);
        addNewFoodCategorieButton->setObjectName(QString::fromUtf8("addNewFoodCategorieButton"));
        addNewFoodCategorieButton->setGeometry(QRect(650, 30, 101, 51));
        addNewFoodCategorieButton->setStyleSheet(QString::fromUtf8("#addNewFoodCategorieButton{\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 50%;\n"
"}\n"
"#addNewFoodCategorieButton::hover{\n"
"background-color: rgb(143, 240, 164)\n"
"}"));
        updateFoodCategorieButton = new QPushButton(cfoodpage);
        updateFoodCategorieButton->setObjectName(QString::fromUtf8("updateFoodCategorieButton"));
        updateFoodCategorieButton->setGeometry(QRect(650, 150, 101, 51));
        updateFoodCategorieButton->setStyleSheet(QString::fromUtf8("#updateFoodCategorieButton{\n"
"background-color: rgb(192, 97, 203);\n"
"border-radius: 50%;\n"
"}\n"
"#updateFoodCategorieButton::hover{\n"
"background-color: rgb(220, 138, 221);\n"
"}"));
        removeFoodCategorieButton = new QPushButton(cfoodpage);
        removeFoodCategorieButton->setObjectName(QString::fromUtf8("removeFoodCategorieButton"));
        removeFoodCategorieButton->setGeometry(QRect(650, 90, 101, 51));
        removeFoodCategorieButton->setStyleSheet(QString::fromUtf8("#removeFoodCategorieButton{\n"
"background-color: rgb(224, 27, 36);\n"
"border-radius: 50%;\n"
"}\n"
"#removeFoodCategorieButton::hover{\n"
"background-color: rgb(246, 97, 81);\n"
"}"));
        foodViewCategoryTable = new QTableView(cfoodpage);
        foodViewCategoryTable->setObjectName(QString::fromUtf8("foodViewCategoryTable"));
        foodViewCategoryTable->setGeometry(QRect(20, 20, 601, 241));
        foodViewCategoryTable->setStyleSheet(QString::fromUtf8("background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: lightgray;"));
        foodViewCategoryTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        foodViewCategoryTable->setAutoScrollMargin(21);
        foodViewCategoryTable->setAlternatingRowColors(true);
        foodViewCategoryTable->verticalHeader()->setMinimumSectionSize(11);
        foodViewCategoryTable->verticalHeader()->setDefaultSectionSize(34);
        updateFoodButton = new QPushButton(cfoodpage);
        updateFoodButton->setObjectName(QString::fromUtf8("updateFoodButton"));
        updateFoodButton->setGeometry(QRect(650, 410, 101, 51));
        updateFoodButton->setStyleSheet(QString::fromUtf8("#updateFoodButton{\n"
"background-color: rgb(192, 97, 203);\n"
"border-radius: 20%;\n"
"}\n"
"#updateFoodButton::hover{\n"
"background-color: rgb(220, 138, 221);\n"
"}"));
        addNewFoodButton = new QPushButton(cfoodpage);
        addNewFoodButton->setObjectName(QString::fromUtf8("addNewFoodButton"));
        addNewFoodButton->setGeometry(QRect(650, 290, 101, 51));
        addNewFoodButton->setStyleSheet(QString::fromUtf8("#addNewFoodButton{\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 20%;\n"
"}\n"
"#addNewFoodButton::hover{\n"
"background-color: rgb(143, 240, 164)\n"
"}"));
        removeFoodButton = new QPushButton(cfoodpage);
        removeFoodButton->setObjectName(QString::fromUtf8("removeFoodButton"));
        removeFoodButton->setGeometry(QRect(650, 350, 101, 51));
        removeFoodButton->setStyleSheet(QString::fromUtf8("#removeFoodButton{\n"
"background-color: rgb(224, 27, 36);\n"
"border-radius: 20%;\n"
"}\n"
"#removeFoodButton::hover{\n"
"background-color: rgb(246, 97, 81);\n"
"}"));
        foodViewFoodItemTable = new QTableView(cfoodpage);
        foodViewFoodItemTable->setObjectName(QString::fromUtf8("foodViewFoodItemTable"));
        foodViewFoodItemTable->setGeometry(QRect(20, 280, 601, 361));
        foodViewFoodItemTable->setStyleSheet(QString::fromUtf8("background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: lightgray;"));
        foodViewFoodItemTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        foodViewFoodItemTable->setAlternatingRowColors(true);
        views->addWidget(cfoodpage);
        duserpage = new QWidget();
        duserpage->setObjectName(QString::fromUtf8("duserpage"));
        addNewUserButton = new QPushButton(duserpage);
        addNewUserButton->setObjectName(QString::fromUtf8("addNewUserButton"));
        addNewUserButton->setGeometry(QRect(660, 50, 101, 101));
        addNewUserButton->setStyleSheet(QString::fromUtf8("#addNewUserButton{\n"
"background-color: rgb(46, 194, 126);\n"
"border-radius: 50%;\n"
"}\n"
"#addNewUserButton::hover{\n"
"background-color: rgb(143, 240, 164)\n"
"}"));
        removeUserButton = new QPushButton(duserpage);
        removeUserButton->setObjectName(QString::fromUtf8("removeUserButton"));
        removeUserButton->setGeometry(QRect(660, 180, 101, 101));
        removeUserButton->setStyleSheet(QString::fromUtf8("#removeUserButton{\n"
"background-color: rgb(224, 27, 36);\n"
"border-radius: 50%;\n"
"}\n"
"#removeUserButton::hover{\n"
"background-color: rgb(246, 97, 81);\n"
"}"));
        updateUserButton = new QPushButton(duserpage);
        updateUserButton->setObjectName(QString::fromUtf8("updateUserButton"));
        updateUserButton->setGeometry(QRect(660, 310, 101, 101));
        updateUserButton->setStyleSheet(QString::fromUtf8("#updateUserButton{\n"
"background-color: rgb(192, 97, 203);\n"
"border-radius: 50%;\n"
"}\n"
"#updateUserButton::hover{\n"
"background-color: rgb(220, 138, 221);\n"
"}"));
        usersViewUsersTable = new QTableView(duserpage);
        usersViewUsersTable->setObjectName(QString::fromUtf8("usersViewUsersTable"));
        usersViewUsersTable->setGeometry(QRect(30, 20, 601, 581));
        usersViewUsersTable->setStyleSheet(QString::fromUtf8("background-color: #C6F3E0;\n"
"border-radius: 15px;\n"
"color: rgb(0, 0, 0);\n"
"alternate-background-color: lightgray;"));
        usersViewUsersTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        usersViewUsersTable->setAlternatingRowColors(true);
        views->addWidget(duserpage);
        eloanpage = new QWidget();
        eloanpage->setObjectName(QString::fromUtf8("eloanpage"));
        loantable2 = new QTableWidget(eloanpage);
        if (loantable2->columnCount() < 4)
            loantable2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(1, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(2, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        loantable2->setHorizontalHeaderItem(3, __qtablewidgetitem66);
        if (loantable2->rowCount() < 15)
            loantable2->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(1, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(2, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(3, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(4, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(5, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(6, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(7, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(8, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(9, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(10, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(11, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(12, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(13, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        loantable2->setVerticalHeaderItem(14, __qtablewidgetitem81);
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
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(1, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(2, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        loantable1->setHorizontalHeaderItem(3, __qtablewidgetitem85);
        if (loantable1->rowCount() < 23)
            loantable1->setRowCount(23);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(0, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(1, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(2, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(3, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(4, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(5, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(6, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(7, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(8, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(9, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(10, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(11, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(12, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(13, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(14, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(15, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(16, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(17, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(18, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(19, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(20, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(21, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        loantable1->setVerticalHeaderItem(22, __qtablewidgetitem108);
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
"	background-color: rgb(61, 56, 70);\n"
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
        settingsButton3->setGeometry(QRect(50, 338, 631, 61));
        settingsButton3->setFont(font);
        settingsButton3->setStyleSheet(QString::fromUtf8("#settingsButton3{\n"
"	background-color: rgb(36, 31, 49);\n"
"border-bottom-left-radius: 20px;\n"
"border-bottom-right-radius: 20px;\n"
"}\n"
"#settingsButton3:Hover{\n"
"	background-color: rgb(61, 56, 70);\n"
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
        settingsButton2->setGeometry(QRect(50, 274, 631, 61));
        settingsButton2->setFont(font);
        settingsButton2->setStyleSheet(QString::fromUtf8("#settingsButton2{\n"
"	background-color: rgb(36, 31, 49);\n"
"}\n"
"#settingsButton2:Hover{\n"
"	background-color: rgb(61, 56, 70);\n"
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
        ghelppage = new QWidget();
        ghelppage->setObjectName(QString::fromUtf8("ghelppage"));
        label = new QLabel(ghelppage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 104, 58));
        label_5 = new QLabel(ghelppage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 180, 66, 18));
        views->addWidget(ghelppage);
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
        foodItemPicture->setGeometry(QRect(520, 300, 201, 32));
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
        userprofilepctureview_2->setGeometry(QRect(540, 120, 161, 161));
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
        LoanButton = new QPushButton(widget);
        LoanButton->setObjectName(QString::fromUtf8("LoanButton"));
        LoanButton->setGeometry(QRect(10, 380, 221, 44));
        LoanButton->setStyleSheet(QString::fromUtf8("#LoanButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"\n"
"#LoanButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
        SettingsButton = new QPushButton(widget);
        SettingsButton->setObjectName(QString::fromUtf8("SettingsButton"));
        SettingsButton->setGeometry(QRect(10, 430, 221, 44));
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
        HelpButton = new QPushButton(widget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setGeometry(QRect(10, 480, 221, 44));
        HelpButton->setStyleSheet(QString::fromUtf8("#HelpButton\n"
"{\n"
"	text-align:left;\n"
"	padding-left:20px;\n"
"	color:white;	\n"
"	background:transparent;\n"
"border:none;\n"
"}\n"
"#HelpButton:hover{       text-align:left;       padding-left:20px;		border-top-left-radius: 20px;   border-bottom-left-radius: 20px;   border:none;	  color:white;	  background-color: rgb(61, 56, 70); }"));
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
        Home->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Home);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 23));
        Home->setMenuBar(menubar);
        statusbar = new QStatusBar(Home);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Home->setStatusBar(statusbar);

        retranslateUi(Home);

        views->setCurrentIndex(5);
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

        label_15->setText(QString());
        QTableWidgetItem *___qtablewidgetitem6 = orderstable2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = orderstable2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = orderstable2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = orderstable2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Home", "Payment", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = ordertable1->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ordertable1->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ordertable1->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = ordertable1->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Home", "Item", nullptr));
        addNewFoodCategorieButton->setText(QCoreApplication::translate("Home", "Add New", nullptr));
        updateFoodCategorieButton->setText(QCoreApplication::translate("Home", "Update User", nullptr));
        removeFoodCategorieButton->setText(QCoreApplication::translate("Home", "Remove User", nullptr));
        updateFoodButton->setText(QCoreApplication::translate("Home", "Update User", nullptr));
        addNewFoodButton->setText(QCoreApplication::translate("Home", "Add New", nullptr));
        removeFoodButton->setText(QCoreApplication::translate("Home", "Remove User", nullptr));
        addNewUserButton->setText(QCoreApplication::translate("Home", "Add New", nullptr));
        removeUserButton->setText(QCoreApplication::translate("Home", "Remove User", nullptr));
        updateUserButton->setText(QCoreApplication::translate("Home", "Update User", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = loantable2->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = loantable2->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = loantable2->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = loantable2->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Home", "Free debtors", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = loantable1->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Home", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = loantable1->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Home", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = loantable1->horizontalHeaderItem(2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Home", "Roll No", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = loantable1->horizontalHeaderItem(3);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Home", "Loan recipients", nullptr));
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
        label->setText(QCoreApplication::translate("Home", "<html><head/><body><p><span style=\" font-size:36pt; font-weight:700; color:#ff7800;\">Help</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
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
        HomeButton->setText(QCoreApplication::translate("Home", "Home", nullptr));
        OrdersButton->setText(QCoreApplication::translate("Home", "Orders", nullptr));
        FoodButton->setText(QCoreApplication::translate("Home", "Food Settings", nullptr));
        UserButton->setText(QCoreApplication::translate("Home", "Users", nullptr));
        LoanButton->setText(QCoreApplication::translate("Home", "Loan Management", nullptr));
        SettingsButton->setText(QCoreApplication::translate("Home", "Settings", nullptr));
        HelpButton->setText(QCoreApplication::translate("Home", "Help", nullptr));
        logo->setText(QString());
        label_2->setText(QCoreApplication::translate("Home", "Made with", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "\342\231\241  ", nullptr));
        label_4->setText(QCoreApplication::translate("Home", "v 1.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
