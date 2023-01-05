#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && a == c && b == c)
                printf("Equilateral triangle!\n");
            else if (a == b || a == c || b == c)
                printf("Isosceles triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    return 0;
}

BC51 

#include<stdio.h>
int main()
{
    char n = 0;
    int a = 0;
    int b = 0;
    while (1)
    {
        scanf("%c", &n);
        if (n == 'A')
        {
            a++;
        }
        else if (n == 'B')
        {
            b++;
        }
        else
            break;
    }
    if (a > b)
        printf("A\n");
    else if (a < b)
        printf("B\n");
    else
        printf("E\n");
}

BC40 

#include<stdio.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int main()
{
    int i = 0;
    int arr[7] = { 0 };
    while (scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
    {
        qsort(arr, 7, 4, cmp);
        double sum = 0.0;
        for (i = 1; i < 6; i++)
        {
            sum += arr[i];
        }
        printf("%.2lf\n", sum / 5);
    }
    return 0;
}

BC76 

#include<stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        switch (n)
        {
        case 200:printf("OK\n");
            break;
        case 202:printf("Accepted\n");
            break;
        case 400:printf("Bad Request\n");
            break;
        case 403:printf("Forbidden\n");
            break;
        case 404:printf("Not Found\n");
            break;
        case 500:printf("Internal Server Error\n");
            break;
        case 502:printf("Bad Gateway\n");
            break;
        default:break;
        }
    }
    return 0;
}

BC74 

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "abcdef";
	memset(arr,'*',3);
	puts(arr);
	return 0;
}