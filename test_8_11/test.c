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
	����ָ��
	int (*parr[5])(int, int);
	����ָ������
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

ģ��ʵ�� strcpy

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
	printf("����������ҵ�����:>");
	scanf("%d",&n);
	int ret = seek(arr, n, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ��ˣ��±���:%d %d",x,y);
	}
	else
		printf("û�ҵ�");
	return 0;
}

��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

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

��ӡ��ά����

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
	printf("����������������ĸ�ĸ���:>\n");
	scanf("%d",&k);
	printf("��תǰ��%s\n",arr);
	while (k)
	{
		change(arr, len);
		k--;
	}
	printf("��ת��%s\n", arr);
	return 0;
}

ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB

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
				printf("arr_2����arr_1��ת�ַ��õ�\n");
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
				printf("arr_2����arr_1��ת�ַ��õ�\n");
				break;
			}
			count++;
		}
	return 0;
}


дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

