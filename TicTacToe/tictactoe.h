#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TicTacToe; }
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

private slots:
    void on_pushButton_0_clicked();
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    int playerTurn(int buttonIndex);

private:
    Ui::TicTacToe *ui;
    int counter;
    int buttonsStatus[9] = {0};
};
#endif // TICTACTOE_H
