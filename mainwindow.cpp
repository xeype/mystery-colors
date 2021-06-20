#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    random_colors();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Function for set color
void MainWindow::set_color(){
    QString temp = QString::number(color);
    QString string = "color"+temp;

    //For Red
     if(string == "color1"){
        switch(position){
            case 0:
                ui->color1->setStyleSheet("background-color: #ff7878;margin: 15px;border: none;border-radius: 5px;");
                break;
            case 1:
                ui->color2->setStyleSheet("background-color: #ff7878;margin: 15px;border: none;border-radius: 5px;");
                break;
            case 2:
                ui->color3->setStyleSheet("background-color: #ff7878;margin: 15px;border: none;border-radius: 5px;");
                break;
            case 3:
                ui->color4->setStyleSheet("background-color: #ff7878;margin: 15px;border: none;border-radius: 5px;");
                break;
            case 4:
                ui->color5->setStyleSheet("background-color: #ff7878;margin: 15px;border: none;border-radius: 5px;");
                game_over();
                break;
            }
            arr[position] = 1;
        }

    //For Orange
    else if(string == "color2"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color: #ffb978;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:  #ffb978; margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:  #ffb978;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:  #ffb978;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:  #ffb978;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
             }
         arr[position] = 2;
     }

     //For Yellow
     else if(string == "color3"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color:#fffd78;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:#fffd78; margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:#fffd78;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:#fffd78;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:#fffd78;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
         }
         arr[position] = 3;
     }

     //For Green
     else if(string == "color4"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color:#78ff91;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:#78ff91; margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:#78ff91;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:#78ff91;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:#78ff91;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
         }
         arr[position] = 4;
     }

     //For Sky
     else if(string == "color5"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color:#78f2ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:#78f2ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:#78f2ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:#78f2ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:#78f2ff;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
         }
         arr[position] = 5;
     }

     //For Blue
     else if(string == "color6"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color:#7a78ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:#7a78ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:#7a78ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:#7a78ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:#7a78ff;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
         }
         arr[position] = 6;
     }

     //For Purple
     else if(string == "color7"){
         switch(position){
             case 0:
                 ui->color1->setStyleSheet("background-color:#e278ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 1:
                 ui->color2->setStyleSheet("background-color:#e278ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 2:
                 ui->color3->setStyleSheet("background-color:#e278ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 3:
                 ui->color4->setStyleSheet("background-color:#e278ff;margin: 15px;border: none;border-radius: 5px;");
                 break;
             case 4:
                 ui->color5->setStyleSheet("background-color:#e278ff;margin: 15px;border: none;border-radius: 5px;");
                 game_over();
                 break;
         }
         arr[position] = 7;
     }
}

//Function for creating a random sequence of colors
void MainWindow::random_colors(){
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        arr2[i] = 1 + rand() % 7;
    }
}

//Function for compare colors between User's choose and Computer generated
void MainWindow::compare_colors(){
            bool check = false;
            if(arr2[position] == arr[position]) {
                ui->notificationLabel->setText("Right");
            }
            else {
                for(int i = 0; i < 5; i++){
                    if(color == arr2[i]) {
                        check = true;
                    }
                }

                if(check == true) {
                    ui->notificationLabel->setText("Incorrect");
                }
                else {
                    ui->notificationLabel->setText("This color is not in sequence");

                    //Disable buttons missing in sequence
                    switch(color){
                        case 1:
                            ui->buttonRed->setEnabled(false);
                            ui->buttonRed->setStyleSheet("background-color: #b55353; border-radius: 5px;");
                            break;
                        case 2:
                            ui->buttonOrange->setEnabled(false);
                            ui->buttonOrange->setStyleSheet("background-color: #c28955; border-radius: 5px;");
                            break;
                        case 3:
                            ui->buttonYellow->setEnabled(false);
                            ui->buttonYellow->setStyleSheet("background-color: #bfbe56; border-radius: 5px;");
                            break;
                        case 4:
                            ui->buttonGreen->setEnabled(false);
                            ui->buttonGreen->setStyleSheet("background-color: #53b566; border-radius: 5px;");
                            break;
                        case 5:
                            ui->buttonSky->setEnabled(false);
                            ui->buttonSky->setStyleSheet("background-color: #57b3bd; border-radius: 5px;");
                            break;
                        case 6:
                            ui->buttonBlue->setEnabled(false);
                            ui->buttonBlue->setStyleSheet("background-color: #4d4ba3; border-radius: 5px;");
                            break;
                        case 7:
                            ui->buttonPurple->setEnabled(false);
                            ui->buttonPurple->setStyleSheet("background-color: #9d4fb3; border-radius: 5px;");
                            break;
                    }
                }

                //Styles for disabled buttons
                switch(position){
                    case 0:
                        ui->color1->setStyleSheet("background-color: #2e2e2e;margin: 15px;border: none;border-radius: 5px;");
                        break;
                    case 1:
                        ui->color2->setStyleSheet("background-color: #2e2e2e;margin: 15px;border: none;border-radius: 5px;");
                        break;
                    case 2:
                        ui->color3->setStyleSheet("background-color: #2e2e2e;margin: 15px;border: none;border-radius: 5px;");
                        break;
                    case 3:
                        ui->color4->setStyleSheet("background-color: #2e2e2e;margin: 15px;border: none;border-radius: 5px;");
                        break;
                    case 4:
                        ui->color5->setStyleSheet("background-color: #2e2e2e;margin: 15px;border: none;border-radius: 5px;");
                        break;
                }
                position--;
            }
}

//Function for count meter (Tries)
void MainWindow::count_meter(){
    count++;
    counts = QString::number(count);
    ui->triesLabel->setText("Tries " + counts );
}

/*
    Function's for clicked button's:
*/

//For Red
void MainWindow::on_buttonRed_clicked()
{
    position++;
    color = 1;
    count_meter();
    set_color();
    compare_colors();
}

//For Orange
void MainWindow::on_buttonOrange_clicked()
{
    position++;
    color = 2;
    count_meter();
    set_color();
    compare_colors();
}

//For Yellow
void MainWindow::on_buttonYellow_clicked()
{
    position++;
    color = 3;
    count_meter();
    set_color();
    compare_colors();
}

//For Green
void MainWindow::on_buttonGreen_clicked()
{
    position++;
    color = 4;
    count_meter();
    set_color();
    compare_colors();
}

//For Sky
void MainWindow::on_buttonSky_clicked()
{
    position++;
    color = 5;
    count_meter();
    set_color();
    compare_colors();
}

//For Blue
void MainWindow::on_buttonBlue_clicked()
{
    position++;
    color = 6;
    count_meter();
    set_color();
    compare_colors();
}

//For Purple
void MainWindow::on_buttonPurple_clicked()
{
    position++;
    color = 7;
    count_meter();
    set_color();
    compare_colors();
}

//Function for Game Over Message Box
void MainWindow::game_over(){
    msgBox.setStyleSheet("QMessageBox {background-color: #ebebeb; border: 2px solid black}"
"QLabel{min-height:170px; min-width: 340px; color:#2e2e2e; font: 18px 'URW Gothic [UKWN]'; text-align:center;}"
".QPushButton {min-height: 20px; margin-right: 65px; font: 16px 'URW Gothic [UKWN]'; background-color: #2e2e2e; border-radius: 5px;}"
".QPushButton:pressed {background-color: black;}");
    msgBox.setWindowTitle("Game Over");
    msgBox.setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
    msgBox.setText("Game Over \nTries " + counts);
    QPushButton *close_game = msgBox.addButton("Close", msgBox.RejectRole);

    msgBox.exec();
    if(msgBox.clickedButton() == close_game){
    this->close();
    msgBox.close();
    }
}
