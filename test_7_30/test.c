#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 3;
	printf("交换前:%d %d\n",a,b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后:%d %d",a,b);
	return 0;
}

#include<stdio.h>
int NumberOf1(int n)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = NumberOf1(n);
    printf("%d", ret);
    return 0;
}



#include<stdio.h>
int NumberOf1(int n)
{
    int count = 0;
    int i = 0;
    for (i = 0; i < 32; i++)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d %d", &m, &n);
    int ret = m ^ n;
    int imp = NumberOf1(ret);
    printf("%d", imp);
    return 0;
}


