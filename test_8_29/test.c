#define  _CRT_SECURE_NO_WARNINGS 

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count = 0;
    int i = 0;
    int n = 0;
    int max = 0;
    int arr[100000] = { 0 };
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            arr[n++] = count;
            count = 0;
        }
    }
    if (nums[numsSize - 1] = 1)
    {
        arr[n++] = count;
    }
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}


leetcode 题号：485. 最大连续 1 的个数

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int count = 0;
    int sum = 0;
    for (i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            count++;
            sum = 0;
        }
    }
    printf("%d", count);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d", &n);

    int i = 0;
    int count = 0;
    int sum = 0;
    for (i = 2; i <= n; i++)
    {
        int j = 0;
        sum = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                sum += j;
                if (j != sqrt(i))//28   
                    sum += (i / j);
            }
        }
        if (sum == i)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

HJ56 完全数计算

