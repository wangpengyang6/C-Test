#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10
#define COL 10

#define ROWS ROW+2
#define COLS COL+2

#define easy_Level 10

//初始化
void init_board(char board[ROWS][COLS], int rows, int cols, char net);
//打印棋盘
void print_board(char board[ROWS][COLS], int row, int col);
//布置雷
void get_mine(char mine[ROWS][COLS], int row, int col, int Level);
//排查雷
void clear_mine(char mine[ROWS][COLS], char[ROWS][COLS], int row, int col);
//统计某坐标周围雷的个数
int round_count(char mine[ROWS][COLS], int row, int col);
//递归展开
void spread(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
