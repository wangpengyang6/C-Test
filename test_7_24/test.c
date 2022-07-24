#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void table(int n)
//{
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	table(n);
//	return 0;
//}

//#include<stdio.h>
//void SWAP(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a,&b);
//	printf("交换前：%d %d\n", a, b);
//
//	SWAP(&a, &b);
//	printf("交换后：%d %d\n",a,b);
//	return 0;
//}

//#include<stdio.h>
//void is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
//	{
//		printf("%d年是闰年",n);
//	}
//	else
//		printf("%d年不是闰年",n);
//
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	is_leap_year(year);
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//void is_prime(int n)
//{
//	int i = 0;
//	//int j = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d不是素数", n);
//			break;
//
//		}
//	}
//	if(i>sqrt(n))
//		printf("%d是素数", n);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	is_prime(n);
//	return 0;
//}
//判断一个数是不是素数


//#include<stdio.h>
//#include<math.h>
//void print_prime()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ",i);
//	}
//}
//int main()
//{
//	print_prime();
//	return 0;
//}
//函数打印100到200之间的素数。

//#include<stdio.h>
//void sort(int* arr, int sz, int k)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right - left) / 2 + left;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标是 %d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到此数");
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	sort(arr, sz, k);
//	return 0;
//}
//函数实现二分查找
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n",num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//#include"stdio.h"
//int main()
//{
//	printf("%d",printf("%d", 43));
//	return 0;
//}

#include<stdio.h>
void print(int n)
{
	if(n)
	{
		printf("%d ",n % 10);
		n /= 10;
		print(n);
	}
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	print(n);
	return 0;
}