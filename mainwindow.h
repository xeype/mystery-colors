#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    int color = 0;
    int position = -1;
    int arr[5];
    int arr2[5];
    int count = 0;
    QString counts = QString::number(count);
    QMessageBox msgBox;
    ~MainWindow();

private slots:
    void game_over();

    void count_meter();

    void set_color();

    void random_colors();

    void compare_colors();

    void on_buttonRed_clicked();

    void on_buttonOrange_clicked();

    void on_buttonYellow_clicked();

    void on_buttonGreen_clicked();

    void on_buttonSky_clicked();

    void on_buttonBlue_clicked();

    void on_buttonPurple_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
