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
	struct Point p;//�����ṹ��struct Point
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
	char name[20];//����
	int age;      //����
	char sex[5];  //�Ա�
	char id[15];  //ѧ��
};


void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
	(*�ṹ��ָ��).�ṹ���Ա
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
	�ṹ��ָ��->�ṹ���Ա
}
int main()
{
	struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
	struct Stu s = { 0 };
	����
	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));

	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
	�ṹ�����.�ṹ���Ա

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
�ṹ�崫��
void print1(struct S s)
{
	printf("%d\n", s.num);
}
�ṹ���ַ����
void print2(struct S* ps)
{
	printf("%d\n", ps->num);
}
int main()
{
	print1(s); //���ṹ��
	print2(&s); //����ַ
	return 0;
}