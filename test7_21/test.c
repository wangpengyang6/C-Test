#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum -= 1.0 / i;
//		}
//		else
//			sum += 1.0 / i;
//	}
//	printf("%.2f",sum);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d",count);
//	return 0;
//}
// 1�� 100 �����������г��ֶ��ٸ�����9

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("*********1.paly***********\n");
//	printf("*********0.exit***********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	int n = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("������������������֣�");
//		scanf("%d", &n);
//		if (ret < n)
//		{
//			printf("����\n");
//		}
//		else if (ret > n)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = 0;
//	do
//	{
//		menu();
//		printf("������1/0��");
//		scanf("%d", &i);
//		switch (i)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (i);
//	return 0;
//}


//������


#include<stdio.h>
void sort(int arr[], int sz, int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ��� ");
	}

}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz,k);
	return 0;
}
//���ֲ���