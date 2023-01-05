#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>
#include <tchar.h>

#include<windows.h>//windows的一个API
#include<mmsystem.h>//多媒体设备接口的头文件
#pragma comment(lib,"winmm.lib")//加载一下静态库（winmm.h）
#define ROW 20//最大行格子数
#define COL 20//最大列格子数

int a = 10;//游戏行格子数
int b = 10;//游戏列格子数
int size = 25;//窗口扩大的尺寸
int choice = 0;//看用户是否进行选择
int begin = 1;//判断是否开始游戏
int Difficulty = 5;//坤坤的数量
int cnt;//用来记录打开的格子的数量
bool isOver = false;//判断游戏输赢


//显示菜单
void Gamemenu();
//显示进行游戏难度的选择
void DifficultySelection();
//初始化地图
void init_board(int map[][20], int Difficulty, int a, int b);
//绘制地图
void draw_board(int map[][20], IMAGE img[], int a, int b);
//鼠标点击回应
void mouseEvent(int map[][20], IMAGE img[], int Difficulty, int a, int b);
//递归展开周围非坤坤区
void spread(int map[][20], int row, int col, int a, int b);
//判断游戏是否结束
void judge(int map[][20], int row, int col, int Difficulty, int a, int b);
//显示地图
void print_board(int map[ROW][COL], int a, int b);


//显示菜单1
void Gamemenu()
{
	HWND hwnd = initgraph(400, 400);
	setbkcolor(RGB(153, 122, 141));
	cleardevice();
	//准备过程
	while (begin)
	{
		settextcolor(BLACK);
		rectangle(80, 50, 250, 120);
		outtextxy(130, 80, "开始游戏");
		rectangle(80, 150, 250, 220);
		outtextxy(130, 180, "难度选择");
		outtextxy(30, 280, "提示:");
		outtextxy(105, 305, "游戏默认坤坤难度，可以选择难度");
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

//显示进行游戏难度的选择
void DifficultySelection()
{

	while (choice)
	{
		settextcolor(BLACK);
		rectangle(80, 50, 250, 120);
		outtextxy(130, 80, "坤坤");
		rectangle(80, 150, 250, 220);
		outtextxy(130, 180, "小黑子");
		rectangle(80, 250, 250, 320);
		outtextxy(130, 280, "ikun");
		MOUSEMSG msg = GetMouseMsg();
		int x = msg.x;
		int y = msg.y;
		switch (msg.uMsg)
		{
		case  WM_LBUTTONDOWN:
			if (x >= 80 && x <= 250 && y >= 50 && y <= 120)   //改变游戏难度,地图大小，坤坤的数量
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

//显示地图
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
//初始化地图
void init_board(int map[][20], int Difficulty, int a, int b)
{
	//每次游戏前重置地图 （置0）
	cnt = 0;
	memset(map, 0, ROW * COL * sizeof(int));
	//给地图里随机埋坤坤，坤坤用-1表示
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

	//坤坤所在的九宫格所有的格子的数值加一  （坤坤除外）  遍历地图
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			//遍历坤坤所在的九宫格
			if (map[i][k] == -1)
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = k - 1; c <= k + 1; c++)
					{
						//边界九宫格可能会越界(数组越界问题)
						if ((c >= 0 && c < a) && (r >= 0 && r < b) && (map[r][c] != -1))
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}
	//把所有的格子用遮罩图盖起来，给每个格子都加个密，+20
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			map[i][k] += 20;
		}
	}
}
//绘制地图
void draw_board(int map[][20], IMAGE img[], int a, int b)
{
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			//空白格子和数字
			if (map[i][k] >= 0 && map[i][k] <= 8)
			{
				putimage(k * size, i * size, img + map[i][k]);//数量贴图

			}//坤坤
			else if (map[i][k] == -1)
			{
				putimage(k * size, i * size, img + 9);//坤坤贴图
			}
			else if (map[i][k] >= 19 && map[i][k] <= 28)//坤头贴图
			{
				putimage(k * size, i * size, img + 10);
			}
			else if (map[i][k] > 30)//插旗子贴图
			{
				putimage(k * size, i * size, img + 11);
			}
		}
	}
}
//鼠标点击回应
void mouseEvent(int map[][20], IMAGE img[], int Difficulty, int a, int b)
{
	//定义消息结构体（鼠标，按键，字符消息）
	ExMessage msg;
	if (peekmessage(&msg, EX_MOUSE))
	{
		//把鼠标的坐标转成数组的下标
		int r = msg.y / size;
		int c = msg.x / size;
		if (msg.message == WM_LBUTTONDOWN)//按下左键
		{
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;
				spread(map, r, c,a,b);
				judge(map, r, c, Difficulty,a,b);
				print_board(map,a,b);
			}
		}
		if (msg.message == WM_RBUTTONDOWN)//按下右键
		{
			if (map[r][c] >= 19 && map[r][c] <= 28) //插旗
			{
				map[r][c] += 20;
			}
			else if (map[r][c] > 30)//取消插旗
			{
				map[r][c] -= 20;
			}
		}
	}
}
//展开周围非坤坤区（递归）
void spread(int map[][20], int row, int col, int a, int b)
{
	//判断当前点击的是不是空白
	if (map[row][col] == 0)
	{		//遍历九宫格   递归展开
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
//判断游戏是否结束
void judge(int map[][20], int row, int col, int Difficulty, int a, int b)
{
	//如果点到了坤坤，就game over点一个坤坤，其他的坤坤都显示出来
	if (map[row][col] == -1)
	{
		for (int i = 0; i < a; i++)
		{
			for (int k = 0; k < b; k++)
			{
				if (map[i][k] == 19)
				{
					map[i][k] -= 20;//  或者直接赋值成-1（坤坤）
				}
			}
		}
		isOver = true;
	}
	//遍历地图，统计打开过的格子数量
	int cnt = 0;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < b; k++)
		{
			if (map[i][k] <= 8 && map[i][k] >= 0)
				cnt++;
		}
	}

	//游戏成功
	if (cnt == a * b - Difficulty)
	{
		int isok = MessageBox(GetHWnd(), "恭喜你成为一名真正的ikun\n是否还要继续增加练习时长", "提示：", MB_OKCANCEL);
		if (isok == IDOK)
		{
			init_board(map,Difficulty,a,b);
			print_board(map,a,b);
			isOver = false;
		}
		else
		{
			exit(-1);//退出程序
		}
	}
}

