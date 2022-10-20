#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void relaceSpace(char* s)
{
	int length = strlen(s);
	char* cur = s;
	int  len = 0;
	while (*cur)
	{
		if (*cur == ' ')
		{
			len++;
		}
		cur++;
	}
	int len1 = length - 1;
	int len2 = length - 1 + 2 * (len);
	s[len2 + 1] = '\0';
	while (len1 != len2)
	{
		if (s[len1] != ' ')
		{
			s[len2--] = s[len1--];
		}
		else
		{
			len1--;
			s[len2--] = '0';
			s[len2--] = '2';
			s[len2--] = '%';
		}
	}

}

int main()
{
	char arr[30] = "We Are Happy";
	relaceSpace(arr);
	printf("%s\n",arr);
	return 0;
}


Ìæ»»×Ö·û´®ÖÐµÄ¿Õ¸ñ


