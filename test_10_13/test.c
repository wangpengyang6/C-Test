#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
	}

	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	return 0;
}


#include<stdio.h>
void test2()
{
	printf("test2\n");
}

void test1()
{
	test2();
}

void test()
{
	test1();
}

int main()
{
	test();
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}


#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	const int a = 10;
	//a = 10;
	return 0;
}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);//断言

	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int my_strlen(const char* str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}