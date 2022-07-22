#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num1 = 10;
//	unit num2 = 20;
//	
//	return 0;
//}

//数据结构
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//#include<stdio.h>
//
//void test()
//{
//	static int a = 1;
//	++a;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int sum;//extern声明外部符号
//int main()
//{
//	printf("%d",sum);
//	return 0;
//}

//#include<stdio.h>
////声明外部来的函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//#include <stdio.h>n

////define 定义常量
//#define M 1000
//#define SIZE 10
//
//int main()
//{
//	int arr[SIZE];
//	printf("%d\n", SIZE);
//
//	return 0;
//}


//#include<stdio.h>
////define定义宏
////宏是有参数，和函数很像
//
//int Add(int x, int y)
//{
//	return x + y;
//}
////宏
//#define ADD(x, y)  ((x)+(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = Add(a, b);
//	printf("sum1 = %d\n", sum1);
//
//	int sum2 = ADD(a, b); 
//	printf("sum2 = %d\n", sum2);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	int a = 10;
//	printf("%p\n",  &a);//取出a所占4个字节中第一个字节的地址
//
//	int* pa = &a;//& 取地址操作符
//
//	//pa就叫：指针变量
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//& 取地址操作符
//	*pa = 20;//* 解引用操作
//
//	printf("%d\n", a);
//	return 0;
//}

//
//#include <stdio.h>
////指针变量的大小取决于地址的大小
////32位平台下地址是32个bit位（即4个字节）
////64位平台下地址是64个bit位（即8个字节）
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
#include<stdio.h>
struct Stu
{
	char name[20];//名字
	int age;      //年龄
	char sex[5];  //性别
	char id[15];  //学号
};


void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
	//结构体指针->结构体成员
}
int main()
{
	//struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
	struct Stu s = { 0 };
	//输入
	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));

	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
	//结构体变量.结构体成员

	print(&s);

	return 0;
}




//#include<stdio.h>
//struct Stu
//{
//	char name[20];//名字
//	int age;      //年龄
//	char sex[5];  //性别
//	char id[15];  //学号
//};
//int main()
//{
//
//	struct Stu s = { "zhangsan", 20, "nan", "2022010578" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//
//	return 0;
//}
