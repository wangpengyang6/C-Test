#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = -4;
	 11111111 11111111 11111111 11111100    -4�Ĳ���
	int b = a << 1;
	a�����ƶ�1λ
	printf("%d %d", a, b);
	return 0;
}
int main()
{
	int a = 5;
	 11111111 11111111 11111111 11111100    -4�Ĳ���
	int b = a >> 1;	    //a�����ƶ�1λ
	printf("%d %d",a,b);
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a & b;//& - ����2���ƣ�λ��
	printf("%d\n", c);

	
	00000000000000000000000000000011 - 3�Ĳ���
	10000000000000000000000000000101 -5��ԭ��
	11111111111111111111111111111010 -5�ķ���
	11111111111111111111111111111011 -5�Ĳ���

	00000000000000000000000000000011 - 3 & -5
	
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a | b;//& - ����2���ƣ�λ��
	printf("%d\n", c);

	
	00000000000000000000000000000011 -> 3�Ĳ���
	10000000000000000000000000000101 -5��ԭ��
	11111111111111111111111111111010 -5�ķ���
	11111111111111111111111111111011 -5�Ĳ���
	
	11111111111111111111111111111011 c�Ĳ���
	11111111111111111111111111111010 c�ķ���
	10000000000000000000000000000101 -> -5��c��ԭ�룩
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a ^ b;//& - ����2���ƣ�λ���
	printf("%d\n", c);
	�������㣺��ͬΪ0������Ϊ1
	
	00000000000000000000000000000011 -> 3�Ĳ���
	10000000000000000000000000000101 -5��ԭ��
	11111111111111111111111111111010 -5�ķ���
	11111111111111111111111111111011 -5�Ĳ���
	
	11111111111111111111111111111000 c�Ĳ���
	11111111111111111111111111110111 c�ķ���
	10000000000000000000000000001000 c��ԭ��
	-8
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;

	a = a ^ b;
	b = a ^ b;//b=a ^ b ^ b
	a = a ^ b;//a^b^a


	printf("a=%d b=%d\n", a, b);

	return 0;
}

#include<stdio.h>
int main()
{
	int num = 2;
	int i = 0;
	int count = 0;//����
	for (i = 0; i < 32; i++)
	{
		if ((num>>i) & 1)
			count++;
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int flag = 0;
	if (!flag)
	if(flag == 0)
	{
		printf("hehe\n");
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 4;

	int* pa = &a;//& - ȡ��ַ������
	*pa = 20;//* - �����ò�����
	*pa = 20;
	printf("%d",a);

	return 0;
}

#include<stdio.h>
int main()
{
	short s = 10;
	int a = 2;
	printf("%zu\n", sizeof(s = a + 5));
	
	printf("%d\n", s);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	printf("%d",~a);
	return 0;
}

#include <stdio.h>
struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book sb = {"C����", 55};
	
	printf("%s %d\n", sb.name, sb.price);//�ṹ�����.�ṹ���Ա��

	struct Book* ps = &sb;
	printf("%s %d\n", (*ps).name, (*ps).price);
	printf("%s %d\n", ps->name, ps->price);//�ṹ��ָ��->�ṹ���Ա��

	return 0;
}

#include<stdio.h>
int main()
{
	char a = 5;//�ض�
	char b = 126;//�ض�
	char c = a + b;//�ض�
	00000000000000000000000000000101
	00000101 - a
	00000000000000000000000001111110
	01111110 - b
	��������
	00000000000000000000000000000101-a
	00000000000000000000000001111110-b
	00000000000000000000000010000011
	10000011 - c
	printf("%d\n", c);//��ӡ�з�����������һλΪ1���Ǹ���
	%d ʮ���Ƶķ�ʽ��ӡ�з�������
	11111111111111111111111110000011 ��������Ϊint-����
	11111111111111111111111110000010              ����
	10000000000000000000000001111101              ԭ��
	���Ϊ-125
	
	return 0;
}

#include<stdio.h>
int main()
{
    char a = 0xb6;
    short b = 0xb600;
    int c = 0xb6000000;
    if (a == 0xb6)
        printf("a");
    if (b == 0xb600)
        printf("b");
    if (c == 0xb6000000)
        printf("c");
    return 0;
}