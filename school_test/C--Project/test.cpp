#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>
#include <tchar.h>

#include<windows.h>//windows��һ��API
#include<mmsystem.h>//��ý���豸�ӿڵ�ͷ�ļ�
#pragma comment(lib,"winmm.lib")//����һ�¾�̬�⣨winmm.h��
#define ROW 20//����и�����
#define COL 20//����и�����

int a = 10;//��Ϸ�и�����
int b = 10;//��Ϸ�и�����
int size = 25;//��������ĳߴ�
int choice = 0;//���û��Ƿ����ѡ��
int begin = 1;//�ж��Ƿ�ʼ��Ϸ
int Difficulty = 5;//����������
int cnt;//������¼�򿪵ĸ��ӵ�����
bool isOver = false;//�ж���Ϸ��Ӯ


//��ʾ�˵�
void Gamemenu();
//��ʾ������Ϸ�Ѷȵ�ѡ��
void DifficultySelection();
//��ʼ����ͼ
void init_board(int map[][20], int Difficulty, int a, int b);
//���Ƶ�ͼ
void draw_board(int map[][20], IMAGE img[], int a, int b);
//�������Ӧ
void mouseEvent(int map[][20], IMAGE img[], int Difficulty, int a, int b);
//�ݹ�չ����Χ��������
void spread(int map[][20], int row, int col, int a, int b);
//�ж���Ϸ�Ƿ����
void judge(int map[][20], int row, int col, int Difficulty, int a, int b);
//��ʾ��ͼ
void print_board(int map[ROW][COL], int a, int b);


//��ʾ�˵�1
void Gamemenu()
{
	HWND hwnd = initgraph(400, 400);
	setbkcolor(RGB(153, 122, 141));
	cleardevice();
	//׼������
	while (begin)
	{
		settextcolor(BLACK);
		rectangle(80, 50, 250, 120);
		outtextxy(130, 80, "��ʼ��Ϸ");
		rectangle(80, 150, 250, 220);
		outtextxy(130, 180, "�Ѷ�ѡ��");
		outtextxy(30, 280, "��ʾ:");
		outtextxy(105, 305, "��ϷĬ�������Ѷȣ�����ѡ���Ѷ�");
		MOUSEMSG msg = GetMouseMsg();
		int x = msg.x;
		int y = msg.y;
		switch (msg.uMsg)
		{
		case  WM_LBUTTONDOWN:
			if (x >= 80 && x <= 250 && y >= 50 && y <= 120)
			{
				begin = 0;
			}
			else if (x >= 80 && x <= 250 && y >= 150 && y <= 220)
			{

				begin = 0;
				choice = 1;
			}
			break;

		}
	}

}

//��ʾ������Ϸ�Ѷȵ�ѡ��
void DifficultySelection()
{

	while (choice)
	{
		settextcolor(BLACK);
		rectangle(80, 50, 250, 120);
		outtextxy(130, 80, "����");
		rectangle(80, 150, 250, 220);
		outtextxy(130, 180, "С����");
		rectangle(80, 250, 250, 320);
		outtextxy(130, 280, "ikun");
		MOUSEMSG msg = GetMouseMsg();
		int x = msg.x;
		int y = msg.y;
		switch (msg.uMsg)
		{
		case  WM_LBUTTONDOWN:
			if (x >= 80 && x <= 250 && y >= 50 && y <= 120)   //�ı���Ϸ�Ѷ�,��ͼ��С������������
			{
				choice = 0;
				cleardevice();
				a = 10;
				b = 10;
				size = 25;
				Difficulty = 5;

			}
			else if (x >= 80 && x <= 250 && y >= 150 && y <= 220)
			{
				cleardevice();
				choice = 0;
				a = 17;
				b = 17;
				size = 27;
				Difficulty = 30;
			}
			else if (x >= 80 && x <= 250 && y >= 250 && y <= 320)
			{
				cleardevice();
				choice = 0;
				a = 20;
				b = 20;
				size = 30;
				Difficulty = 100;
			}
			break;

		}
	}

}

