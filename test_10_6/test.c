#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		int j = 0;
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%-5d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

�������

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

#include <stdio.h>
int main()
{
	int a = 10;���ڴ��п���һ��ռ�
	int* p = &a;�������ǶԱ���a��ȡ�����ĵ�ַ������ʹ��&��������
		          a����ռ��4���ֽڵĿռ䣬�����ǽ�a��4���ֽڵĵ�һ���ֽڵĵ�ַ�����p�����У�p����һ��ָ֮�������
	printf("%p",p);
	return 0;
}

#include<stdio.h>
int main()
{
	int* pa;
	char* pc;
	float* pf;

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pf));

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int*pa = &a;
	char* pc = &a;
	*pc = 0;
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int*  pa = &a;
	char* pc = &a;

	printf("pa=%p\n", pa);
	printf("pc=%p\n", pc);

	printf("pa+1=%p\n", pa+1);
	printf("pc+1=%p\n", pc+1);

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 5;
	return 0;
}

#include <stdio.h>
int main()
{
	int* p;�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
	*p = 20;
	return 0;
}

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i <= 11; i++)
	{
		��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
		*(p++) = i;
	}
	return 0;
}


#include<stdio.h>
int* test()
{
	int num = 100;
	return &num;
}

int main()
{
	int* p = test();p������1���Ѿ��ͷŵľֲ��������ڴ��ַ
	*p = 200;���Ѿ��ͷŵĵ�ַ�����޸ģ������Ұָ��Ƿ�����

	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;��ȷ��ʼ��

	NULL - 0�����ǳ�ʼ��ָ���
	int* p = NULL;


	return 0;
}

#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int *p = arr;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}

	return 0;
}

#include<stdio.h>
int main()
{
	����ָ�������ǰ���ǣ�ָ��ָ���ͬһ�������Ŀռ�
	int arr[10] = {0};
	printf("%d\n", &arr[9] - &arr[0]);
	printf("%d\n", &arr[0] - &arr[9]);


	return 0;
}

#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;p����ָ�������һ��ָ�����

	int** pp = &p;pp���Ƕ���ָ��

	*p = 20;

	**pp = 50;

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	int e = 50;

	int* arr3[5] = {&a, &b, &c, &d, &e};�������ָ�������
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(arr3[i]));
	}

	return 0;
}

#include<stdio.h>
int main()
{
	��һά����ģ��һ����ά����
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int arr4[] = { 4,5,6,7,8 };

	int* arr[4] = {arr1, arr2, arr3, arr4};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(*(arr+i)+j));
		}
		printf("\n");
	}


	return 0;
}

