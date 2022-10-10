#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct Point
{
	int x;
	int y;
};

struct S
{
	char c;
	struct Point p;//包含结构体struct Point
	double d;
	char str[20];
};

int main()
{
	struct S ss = { 'x', {100, 200}, 3.14, "Hello" };
	return 0;
}


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
	(*结构体指针).结构体成员
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
	结构体指针->结构体成员
}
int main()
{
	struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
	struct Stu s = { 0 };
	输入
	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));

	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
	结构体变量.结构体成员

	print(&s);

	return 0;
}


#include<stdio.h>
struct S
{
	int data[1000];
	int num;
};

struct S s = { {1,2,3,4}, 1000 };
结构体传参
void print1(struct S s)
{
	printf("%d\n", s.num);
}
结构体地址传参
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //传结构体
	print2(&s); //传地址
	return 0;
}