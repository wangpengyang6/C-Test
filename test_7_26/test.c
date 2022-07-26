#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,4,7,8,5,2,3,6,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//冒泡排序

//#include<stdio.h>
//int main()
//{
//    int i, n, x, j;
//    int count = 0;
//    scanf("%d %d", &n, &x);
//    for (i = 1; i <= n; i++)
//    {
//        for (j = i; j > 0; j /= 10)
//        {
//            if (j % 10 == x)
//                count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}
//BC116[NOIP2013]记数问题


//#include<stdio.h>
//int main()
//{
//    int n, i, tem, j, max, min;
//    int arr[100];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tem = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tem;
//            }
//        }
//    }
//    max = arr[n - 1];
//    min = arr[0];
//    printf("%d", max - min);
//    return 0;
//BC119 最高分与最低分之差

#include <stdio.h>
int main()
{
    int arr[] = { 1,2,(3,4),5 };
    printf("%d\n", sizeof(arr));
    return 0;
}