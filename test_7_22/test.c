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

//���ݽṹ
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

//extern int sum;//extern�����ⲿ����
//int main()
//{
//	printf("%d",sum);
//	return 0;
//}

//#include<stdio.h>
////�����ⲿ���ĺ���
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

////define ���峣��
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
////define�����
////�����в������ͺ�������
//
//int Add(int x, int y)
//{
//	return x + y;
//}
////��
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
//	printf("%p\n",  &a);//ȡ��a��ռ4���ֽ��е�һ���ֽڵĵ�ַ
//
//	int* pa = &a;//& ȡ��ַ������
//
//	//pa�ͽУ�ָ�����
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//& ȡ��ַ������
//	*pa = 20;//* �����ò���
//
//	printf("%d\n", a);
//	return 0;
//}

//
//#include <stdio.h>
////ָ������Ĵ�Сȡ���ڵ�ַ�Ĵ�С
////32λƽ̨�µ�ַ��32��bitλ����4���ֽڣ�
////64λƽ̨�µ�ַ��64��bitλ����8���ֽڣ�
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
	char name[20];//����
	int age;      //����
	char sex[5];  //�Ա�
	char id[15];  //ѧ��
};


void print(struct Stu* ps)
{
	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).id);
	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->id);
	//�ṹ��ָ��->�ṹ���Ա
}
int main()
{
	//struct Stu s = {"zhangsan", 20, "nan", "2022010578"};
	struct Stu s = { 0 };
	//����
	scanf("%s %s %s %d", s.name, s.sex, s.id, &(s.age));

	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
	//�ṹ�����.�ṹ���Ա

	print(&s);

	return 0;
}




//#include<stdio.h>
//struct Stu
//{
//	char name[20];//����
//	int age;      //����
//	char sex[5];  //�Ա�
//	char id[15];  //ѧ��
//};
//int main()
//{
//
//	struct Stu s = { "zhangsan", 20, "nan", "2022010578" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.id);
//
//	return 0;
//}
