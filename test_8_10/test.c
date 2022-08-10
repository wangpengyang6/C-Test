#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}

#include<stdio.h>
void change(int* left, int* right)
{
	while (left < right)
	{
		while(*left % 2 != 0)
		{
			left++;
		}
		while (*right % 2 == 0)
		{
			right--;
		}
		if (*left < *right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
			left++;
			right--;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* left = arr;
	int* right = arr+sz - 1;
	change(left, right);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

调整数组使奇数全部都位于偶数前面。

#include<stdio.h>
int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[15] = "Hello world";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

模拟实现库函数strlen

#include<stdio.h>
void my_strcpy(char* brr,char* arr)
{
	while (*arr != '\0')
	{
		*brr = *arr;
		arr++;
		brr++;
	}
	*(++brr) = '\0';
}
int main()
{
	char arr[15] = "Hello world";
	char brr[15] = { 0 };
	my_strcpy(brr,arr);
	printf("%s",brr);
	return 0;
}

模拟实现库函数strcpy



#include<stdio.h>
void judge(int* p, int n)
{
    int i = 0;
    int count = 0;
    int aount = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (*(p + i) <= *(p + i + 1))
        {
            count++;
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (*(p + i) >= *(p + i + 1))
        {
            aount++;
        }
    }
    if ((count == n - 1) || (aount == n - 1))
        printf("sorted");
    else
        printf("unsorted");
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    judge(arr, n);
    return 0;
}

BC96-有序序列判断

#include<stdio.h>
int main()
{
    int n, i, tem, j, max, min;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
    max = arr[n - 1];
    min = arr[0];
    printf("%d", max - min);
    return 0;
}

BC95 最高分与最低分之差

#include<stdio.h>
int main()
{
	int arr[10][10] = {1};
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{

				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];

			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

杨辉三角