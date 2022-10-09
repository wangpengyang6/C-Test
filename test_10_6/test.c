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

杨辉三角

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

#include <stdio.h>
int main()
{
	int a = 10;在内存中开辟一块空间
	int* p = &a;这里我们对变量a，取出它的地址，可以使用&操作符。
		          a变量占用4个字节的空间，这里是将a的4个字节的第一个字节的地址存放在p变量中，p就是一个之指针变量。
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
	int* p;局部变量指针未初始化，默认为随机值
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
		当指针指向的范围超出数组arr的范围时，p就是野指针
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
	int* p = test();p接收了1个已经释放的局部变量的内存地址
	*p = 200;对已经释放的地址进行修改，会造成野指针非法访问

	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;明确初始化

	NULL - 0，就是初始化指针的
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
	两个指针相减的前提是：指针指向的同一块连续的空间
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
	int* p = &a;p就是指针变量，一级指针变量

	int** pp = &p;pp就是二级指针

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

	int* arr3[5] = {&a, &b, &c, &d, &e};存放整型指针的数组
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
	用一维数组模拟一个二维数组
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

