#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define easy_Level 10

void init_board(char board[ROWS][COLS], int rows, int cols, char net);

void print_board(char board[ROWS][COLS], int row, int col);

void get_mine(char mine[ROWS][COLS], int row, int col, int Level);

void clear_mine(char mine[ROWS][COLS], char[ROWS][COLS], int row, int col);

int round_count(char mine[ROWS][COLS], int row, int col);

void spread(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
