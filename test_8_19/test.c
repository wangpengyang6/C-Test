#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("************1.play************\n");
	printf("************0.exit************\n");
}

void game()
{
	printf("������С��Ϸ\n");
	int num = rand() % 100 + 1;
	int n = 0;
	while (1)
	{
		printf("��������µ�����(1-100):>");
		scanf("%d", &n);
		if (n > num)
		{
			printf("�µ����ִ���\n");
		}
		else if (n < num)
		{
			printf("�µ�����С��\n");
		}
		else
		{
			printf("��ϲ��¶���!!\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������1/0��");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i+=1)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
			printf("%d ",i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i += 1)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
			printf("%d ", i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; ++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("%d ",year);
		}
	}
	return 0;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
 
 
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%02d ", j, i, j * i);
		}
		printf("\n");
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
	int hundreds = 0;
	int decade = 0;
	int unit = 0;
	int i = 0;
	for (i = 100; i < 1000; i++)
	{
		hundreds = i / 100;
		decade = i / 10 - hundreds * 10;
		unit = i % 10;
		if (i == pow(hundreds, 3) + pow(decade, 3) + pow(unit, 3))
		{
			printf("%d ",i);
		}
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int n = 5;
	int m = 20;
	int ret = 0;
	while (ret = n % m)
	{
		n = m;
		m = ret;
	}
	printf("%d",m);
	return 0;
}

#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "Hello World!";
	char arr2[] = "############";

	int left = 0;
	int right = strlen(arr1)-1;

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(200);//window��Sleep���������ĵ�λ�Ǻ���
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
	int left = 0;
	int right = sz-1;
	int k = 0;
	scanf("%d", &k);
	while (left<=right)
	{
		//int mid = (left + right) / 2;
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");

	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };//������ȷ������sososopy
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		//�ж�������ȷ��
		if (strcmp(password, "sososopy") == 0)
		{
			printf("������ȷ����½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("������������˳�����\n");
	}
	return 0;
}

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	//srand((unsigned int)time(NULL));
	while (1)
	{
		srand(1);

		int n = rand();
		printf("%d\n",n);
	}
}