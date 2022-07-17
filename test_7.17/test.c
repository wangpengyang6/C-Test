#define  _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#define N 100
////int MAX(int a, int b)
////{
////	if (a > b)
////	{
////		return a;
////	}
////	else
////	{
////		return b;
////	}
////}
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d",&a,&b);
////	int z = MAX(a, b);
////	printf("%d",z);
////	return 0;
////}
//// 
////int main()
////{
////	printf("N：%d", N);
////	return 0;
////}
//
//enum SEX
//{
//	MALE,
//	FEMALE,
//	UNKNOWN
//};
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", UNKNOWN);
//	return 0;
//}



//#include<stdio.h>
//
//int a = 20;//全局变量
//
//int main()
//{
//    int b = 20;//局部变量
//    //下面定义的a打印出来会是什么呢？
//    int a = 10;//局部变量
//    printf("a = %d", a);
//    return 0;
//}

//#include<stdio.h>
//int ADD(int x, int y)
//{
//    int b = 20; //b所在的作用域就是在ADD这个函数中，在main函数中不能被使用
//    printf("%d", b);
//}
//int main()
//{
//    int a = 10;//a所在的作用域就是在main函数中，在其他地方不能使用
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr_1[] = "Hello"; //创建一个字符数组，并用这样一个字符串初始化数组
//    char arr_2[] = { 'H','e','l','l','o' }; //创建一个字符数组，用单个字符初始化
//    printf("%d\n",strlen(arr_1));
//    printf("%d",strlen(arr_2));
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    printf("%d\v",100);
//    printf("%d\v",100);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入0-100之间的数字：");
//	scanf("%d",&score);
//	if (score < 60)
//		printf("不及格");
//	else if (score >= 60 && score < 90)
//		printf("良好");
//	else
//		printf("优秀");
//	return 0;
//}++++++++++++++++++++++++++++++++++++++++


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    printf("输入今天是星期几");
//    scanf("%d", &n);
//    switch (n)
//    {
//    case 1:
//        printf("Monday");
//        break;
//    case 2:printf("Tuesday");
//        break;
//    case 3:printf("Wednesday");
//        break;
//    case 4:printf("Thursday");
//        break;
//    case 5:printf("Friday");
//        break;
//    case 6:printf("Saturday");
//        break;
//    case 7:printf("Sunday");
//        break;
//
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 1;
	do 
	{
		printf("%d ",i);
		i++;
	} while (i <= 10);
	return 0;
}