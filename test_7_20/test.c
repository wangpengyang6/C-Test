#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    switch (n)
//    {
//    default:printf("Hello");
//        break;
//    case 1:
//        printf("Monday");
//        break;
//    case 2:printf("Tuesday");
//        break;
//    case 3:printf("Wednesday");
//        break;
//    case 4:printf("Thursday");
//        break;
//    case 5:printf("Friday");
//        break;
//    case 6:printf("Saturday");
//        break;
//    case 7:printf("Sunday");
//        break;
//
//
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    switch (n)
//    {
//    case 1:printf("Monday");
//    case 2:printf("Tuesday");
//    case 3:printf("Wednesday");
//    case 4:printf("Thursday");
//    case 5:printf("Friday");
//    case 6:printf("Saturday");
//    case 7:printf("Sunday");
//    default:printf("666");
//
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}\
// 
//дһ�������ӡ1-100֮������3�ı���������

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tem = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	if (a < b)
//	{
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}
//д���뽫�������������Ӵ�С�����

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//��ӡ100~200֮�������

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
//1000-2000����

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int rem = 0;
//	scanf("%d %d", &a, &b);
//	while (a)
//	{
//		rem = b % a;
//		b = a;
//		a = rem;
//	}
//	printf("%d ",b);
//	return 0;
//}
//���Լ��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%02d ",j,i,j*i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//void sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	printf("%d",arr[0]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	if (!1)//!1Ϊ�٣������ӡHello
//		printf("Hello");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));//4 
//	printf("%d\n", sizeof a );//4  �ڼ�������Ĵ�Сʱ�����ȥ������
//	printf("%d\n", sizeof(int));//
//	printf("%d\n", sizeof int);//err�������ڼ�����������ʱ����������ȥ�� 
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40���������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));//4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//40 /4=10
//
//	//�����Ԫ�ظ�����μ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b','c' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//
//	return 0;
//}
// 
// 
//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int m, a, b;
//	scanf("%d %d",&a,&b);
//	m = (a > b ? a : b);
//	
//	printf("%d\n", m);
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 0;
	int c = 4;

	int d = (a = b - 3, b = a + c, c = a - b, a = c + 3);//���������μ��㣬ȡ���һ�����ʽ�Ľ��
			//a=-3 b=1   c=-4  a=-1

	printf("%d\n", d);
	return 0;
}