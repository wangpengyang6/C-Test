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
////	printf("N��%d", N);
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
//int a = 20;//ȫ�ֱ���
//
//int main()
//{
//    int b = 20;//�ֲ�����
//    //���涨���a��ӡ��������ʲô�أ�
//    int a = 10;//�ֲ�����
//    printf("a = %d", a);
//    return 0;
//}

//#include<stdio.h>
//int ADD(int x, int y)
//{
//    int b = 20; //b���ڵ������������ADD��������У���main�����в��ܱ�ʹ��
//    printf("%d", b);
//}
//int main()
//{
//    int a = 10;//a���ڵ������������main�����У��������ط�����ʹ��
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr_1[] = "Hello"; //����һ���ַ����飬��������һ���ַ�����ʼ������
//    char arr_2[] = { 'H','e','l','l','o' }; //����һ���ַ����飬�õ����ַ���ʼ��
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
//	printf("������0-100֮������֣�");
//	scanf("%d",&score);
//	if (score < 60)
//		printf("������");
//	else if (score >= 60 && score < 90)
//		printf("����");
//	else
//		printf("����");
//	return 0;
//}++++++++++++++++++++++++++++++++++++++++


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    printf("������������ڼ�");
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