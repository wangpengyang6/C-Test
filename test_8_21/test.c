#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char arr2[15] = "Hello world";
	memset(arr2, '*', 5);
	printf("%s",arr2);
	return 0;
}
#include<stdio.h>
int get_max(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//输入
	int m = get_max(a, b);
	printf("%d\n", m);
	return 0;
}

#include<stdio.h>
void Swap(int x, int y)
{
	int z = 0;
	z = x;
	x = y;
	y = z;
}
void Swap(int* px, int* py)
{
	int t = 0;
	t = *px;  
	*px = *py;
	*py = t;  
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);//输入
	printf("交换前:a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("交换后:a=%d b=%d\n", a, b);
	return 0;
}

#include<stdio.h>
void main_1(int* num)
{
	(*num)++;
}
int main()
{
	int num = 0;
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		main_1(&num);
	}
	printf("%d",num);
	return 0;
}

#include <stdio.h>
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		new_line();
	}
}
int main()
{
	three_line();
	return 0;
}

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[20] = "hello";
	int ret = strlen(arr);
	printf("%d\n", ret);
	printf("%d\n", strlen(arr));
	return 0;
}

函数声明
int Add(int, int);
int Add(int x, int y);


#include<stdio.h>

//函数声明
//int Add(int, int);
int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int s = Add(a, b);
	printf("%d\n", s);
	return 0;
}

int Add(int x, int y)
{
	return x + y;
}



#include<stdio.h>
int main()
{
	char c;
	int v0 = 0, v1 = 0, v2 = 0;
		do
		{
			switch (c = getchar())
			{
			case'a':case'A':
			case'e':case'E':
			case'i':case'I':
			case'o':case'O':
			case'u':case'U':v1 += 1;
			default:v0 += 1;v2 += 1;
			}
		} while (c != '\n');
		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
		return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    char str[100] = { '\0' };
    for (i = 0; i < n; i++)
    {
        int j = 0;
        int other = 0;
        int count = 0;
        int count_big = 0;
        int count_small = 0;
        int count_num = 0;
        scanf("%s", str);
        int len = strlen(str);
        if ((str[0] <= '9' && str[0] >= '0') || len < 8)
        {
            printf("NO\n");
            continue;
        }
        for (j = 0; j < len; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                count_big = 1;
                count++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                count_small = 1;
                count++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                count_num = 1;
                count++;
            }
            else
                other = 1;
        }
        if ((count_big + count_small + count_num >= 2) && other == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

牛客网OR141 密码检查