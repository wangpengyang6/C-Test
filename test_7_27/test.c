#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int* arr,int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ",arr[j]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = {6,7,8,9,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前\n");
//	print(arr1, sz);
//	print(arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("交换后\n");
//
//	print(arr1, sz);
//	print(arr2, sz);
//
//	return 0;
//}

//#include<stdio.h>
//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	print(arr, sz);
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//#include<stdio.h>
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
void bubble_sort(int* arr, int sz)
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
int main()
{
	int arr[10] = { 1,4,7,8,5,2,3,6,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}