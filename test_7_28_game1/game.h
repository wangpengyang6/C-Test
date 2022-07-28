#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//初始化
void init_board(char board[ROW][COL], int row, int col);
//打印
void print_black(char board[ROW][COL], int row, int col);
//玩家移动
void people_move(char board[ROW][COL], int row, int col);
//电脑移动
void computer_move(char board[ROW][COL], int row, int col);
//判断输赢
char is_win(char board[ROW][COL], int row, int col);
//判断棋盘满了
int is_full(char board[ROW][COL], int row, int col);