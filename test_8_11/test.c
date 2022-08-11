#define  _CRT_SECURE_NO_WARNINGS 1
void (*signal(int,void(*)(int)))(int)

#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*pa)(int,int) = &Add;
	函数指针
	int (*parr[5])(int, int);
	函数指针数组
	printf("%d",pa(3,5));
	return 0;
}

#include<stdio.h>
void my_strcpy(char* brr, char* arr)
{
	while (*brr++ = *arr++)
	{
		;
	}
}
int main()
{
	char arr[15] = "Hello world";
	char brr[15] = { 0 };
	my_strcpy(brr, arr);
	printf("%s", brr);
	return 0;
}

模拟实现 strcpy

#include<stdio.h>
int seek(int(*p)[3], int n, int* x, int* y)
{
	int row = 0;
	int col = *y - 1;
	while (n >= p[0][0] && n <= p[(*x)-1][(*y)-1])
	{
		while (n <= *(*(p + row) + col))
		{
			if (n == *(*(p + row) + col))
			{
				*x = row;
				*y = col;
				return 1;
			}
			else
				col--;
		}
		row++;
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,3,5}, {2,4,6} ,{3,7,10} };
		 1 3 5
 		 2 4 6
		 3 7 10
	int n = 0;
	int x = 3;
	int y = 3;
	printf("输入你想查找的数字:>");
	scanf("%d",&n);
	int ret = seek(arr, n, &x, &y);
	if (ret == 1)
	{
		printf("找到了，下标是:%d %d",x,y);
	}
	else
		printf("没找到");
	return 0;
}

有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

#include<stdio.h>
void seek(int(*p)[3])
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][3] = { {1,3,5}, {2,4,6} ,{3,7,10} };
	// 1 3 5
    // 2 4 6
    // 3 7 10
	seek(arr);
	return 0;
}

打印二维数组

#include<stdio.h>
#include<string.h>
void change(char* p, int len)
{
	int i = 0;
	char tmp = *p;
	for (i = 0; i < len - 1; i++)
	{
		*(p+i) = *(p + i + 1);
	}
	*(p + len - 1) = tmp;

}
int main()
{
	char arr[10] = "ABCD";
	int len = strlen(arr);
	int k = 0;
	printf("请输入你想左旋字母的个数:>\n");
	scanf("%d",&k);
	printf("旋转前：%s\n",arr);
	while (k)
	{
		change(arr, len);
		k--;
	}
	printf("旋转后：%s\n", arr);
	return 0;
}

实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
void change_left(char* p, int len)
{
	int i = 0;
	char tmp = *p;
	for (i = 0; i < len - 1; i++)
	{
		*(p + i) = *(p + i + 1);
	}
	*(p + len - 1) = tmp;
}
void change_right(char* p, int len)
{
	int i = 0;
	char tmp = *(p + len - 1);
	for (i = len - 2; i >= 0; i--)
	{
		*(p + i + 1) = *(p + i);
	}
	*p = tmp;
}
int main()
{
	char arr_1[10] = "AABCD";
	char arr_2[10] = "BCDAA";
	int len = strlen(arr_1);
	int count = 0;
		while (count < len)
		{
			change_left(arr_1, len);
			if (strcmp(arr_1, arr_2) == 0)
			{
				printf("arr_2可由arr_1左转字符得到\n");
				break;
			}
			count++;
		}
		count = 0;
		while (count < len)
		{
			change_right(arr_1, len);
			if (strcmp(arr_1, arr_2) == 0)
			{
				printf("arr_2可由arr_1右转字符得到\n");
				break;
			}
			count++;
		}
	return 0;
}


写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

