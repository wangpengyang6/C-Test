#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	a <<= 1;
//	printf("%d",a);
//	return 0;
//}

//00000101
//00000111

//00000111


//while (num1)
//{
//    int tmp = num1 ^ num2;
//    num1 = (num1 & num2) << 1;
//    num2 = tmp;
//}
//return num2;
//
// JZ65 不用加减乘除做加法

//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    (*returnSize) = 0;
//    static int ret[100000] = { 0 };
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[(nums[i] - 1) % numsSize] += numsSize;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] <= numsSize)
//        {
//            ret[*returnSize] = i + 1;
//            (*returnSize)++;
//        }
//    }
//    return ret;
//}

//leet 448.找到数组中消失的数字