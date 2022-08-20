#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int count = 0;
    int count_1 = 0;
    float sum = 0.0;
    scanf("%d", &n);
    int arr[3] = {0,0,0};
    int i = 0;
    for (i = 0; i < n; i++)
    {
        //scanf("%d", &arr[i]);
        if (arr[i] < 0)
        {
            count++;
        }
        if (arr[i] > 0)
        {
            sum += i;
            count_1++;
        }
    }
    printf("%d %.1f", count, sum / count_1);
    return 0;
}

牛客网题号： HJ97 记负均正

int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    int left = 0;
    int right = rotateArrayLen - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (*(rotateArray + right) > *(rotateArray + mid))
        {
            right = mid;
        }
        else if (*(rotateArray + right) < *(rotateArray + mid))
        {
            left = mid + 1;
        }
        else
            right--;
    }
    return *(rotateArray + left);
}

JZ11 旋转数组的最小数字

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int count = 0;
    int count_1 = 0;
    *returnSize = 2;
    int j = 0;
    static int err[2] = { 0 };
    for (i = 1; i <= numsSize; i++)
    {
        count_1 += i;
    }

    for (i = 0; i < numsSize; i++)
    {
        count += nums[i];
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                err[0] = nums[i];
            }
        }
    }
    count -= err[0];
    err[1] = count_1 - count;
    return err;
}

leetcode 645. 错误的集合