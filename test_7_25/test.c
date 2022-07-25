#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void print(int n)
//{
//	if(n)
//	{
//		print(n/10);
//		printf("%d ", n % 10);
//
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}
////非递归
//#include<stdio.h>
//int Fac(int n)
//{
//	int ret = 1;
//	int i = n - 1;
//	if (n == 0)
//	{
//		return  ret;
//	}
//	ret = n *Fac(i);
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("%d",ret);
//	return 0;
//}
////递归

//#include<stdio.h>
//int power(int n, int k)
//{
//	if(k)
//	return n * power(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	int ret = power(n, k);
//	printf("%d",ret);
//	return 0;
//}

//#include<stdio.h>
//int sum(int n)
//{
//	static su = 0;
//	if (n)
//	{
//		su += (n % 10);
//		n /= 10;
//		sum(n);
//	}
//	return su;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d",sum(n));
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//#include<stdio.h>
//void reverse_string(char* arr)
//{
//	arr++;
//	if (*arr != '\0')
//	{
//		reverse_string(arr);
//	}
//	arr--;
//	printf("%c",*arr);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）

//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while(*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = {"abcdef"};
//	int ret = my_strlen(arr);
//	printf("%d",ret);
//	return 0;
//}
//非递归分别实现strlen


//#include<stdio.h>
//int my_strlen(char* arr)
//{
//	static sum = 0;
//	if (*arr != '\0')
//	{
//		sum++;
//		arr++;
//		my_strlen(arr);
//	}
//
//	return sum;
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int ret = my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//递归分别实现strlen
// 
// 
//#include<stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long i = 0;
//    long long su = 0;
//    for (i = 1; i <= n; i++)
//    {
//        su += i;
//    }
//    printf("%lld", su);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    long int n = 0;
//    long int sum = 0;
//    int i = 1;
//    scanf("%ld", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + i;
//    }
//    printf("%ld", sum);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    long long sum = 0;
//
//    scanf("%d", &n);
//    int i = 0;
//
//    for(i=1; i<=n; i++)
//    {
//        sum += i;
//    }
//
//    printf("%lld\n", sum);
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int arr[50] = { 0 };
//    int N = 0;
//    int sum = 0;
//    scanf("%d", &N);
//    int i = 0;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

//#include<stdio.h>
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = b + a;
//		b = a;
//		a = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("%d",ret);
//	return 0;
//}
//非递归实现求第n个斐波那契数


#include<stdio.h>
int fib(int n)
{
	if(n > 2)
	return fib(n - 2) + fib(n - 1);
	if (n <= 2)
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}
//递归实现求第n个斐波那契数