int main()
{

	Gamemenu();//游戏菜单
	cleardevice();//清屏

	DifficultySelection();//游戏模式选择
	cleardevice();

	initgraph(a * size, b* size);
	//设置随机数种子
	srand((unsigned int)time(NULL));

	//定义游戏地图
	int map[ROW][COL] = { 0 };
	//初始化数据
	init_board(map, Difficulty,a,b);
	//把数据转成对应的图形界面
	IMAGE img[12];//定义图片数组
	//加载图片
	for (int i = 0; i < 12; i++)
	{
		char fileName[50] = { 0 };
		sprintf(fileName, "./image/%d.jpg", i);
		loadimage(img + i, fileName, size, size);
	}
	//打开音乐
	mciSendString("play ./image/music.mp3", NULL, 0, NULL);
	//把数组里面的数据转换成对应的图片，贴图贴到图形窗口上
	while (1)
	{
		mouseEvent(map, img, Difficulty,a,b);
		draw_board(map, img,a,b);
		if (isOver)
		{
			//游戏失败
			int ret = MessageBox(GetHWnd(), "很糟糕，你点到了坤坤,\n是否还要继续增加练习时长", "提示：", MB_OKCANCEL);//消息框含有两个按钮：OK和Cancel
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
	//显示地图
	print_board(map,a,b);
	//关闭音乐
	mciSendString("close ./image/music.mp3", NULL, 0, NULL);
	getchar();
	closegraph();
	return 0;
}