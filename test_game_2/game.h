#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10
#define COL 10

#define ROWS ROW+2
#define COLS COL+2

#define easy_Level 10

//��ʼ��
void init_board(char board[ROWS][COLS], int rows, int cols, char net);
//��ӡ����
void print_board(char board[ROWS][COLS], int row, int col);
//������
void get_mine(char mine[ROWS][COLS], int row, int col, int Level);
//�Ų���
void clear_mine(char mine[ROWS][COLS], char[ROWS][COLS], int row, int col);
//ͳ��ĳ������Χ�׵ĸ���
int round_count(char mine[ROWS][COLS], int row, int col);
//�ݹ�չ��
void spread(char show[ROWS][COLS], char mine[ROWS][COLS], int row, int col);
