#define  _CRT_SECURE_NO_WARNINGS 1
	int n = 0;//��ʼ��
	int m;
	m = 20;//��ֵ
	int arr[10] = {1};//����ȫ��ʼ������һ��Ԫ�س�ʼ��Ϊ1�������Ԫ��Ĭ�ϳ�ʼ��Ϊ0
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 }//��ȫ��ʼ��
#include<stdio.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���������Ԫ�ظ���
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);//arr[i]��ʾ�����һ��Ԫ�أ������Ǵ�������
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//0~9
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	return 0;
}

#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		printf("%d ", arr[i]);//��i����10��ʱ��Խ�������
	}
	return 0;
}

#include <stdio.h>
int main()
{
    //int arr[10] = { 1,2,3,4,5 };
    //printf("%p\n", arr);
    //printf("%p\n", &arr[0]);
    //printf("%d\n", *arr);
    //������
    int arr[10] = {0};
    printf("%d\n", sizeof(arr));
    return 0;
}��


#include<stdio.h>
void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[10] = { 1,2,4,7,8,5,9,6,3,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);
	print(arr, sz);
	return 0;
}


int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    *returnSize = 0;
    int i = 0;
    int up = 0;
    int down = 0;
    static int result[1000] = { 0 };
start:
    while (up < nums1Size && down < nums2Size)
    {
        for (int j = 0; j < *returnSize; j++)
        {
            if (nums1[up] == result[j])
            {
                up++;
                goto start;
            }
        }
        if (nums1[up] == nums2[down])
        {
            result[i++] = nums1[up];
            up++;
            down++;
            (*returnSize)++;
        }
        else if (nums1[up] < nums2[down])
        {
            up++;
        }
        else
        {
            down++;
        }
    }
    return result;
}

leetcode ��ţ�349.��������Ľ���