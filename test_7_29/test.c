#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char imp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = imp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s ", arr);
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现）

//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入0-100之间的数字：");
//	scanf("%d", &score);
//	if (score < 60)
//		printf("不及格");
//	else if (score >= 60 && score < 90)
//		printf("良好");
//	else
//		printf("优秀");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("呵呵");
//	else
//		printf("哈哈");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    printf("输入今天是星期几");
//    scanf("%d", &n);
//    switch (n)
//    {
//    default:
//        printf("输入错误");
//        break;
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("Weekday\n");
//        break;
//    case 6:
//    case 7:
//        printf("Weekend\n");
//        break;
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			i++;//防止i等于5死循环
//			continue;//当i等于5时，结束本次循环，跳到下次循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			i++;//防止i等于5死循环
//			continue;//当i等于5时，结束本次循环，跳到下次循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	for (; ;)
//	{
//		printf("Hello world\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d : Hello world\n",count);
//			count++;//每打印一次Hello world count就＋1，计数作用
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//如果省略掉初始化部分，这里打印多少个hehe?
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//用x 和 y 同时制约
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int i = 1;

	do
	{
		if (5 == i)
			continue;
		printf("%d ", i);
		i = i + 1;
	} while (i <= 10);

	return 0;
}