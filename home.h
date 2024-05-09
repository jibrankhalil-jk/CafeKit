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
    void loadHomeViewData();
    void getUsersViewData();
    void getFoodViewData();
    void loadOrdersViewData();
    void getSettingViewData();

    std::pmr::vector<QMap<QString ,QString>> finItems;

private slots:
    void selectedPushButton(QPushButton *button);

    void on_HomeButton_clicked();

    void on_OrdersButton_clicked();

    void on_FoodButton_clicked();

    void on_UserButton_clicked();

    void on_SettingsButton_clicked();

    void on_addNewUserButton_clicked();

    void on_userCancelButton_clicked();

    void on_ProfilePictureButton_clicked();

    void on_addNewFoodButton_clicked();

    void on_foodAddNewCancelButton_clicked();

    void on_removeUserButton_clicked();

    void on_views_currentChanged(int arg1);

    void on_foodAddNewSubmitButton_clicked();

    void on_removeFoodButton_clicked();

    void on_aboutbutton_clicked();

    void on_foodItemPicture_clicked();

    void on_newOrderStudentCnic_editingFinished();

    void on_newOrderStudentCnic_textChanged(const QString &arg1);

    void on_newOrderItemName_textChanged(const QString &arg1);

    void on_newOrderCancel_clicked();

    void on_pushButton_clicked();

    void on_newOrderItemsListView_clicked(const QModelIndex &index);

    void on_newOrderFinalItemstableWidget_cellClicked(int row, int column);

    void on_newOrdersubmit_clicked();

private:
    Ui::Home *ui;
};

#endif // HOME_H
