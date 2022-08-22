#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("Hello World\n");
	main();
}
#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}

#include<stdio.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}


#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}

#include<stdio.h>
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	return ret;
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",Fac1(n));
	return 0;
}

#include<stdio.h>
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	printf("%d",Fib(n));
	return 0;
}

#include<stdio.h>
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

#include<stdio.h>
int main()
{
	int t = 0;
	while (printf("*"))
	{
		t++;
		if (t < 3)
			break;
	}
	return 0;
}

int GetNumberOfK(int* data, int dataLen, int k) {
    int left = 0;
    int right = dataLen - 1;
    int count = 0;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (data[mid] > k)
        {
            right = mid - 1;
        }
        else if (data[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            int start = mid + 1;
            while (mid >= 0 && data[mid] == k)
            {
                count++;
                mid--;
            }
            while (start < dataLen && data[start] == k)
            {
                count++;
                start++;
            }
            break;
        }
    }
    return count;
}

牛客网 JZ53 数字在升序数组中出现的次数