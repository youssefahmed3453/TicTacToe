#include "tictactoe.h"
#include "ui_tictactoe.h"
#include<QDebug>
#include <iostream>
using namespace std;

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
{
    ui->setupUi(this);
}

TicTacToe::~TicTacToe()
{
    delete ui;
}

void TicTacToe::DelcareWinner(){
        int winner = whoWon(buttonsStatus, winningCases);
        if(winner != 0){
            if(winner == 1){
                ui->player->setText("player 1 won!");
            }else{
                ui->player->setText("player 2 won!");
            }
            winnerExists = true;

        }
}

int TicTacToe::whoWon(int buttonStatus[9], int winningCases[8][3]){
    int r = 0;
    while(r < 8){
            if(buttonStatus[winningCases[r][0]] == buttonStatus[winningCases[r][1]] && buttonStatus[winningCases[r][1]] == buttonStatus[winningCases[r][2]] && buttonStatus[winningCases[r][1]] != 0){
                return buttonStatus[winningCases[r][0]];
            };
            ++r;
    }
    return 0;
}

int TicTacToe::playerTurn(int buttonIndex){
    if(buttonsStatus[buttonIndex] == 0 && !winnerExists){    //return 1 or 2
        counter++;
        int modulus = counter%2;
        if(modulus == 1){
            buttonsStatus[buttonIndex] = 1;
            ui->player->setText("player 2");
            return 1;
        }else{
            buttonsStatus[buttonIndex] = 2;
            ui->player->setText("player 1");
            return 2;
        }
    };
    return 0;
};

void TicTacToe::on_pushButton_0_clicked()
{

    int player = playerTurn(0);
    if(player == 1){
        ui->pushButton_0->setText("X");
    }else if(player == 2){
        ui->pushButton_0->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_1_clicked()
{
    int player = playerTurn(1);
    if(player == 1){
        ui->pushButton_1->setText("X");
    }else if(player == 2){
        ui->pushButton_1->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_2_clicked()
{
    int player = playerTurn(2);
    if(player == 1){
        ui->pushButton_2->setText("X");
    }else if(player == 2){
        ui->pushButton_2->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_3_clicked()
{
    int player = playerTurn(3);
    if(player == 1){
        ui->pushButton_3->setText("X");
    }else if(player == 2){
        ui->pushButton_3->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_4_clicked()
{
    int player = playerTurn(4);
    if(player == 1){
        ui->pushButton_4->setText("X");
    }else if(player == 2){
        ui->pushButton_4->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_5_clicked()
{
    int player = playerTurn(5);
    if(player == 1){
        ui->pushButton_5->setText("X");
    }else if(player == 2){
        ui->pushButton_5->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_6_clicked()
{
    int player = playerTurn(6);
    if(player == 1){
        ui->pushButton_6->setText("X");
    }else if(player == 2){
        ui->pushButton_6->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_7_clicked()
{
    int player = playerTurn(7);
    if(player == 1){
        ui->pushButton_7->setText("X");
    }else if(player == 2){
        ui->pushButton_7->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
void TicTacToe::on_pushButton_8_clicked()
{
    int player = playerTurn(8);
    if(player == 1){
        ui->pushButton_8->setText("X");
    }else if(player == 2){
        ui->pushButton_8->setText("O");
    }
    if(counter >= 4){DelcareWinner();}
}
