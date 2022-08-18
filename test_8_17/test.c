#define  _CRT_SECURE_NO_WARNINGS 1
#define INT int*
#include<stdio.h>
int dominantIndex(int* nums, int numsSize) {
    int max = *nums;
    int index = 0;
    int i = 0;
    for (i = 1; i < numsSize; i++)
    {
        if (max < *(nums + i))
        {
            max = *(nums + i);
            index = i;
        }
    }
    for (i = 0; i < numsSize; i++)
    {
        if (max >= (*(nums + i) * 2))
        {
            return -1;
        }
    }
    return index;
}
int main()
{
    int nums[4] = {1,2,3,4};
    int sz = 4;
    int x = dominantIndex(nums, 4);
    printf("%d",x);
    return 0;
}

求两个数二进制中不同位的个数

int convertInteger(int A, int B) {
    int i = 0;
    int ret = A ^ B;
    int sum = 0;
    for (i = 0; i < 32; i++)
    {
        if ((ret & 1) == 1)
        {
            sum++;
        }
        ret >>= 1;
    }
    return sum;
}
Leetcode 面试题 05.06.整数转换


int dominantIndex(int* nums, int numsSize) {
    int i = 0;
    int max = 0;
    int less = 0;
    int index = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (*(nums + i) > max)
        {
            less = max;
            max = *(nums + i);
            index = i;
        }
        else if (*(nums + i) > less)
        {
            less = *(nums + i);
        }
    }
    return max >= 2 * less ? index : -1;
}

leetcode 747. 至少是其他数字两倍的最大数