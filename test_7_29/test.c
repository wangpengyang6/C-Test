#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char imp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) > 1)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = imp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s ", arr);
//	return 0;
//}
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�

//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("������0-100֮������֣�");
//	scanf("%d", &score);
//	if (score < 60)
//		printf("������");
//	else if (score >= 60 && score < 90)
//		printf("����");
//	else
//		printf("����");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("�Ǻ�");
//	else
//		printf("����");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    printf("������������ڼ�");
//    scanf("%d", &n);
//    switch (n)
//    {
//    default:
//        printf("�������");
//        break;
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("Weekday\n");
//        break;
//    case 6:
//    case 7:
//        printf("Weekend\n");
//        break;
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			i++;//��ֹi����5��ѭ��
//			continue;//��i����5ʱ����������ѭ���������´�ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			i++;//��ֹi����5��ѭ��
//			continue;//��i����5ʱ����������ѭ���������´�ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	for (; ;)
//	{
//		printf("Hello world\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d : Hello world\n",count);
//			count++;//ÿ��ӡһ��Hello world count�ͣ�1����������
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//���ʡ�Ե���ʼ�����֣������ӡ���ٸ�hehe?
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//��x �� y ͬʱ��Լ
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	} while (i <= 10);
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int i = 1;

	do
	{
		if (5 == i)
			continue;
		printf("%d ", i);
		i = i + 1;
	} while (i <= 10);

	return 0;
}