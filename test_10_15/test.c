#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int b = -10;
	10000000000000000000000000001010	 - 原码
	11111111111111111111111111110101   - 反码
	11111111111111111111111111110110   - 补码

	int a = 0x11223344;
	return 0;
}

#include<stdio.h>
void Bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1,4,7,8,5,2,3,6,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

冒泡排序

#include<stdio.h>
int check_sys()
{
	int n = 1;
	return *(char*)&n;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}


#include <stdio.h>

int main()
{
	char a = -1;  //-1截断后存储到a中
	10000000000000000000000000000001	-1的原码
	11111111111111111111111111111110	-1的反码
	11111111111111111111111111111111  -1的补码
	11111111 - a
	signed char b = -1;
	11111111111111111111111111111111  -1的补码
	11111111 - b
	

	unsigned char c = -1;
	11111111111111111111111111111111  -1的补码
	11111111 - c
	
	printf("a=%d,b=%d,c=%d", a, b, c);
	-1 -1 
	11111111111111111111111111111111
	11111111111111111111111111111110
	10000000000000000000000000000001

	11111111
	00000000000000000000000011111111

	return 0;
}

#include <stdio.h>
int main()
{
	char a = -128;
	printf("%u\n", a);
	return 0;
}

#include<stdio.h>
int search(int arr[], int sz, int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	if(left > right)
	return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int pos = search(arr, sz, k);
	if (pos == -1)
	{
		printf("没找到");
	}
	else
	{
		printf("找到了，下标为：%d",pos);
	}
	return 0;
}

二分


#include <stdio.h>
int main()
{
	int i = -20;
	1111 1111 1111 1111 1111 1111 1110 1100
		+
	0000 0000 0000 0000 0000 0000 0000 1010
	1111 1111 1111 1111 1111 1111 1111 0110


	1000 0000 0000 0000 0000 0000 0000 1010

	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}

#include <stdio.h>
int main()
{
	char i = -129;
	printf("%d\n",i);
	return 0;
}



