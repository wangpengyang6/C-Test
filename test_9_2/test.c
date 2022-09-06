#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = -4;
	 11111111 11111111 11111111 11111100    -4的补码
	int b = a << 1;
	a向左移动1位
	printf("%d %d", a, b);
	return 0;
}
int main()
{
	int a = 5;
	 11111111 11111111 11111111 11111100    -4的补码
	int b = a >> 1;	    //a向右移动1位
	printf("%d %d",a,b);
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a & b;//& - 按（2进制）位与
	printf("%d\n", c);

	
	00000000000000000000000000000011 - 3的补码
	10000000000000000000000000000101 -5的原码
	11111111111111111111111111111010 -5的反码
	11111111111111111111111111111011 -5的补码

	00000000000000000000000000000011 - 3 & -5
	
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a | b;//& - 按（2进制）位或
	printf("%d\n", c);

	
	00000000000000000000000000000011 -> 3的补码
	10000000000000000000000000000101 -5的原码
	11111111111111111111111111111010 -5的反码
	11111111111111111111111111111011 -5的补码
	
	11111111111111111111111111111011 c的补码
	11111111111111111111111111111010 c的反码
	10000000000000000000000000000101 -> -5（c的原码）
	return 0;
}

int main()
{
	int a = 3;
	int b = -5;
	int c = a ^ b;//& - 按（2进制）位异或
	printf("%d\n", c);
	异或的运算：相同为0，相异为1
	
	00000000000000000000000000000011 -> 3的补码
	10000000000000000000000000000101 -5的原码
	11111111111111111111111111111010 -5的反码
	11111111111111111111111111111011 -5的补码
	
	11111111111111111111111111111000 c的补码
	11111111111111111111111111110111 c的反码
	10000000000000000000000000001000 c的原码
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
	int count = 0;//计数
	for (i = 0; i < 32; i++)
	{
		if ((num>>i) & 1)
			count++;
	}
	printf("二进制中1的个数 = %d\n", count);
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

	int* pa = &a;//& - 取地址操作符
	*pa = 20;//* - 解引用操作符
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
	struct Book sb = {"C语言", 55};
	
	printf("%s %d\n", sb.name, sb.price);//结构体变量.结构体成员名

	struct Book* ps = &sb;
	printf("%s %d\n", (*ps).name, (*ps).price);
	printf("%s %d\n", ps->name, ps->price);//结构体指针->结构体成员名

	return 0;
}

#include<stdio.h>
int main()
{
	char a = 5;//截断
	char b = 126;//截断
	char c = a + b;//截断
	00000000000000000000000000000101
	00000101 - a
	00000000000000000000000001111110
	01111110 - b
	整型提升
	00000000000000000000000000000101-a
	00000000000000000000000001111110-b
	00000000000000000000000010000011
	10000011 - c
	printf("%d\n", c);//打印有符号整数，第一位为1，是负数
	%d 十进制的方式打印有符号整数
	11111111111111111111111110000011 整形提升为int-补码
	11111111111111111111111110000010              反码
	10000000000000000000000001111101              原码
	结果为-125
	
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