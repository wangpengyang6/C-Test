#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("***********1.play*********\n");
	printf("***********0.exit*********\n");
	printf("**************************\n");

}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	init_board(board, ROW, COL);
	print_black(board, ROW, COL);
	while (1)
	{
		printf("玩家移动:\n");
		people_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		print_black(board, ROW, COL);
		printf("电脑移动:\n");
		computer_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		print_black(board, ROW, COL);

	} 
	if (ret == '*')
	{
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利\n");

	}
	else if (ret == 'Q')
	{
		printf("平局");

	}
	print_black(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择1/0:>");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0 :
				printf("退出游戏\n");
				break;
			default :
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}