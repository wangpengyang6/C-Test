#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void init_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void print_black(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}
}


void people_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("ÇëÊäÈëÏÂÆå×ø±ê:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("ÊäÈë´íÎóÇëÖØÐÂÊäÈë\n");
		}

	}
	//print_black(board, ROW, COL);

}


int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (' ' == board[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}

void computer_move(char board[ROW][COL], int row, int col)
{
	while (1)
	{

		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//ÅÐ¶ÏºáÏò
	for (i = 0; i < row; i++)
	{
		int pum = 0;
		int cum = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
			{
				pum++;
			}
			if (board[i][j] == '#')
			{
				cum++;
			}
		}
		if (pum == col)
		{
			return'*';
		}
		if (cum == col)
		{
			return '#';
		}
	}
	//ÅÐ¶Ï×ÝÏò
	for (i = 0; i < row; i++)
	{
		int pum = 0;
		int cum = 0;
		for (j = 0; j < col; j++)
		{
			if (board[j][i] == '*')
			{
				pum++;
			}
			if (board[j][i] == '#')
			{
				cum++;
			}
		}
		if (pum == col)
		{
			return'*';
		}
		if (cum == col)
		{
			return '#';
		}
	}
	//ÅÐ¶ÏÕý¶Ô½ÇÏß
	int p = 0;
	int c = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][i] == '*')
		{
			p++;
		}
		if (board[i][i] == '#')
		{
			c++;
		}
	}
	if (p == row)
	{
		return '*';
	}
	if (c == row)
	{
		return '#';
	}
	//ÅÐ¶Ï·´¶Ô½ÇÏß
	p = 0;
	c = 0;
	const int sum = row;
	for (i = 0; i < row; i++)
	{
		if (board[i][sum - 1 - i] == '*')
		{
			p++;
		}
		if (board[i][sum - 1 - i] == '#')
		{
			c++;
		}

	}
	if (p == row)
	{
		return '*';
	}
	if (c == row)
	{
		return '#';
	}
	//ÅÐ¶ÏÆåÅÌÂúÆå×Ó
	if (is_full(board,ROW,COL) == 1)
	{
		return'Q';
	}
	return'C';
}