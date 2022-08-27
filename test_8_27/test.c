#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int census(char arr[])
{
    int len = strlen(arr);
    int str[128] = { 0 };
    int i = 0;
    int sum = 0;
    for (i = 0; i < len; i++)
    {
        if (str[(int)arr[i]] == 0)
        {
            sum++;
        }
        str[(int)arr[i]] = 1;
    }
    return sum;
}
int main()
{
    char arr[500] = { 0 };
    scanf("%s", arr);
    int ret = census(arr);
    printf("%d", ret);
    return 0;
}

HJ10 字符个数统计

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		continue;
	}
	return 0;
}

int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int mid = numsSize / 2;
    return nums[mid];
}

leetcode 169. 多数元素

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i = 0;
    int sum = 0;
    *returnSize = 0;
    static int ret[10000] = { 0 };
    for (i = left; i <= right; i++)
    {
        int count = 0;
        int m = i;
        int n = i;
        while (m)
        {
            count++;
            m /= 10;
        }
        int j = 0;
        for (j = 0; j < count; j++)
        {
            int s = n % 10;
            if (s == 0 || i % s != 0)
            {

                break;
            }
            else
                n /= 10;
        }
        if (j == count)
        {
            (*returnSize)++;
            ret[sum] = i;
            sum++;
        }
    }
    return ret;
}

 leetcode 题号：728. 自除数

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    static int arr[100000] = { 0 };
    *returnSize = numsSize;
    int left[numsSize];
    int right[numsSize];
    left[0] = 1;
    int i = 0;
    for (i = 1; i < numsSize; i++)
    {
        left[i] = left[i - 1] * nums[i - 1];
    }
    right[numsSize - 1] = 1;
    for (i = numsSize - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] * nums[i + 1];
    }
    for (i = 0; i < numsSize; i++)
    {
        arr[i] = left[i] * right[i];
    }
    return arr;
}

 leetcode 题号：238. 除自身以外数组的乘积


#include<stdio.h>
int func(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x & (x - 1);//与运算
	}
	return count;
}
int main()
{
	int x = -1;
	printf("%d",func(x));
	return 0;
}

#include<stdio.h>
int main()
{
	int count = 0;
	int x = -1;
	while (x)
	{
		count++;
		x = x >> 1;
	}
	printf("%d", count);
	return 0;
}
