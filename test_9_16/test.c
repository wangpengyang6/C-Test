#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    int s = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < 9; i++)
    {
        int m = n % 10;
        if (m % 2 == 1)
            m = 1;
        else
            m = 0;
        n /= 10;
        s += m * pow(10, i);
    }
    printf("%d", s);
    return 0;
}

BC116 小乐乐改数字

#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - i - 1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}

BC67 正斜线形图案

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* e1, const void* e2)
{
    return *(int*)e2 - *(int*)e1;
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
    qsort(arr, n, sizeof(int), cmp);
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

BC39 - 争夺前五名

#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        for (i = 1; i <= n; i++)
        {
            int j = 0;
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }
    return 0;
}

BC75 数字三角形

int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    int sum_nums = numsSize;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        sum_nums += i;
    }
    return sum_nums - sum;
}


leetcode 消失的数字