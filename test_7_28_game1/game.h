#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 3
#define COL 3
//��ʼ��
void init_board(char board[ROW][COL], int row, int col);
//��ӡ
void print_black(char board[ROW][COL], int row, int col);
//����ƶ�
void people_move(char board[ROW][COL], int row, int col);
//�����ƶ�
void computer_move(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char is_win(char board[ROW][COL], int row, int col);
//�ж���������
int is_full(char board[ROW][COL], int row, int col);