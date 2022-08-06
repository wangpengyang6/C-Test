#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void change(char* arr)
{
    int tmp = *arr;
    int ret = strlen(arr);
    *arr = *(arr + ret - 1);
    *(arr + ret - 1) = '\0';
    if (*(arr + 1) > 1)
        change(arr + 1);
    *(arr + ret - 1) = tmp;
}
int main()
{
    char arr[10001] = {0} ;
    gets(arr);
    change(arr);
    puts(arr);
    return 0;
}

[编程题]字符逆序

#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (5 - i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
打印菱形

#include<stdio.h>
#include<math.h>
int power_s(int i, int power)
{
	int sum = 0;
	while (i)
	{
		int tmp = i % 10;
		i /= 10;
		sum += pow(tmp, power);
	}
	return sum;
}
int main()
{
	int i = 0;
	for (i = 0; i < 100001; i++)
	{
		int power = 0;
		int m = i;
		while (m)
		{
			m /= 10;
			power++;
		}
		int ret = power_s(i, power);
		if (ret == i)
			printf("%d ",i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int n = 0;
	printf("请输入1-9之间的数字:>");
	scanf("%d",&n);
	int sum = n;
	int t = n;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		t *= 10;
		t += n;
		sum += t;
	}
	printf("%d",sum);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* arr;
    int* brr;
    int m, n, i;
    int f1 = 0;
    int f2 = 0;
    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int) * (n + 1));
    brr = (int*)malloc(sizeof(int) * (m + 1));
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d ", &brr[i]);
    }
    i = 0;
    while (i < (m + n))
    {
        if (f1 == n) {
            printf("%d ", brr[f2++]);
        }
        else if (f2 == m) {
            printf("%d ", arr[f1++]);
        }
        else if (arr[f1] >= brr[f2]) {
            printf("%d ", brr[f2++]);
        }
        else if (brr[f2] >= arr[f1]) {
            printf("%d ", arr[f1++]);
        }
        i++;
    }
    free(arr);
    free(brr);
    return 0;
}
 
BC100 有序序列合并

#include<stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j < i; j++)
            {
                printf("  ");
            }
            for (j = 0; j <= n - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
 
BC65 - 箭形图案

#include<stdio.h>
int main()
{
    int n, i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j || j == n - 1 - i)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}

BC68 X形图案