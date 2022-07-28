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
		printf("����ƶ�:\n");
		people_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		print_black(board, ROW, COL);
		printf("�����ƶ�:\n");
		computer_move(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		print_black(board, ROW, COL);

	} 
	if (ret == '*')
	{
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");

	}
	else if (ret == 'Q')
	{
		printf("ƽ��");

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
		printf("��ѡ��1/0:>");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0 :
				printf("�˳���Ϸ\n");
				break;
			default :
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}