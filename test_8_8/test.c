#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
    int num;
    char name[10];
    int age;
};


void fun(struct stu* p)
{
    printf("% s\n", (*p).name);
    return;
}


int main()
{
    struct stu students[3] = { {9801,"zhang",20},
                              {9802,"wang",19},
                              {9803,"zhao",18}
    };
    fun(students + 1);
    return 0;
}

#include<stdio.h>
int main()
{
	int count = 20;
	int remain = 0;
	remain = count;
	while (remain > 1)
	{
		count += (remain / 2);
		remain = remain / 2  + remain % 2;
	}
	printf("%d",count);
	return 0;
}

喝汽水

#include<stdio.h>
#include<math.h>
int main()
{
    int i = 0;
    for (i = 10000; i < 100000; i++)
    {
        int j = 0;
        int sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += (i % (int)pow(10, j)) * (i / (int)pow(10, j));
        }
        if (sum == i)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i, a, b, c, d, e, f, g, h;
    for (i = 10000; i < 100000; i++)
    {
        a = i / 10000;
        b = i % 10000;
        c = i / 1000;
        d = i % 1000;
        e = i / 100;
        f = i % 100;
        g = i / 10;
        h = i % 10;
        if (i == a * b + c * d + e * f + g * h)
        {
            printf("%d ", i);
        }
    }
}

#include<stdio.h>
int main()
{
	int i, j, k, l, x, y;
	int sum = 1;
	int ret = 0;
	for (i = 10000; i <= 99999; i++)
	{
		for (j = 4; j > 0; j--)
		{
			int k2 = 1;
			for (l = 0; l < j; l++)
			{
				k2 *= 10;
			}
			x = i / k2;
			int k1 = 1;
			for (k = 0; k < j; k++)
			{
				k1 *= 10;
			}
			y = i % k1;
			sum = x * y;
			ret += sum;
		}
		if (ret == i)
			printf("%d ", i);
		ret = 0;
		sum = 1;
	}
	return 0;
}
 
BC38-变种水仙花数

#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}

#include<stdio.h>
void change(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	change(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

调整数组使奇数全部都位于偶数前面。