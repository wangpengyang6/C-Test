#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char board[ROWS][COLS], int rows, int cols, char net)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = net;
		}
	}
}

void print_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("———————————————扫雷游戏———————————————\n");
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		printf(" %2d ", i);
		if (i < row)
		{
			printf("|");
		}
	}
	printf("\n");
	printf("    ");
	for (i = 0; i <= row+1; i++)
	{
		printf("——");
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf(" %2d |",i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("  %c  ", board[i][j]);
		}
		printf("\n");
	}
}

void get_mine(char mine[ROWS][COLS], int row, int col, int level)
{

	while (level)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] != '1')
			{
				mine[x][y] = '1';
				level--;
			}
		}
	}
}

int round_count(char mine[ROWS][COLS], int row, int col)
{
	int i = 0;
	int sum = 0;
	for (i = row - 1; i <= row + 1; i++)
	{
		int j = 0;
		for (j = col - 1; j <= col + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				sum++;
			}
		}
	}
	return sum;
}

void spread(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{
	if (x > 0 && x <= ROW && y > 0 && y <= COL)
	{
		int count = round_count(mine, x, y);
		if (count != 0)
		{
			show[x][y] = count + '0';
		}
		else if (show[x][y] != ' ')
		{
			show[x][y] = ' ';
			int i = 0;
			for (int i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{
					spread(show, mine, i, j);
				}
			}
		}
		else
		{
			return;
		}
	}
}

void clear_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	print_board(show, ROW, COL);
	while (win <= row * col - easy_Level)
	{
		printf("请输入你想排查雷的坐标(类似于1 1):>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				printf("不好意思，你被雷炸了，游戏结束\n");
				print_board(mine, ROW, COL);
				break;
			}
			else
			{
				spread(show, mine, x, y);
				print_board(show, ROW, COL);
                win++;
			}
		}
		else
		{
			printf("坐标输入错误,请重新输入\n");
		}
	}
	if (win == row * col - easy_Level)
	{
		printf("恭喜你，排雷成功\n");
		print_board(mine, ROW, COL);
	}
}