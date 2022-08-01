#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 125;//01111101
	int i = 0;
	printf("偶数位：");
	for (i = 31; i >= 0; i-=2)
	{
		if (((n >> i) & 1) == 1)
		{
			printf("1 ");
		}
		else
			printf("0 ");
	}
	printf("\n奇数位：");
	for (i = 30; i >= 0; i -= 2)
	{
		if (((n >> i) & 1) == 1)
		{
			printf("1 ");
		}
		else
			printf("0 ");
	}
	return 0;
}

打印整数二进制的奇数位和偶数位


#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[n][n];
    int i = 0;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i][j] != 0)
            {
                count = 0;
            }
        }
    }
    if (count)
        printf("YES");
    else
        printf("NO");
    return 0;
}

BC106 上三角矩阵判定

#include<stdio.h>
void six_change(int n)
{
    int ret = 0;
    if (n > 5)
    {
        int ret = n % 6;
        n /= 6;
        six_change(n);
        printf("%d", ret);
    }
    else
        printf("%d", n);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    six_change(n);
    return 0;
}

6进制转换

#include<stdio.h>
int main()
{
    int N = 0;
    scanf("%d", &N);
    int arr[N];
    int i = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    for (i = 0; i < N; i++)
    {
        if (arr[i] != del)
            printf("%d ", arr[i]);
    }
    return 0;
}

BC98-序列中删除指定数字

#include<stdio.h>
int main()
{
    long long n, m, rem;
    scanf("%ld %ld", &n, &m);
    long long sum;
    sum = n * m;
    while (m)
    {
        rem = n % m;
        n = m;
        m = rem;
    }
    printf("%ld", n + (sum / n));
    return 0;
}

BC115 - 小乐乐与欧几里得（最大公约数）

#include<stdio.h>
int fb(int m)
{
    int a = 1;
    int b = 2;
    if (m == 1)
    {
        return a;
    }
    if (m == 2)
        return b;
    else
    {
        return fb(m - 1) + fb(m - 2);
    }
}
int main()
{
    int fb(int m);
    int n;
    scanf("%d", &n);
    printf("%d", fb(n));
    return 0;
}

BC166 小乐乐走台阶