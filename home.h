#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include <QPushButton>
#include"database.h"

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();
    Database db = Database();

private:
    void loadHomeData();
    void getUsersViewData();

private slots:
    void selectedPushButton(QPushButton *button);

    void on_HomeButton_clicked();

    void on_OrdersButton_clicked();

    void on_FoodButton_clicked();

    void on_UserButton_clicked();

    void on_LoanButton_clicked();

    void on_SettingsButton_clicked();

    void on_HelpButton_clicked();

    void on_addNewUserButton_clicked();

    void on_userCancelButton_clicked();

    void on_ProfilePictureButton_clicked();

    void on_addNewFoodButton_clicked();

    void on_foodAddNewCancelButton_clicked();

    void on_removeUserButton_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