//��ʾ��ͼ
void print_board(int map[][20],int a,int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			printf("%2d ", map[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}
//��ʼ����ͼ
void init_board(int map[][20], int Difficulty, int a, int b)
{
	//ÿ����Ϸǰ���õ�ͼ ����0��
	cnt = 0;
	memset(map, 0, ROW * COL * sizeof(int));
	//����ͼ�������������������-1��ʾ
	for (int i = 0; i < Difficulty;)
	{
		int r = rand() % a;  //[0,a)
		int c = rand() % b;  //[0,b)

		if (r >= 1 && r <= a && c >= 1 && c <= b)
		{
			if (map[r][c] == 0)
			{
				map[r][c] = -1;
				i++;
			}
		}
	}

	//�������ڵľŹ������еĸ��ӵ���ֵ��һ  ���������⣩  ������ͼ
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			//�����������ڵľŹ���
			if (map[i][k] == -1)
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = k - 1; c <= k + 1; c++)
					{
						//�߽�Ź�����ܻ�Խ��(����Խ������)
						if ((c >= 0 && c < a) && (r >= 0 && r < b) && (map[r][c] != -1))
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}
	//�����еĸ���������ͼ����������ÿ�����Ӷ��Ӹ��ܣ�+20
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			map[i][k] += 20;
		}
	}
}
//���Ƶ�ͼ
void draw_board(int map[][20], IMAGE img[], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			//�հ׸��Ӻ�����
			if (map[i][k] >= 0 && map[i][k] <= 8)
			{
				putimage(k * size, i * size, img + map[i][k]);//������ͼ

			}//����
			else if (map[i][k] == -1)
			{
				putimage(k * size, i * size, img + 9);//������ͼ
			}
			else if (map[i][k] >= 19 && map[i][k] <= 28)//��ͷ��ͼ
			{
				putimage(k * size, i * size, img + 10);
			}
			else if (map[i][k] > 30)//��������ͼ
			{
				putimage(k * size, i * size, img + 11);
			}
		}
	}
}
//�������Ӧ
void mouseEvent(int map[][20], IMAGE img[], int Difficulty, int a, int b)
{
	//������Ϣ�ṹ�壨��꣬�������ַ���Ϣ��
	ExMessage msg;
	if (peekmessage(&msg, EX_MOUSE))
	{
		//����������ת��������±�
		int r = msg.y / size;
		int c = msg.x / size;
		if (msg.message == WM_LBUTTONDOWN)//�������
		{
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;
				spread(map, r, c,a,b);
				judge(map, r, c, Difficulty,a,b);
				print_board(map,a,b);
			}
		}
		if (msg.message == WM_RBUTTONDOWN)//�����Ҽ�
		{
			if (map[r][c] >= 19 && map[r][c] <= 28) //����
			{
				map[r][c] += 20;
			}
			else if (map[r][c] > 30)//ȡ������
			{
				map[r][c] -= 20;
			}
		}
	}
}
//չ����Χ�����������ݹ飩
void spread(int map[][20], int row, int col, int a, int b)
{
	//�жϵ�ǰ������ǲ��ǿհ�
	if (map[row][col] == 0)
	{		//�����Ź���   �ݹ�չ��
		for (int i = row - 1; i <= row + 1; i++)
		{
			for (int k = col - 1; k <= col + 1; k++)
			{
				if ((i >= 0 && i < a) && (k >= 0 && k < b) && map[i][k] >= 19 && map[i][k] <= 28)
				{
					map[i][k] -= 20;
					spread(map, i, k,a,b);
				}
			}
		}
	}
	else
		return;
}
//�ж���Ϸ�Ƿ����
void judge(int map[][20], int row, int col, int Difficulty, int a, int b)
{
	//����㵽����������game over��һ����������������������ʾ����
	if (map[row][col] == -1)
	{
		for (int i = 0; i < a; i++)
		{
			for (int k = 0; k < b; k++)
			{
				if (map[i][k] == 19)
				{
					map[i][k] -= 20;//  ����ֱ�Ӹ�ֵ��-1��������
				}
			}
		}
		isOver = true;
	}
	//������ͼ��ͳ�ƴ򿪹��ĸ�������
	int cnt = 0;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			if (map[i][k] <= 8 && map[i][k] >= 0)
				cnt++;
		}
	}

	//��Ϸ�ɹ�
	if (cnt == a * b - Difficulty)
	{
		int isok = MessageBox(GetHWnd(), "��ϲ���Ϊһ��������ikun\n�Ƿ�Ҫ����������ϰʱ��", "��ʾ��", MB_OKCANCEL);
		if (isok == IDOK)
		{
			init_board(map,Difficulty,a,b);
			print_board(map,a,b);
			isOver = false;
		}
		else
		{
			exit(-1);//�˳�����
		}
	}
}

int main()
{

	Gamemenu();//��Ϸ�˵�
	cleardevice();//����

	DifficultySelection();//��Ϸģʽѡ��
	cleardevice();

	initgraph(a * size, b* size);
	//�������������
	srand((unsigned int)time(NULL));

	//������Ϸ��ͼ
	int map[ROW][COL] = { 0 };
	//��ʼ������
	init_board(map, Difficulty,a,b);
	//������ת�ɶ�Ӧ��ͼ�ν���
	IMAGE img[12];//����ͼƬ����
	//����ͼƬ
	for (int i = 0; i < 12; i++)
	{
		char fileName[50] = { 0 };
		sprintf(fileName, "./image/%d.jpg", i);
		loadimage(img + i, fileName, size, size);
	}
	//������
	mciSendString("play ./image/music.mp3", NULL, 0, NULL);
	//���������������ת���ɶ�Ӧ��ͼƬ����ͼ����ͼ�δ�����
	while (1)
	{
		mouseEvent(map, img, Difficulty,a,b);
		draw_board(map, img,a,b);
		if (isOver)
		{
			//��Ϸʧ��
			int ret = MessageBox(GetHWnd(), "����⣬��㵽������,\n�Ƿ�Ҫ����������ϰʱ��", "��ʾ��", MB_OKCANCEL);//��Ϣ����������ť��OK��Cancel
			if (ret == IDOK)
			{
				init_board(map,Difficulty,a,b);
				print_board(map,a,b);
				isOver = false;
			}
			else if (ret == IDCANCEL)
			{
				break;
			}
		}
	}
	//��ʾ��ͼ
	print_board(map,a,b);
	//�ر�����
	mciSendString("close ./image/music.mp3", NULL, 0, NULL);
	getchar();
	closegraph();
	return 0;
}