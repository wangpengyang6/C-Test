#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	if (check_sys() == 1)
	{
		printf("С��");
	}
	else
		printf("���");
	return 0;
}

�жϴ�С��


-20
10000000000000000000000000010100 Դ��
11111111111111111111111111101011 ����
11111111111111111111111111101100 ����
 10
00000000000000000000000000001010 Դ��
11111111111111111111111111110110 ����
10000000000000000000000000001001 ����
10000000000000000000000000001010 -20+10

00000000000000000000000011001000
00000000000000000000000001100100
0000000000000000000000000100101100

12 34 00 00

#include<stdio.h>
int main()
{
    char a[1000] = { 0 };
    int i = 0;
    for (i = 0; i < 1000; i++)
    {
        a[i] = -1 - i;
    }
    printf("%d", strlen(a));
    return 0;
}


#include<stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if (A * B * C * D * E == 120)
						{
							if ((B == 2 && A != 3) || (B != 2 && A == 3))
							{
								if ((B == 2 && E != 4) || (B != 2 && E == 4))
								{
									if ((C == 1 && D != 2) || (C != 1 && D == 2))
									{
										if ((C == 5 && D != 3) || (C != 5 && D == 3))
										{
											if ((E == 4 && A != 1) || (E != 4 && A == 1))
											{
												printf("A = %d B = %d C = %d D = %d E = %d",A,B,C,D,E);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

������


#include<stdio.h>
int main()
{
	char killer = 'a';
	for (killer = 'a'; killer < 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
			printf("%c��ɱ��",killer);
	}
	return 0;
}

������




#include<stdio.h>
#include<string.h>
void reverse (char*left,char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int sz = strlen(arr);
	char* left = arr;
	char* right = arr + sz - 1;
	reverse(left, right);
	char* start = left;
	char* end = left;
	while (*end != '\0')
	{
		while (*end != '\0' && *end != ' ')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		    start = end + 1;
		else
		    start = end;
		end++;
	}
	puts(arr);
	return 0;
}

�����ַ���   ��һ�仰�ĵ��ʽ��е��ã���㲻���á����� "I like beijing."������������Ϊ��"beijing. like I"��