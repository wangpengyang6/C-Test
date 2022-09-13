#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}

int main()
{
	char arr[] = "abcde";
	int len = my_strlen(arr);
	printf("%d",len);
	return 0;
}


模拟实现strlen

#include<stdio.h>
char* my_strcpy(char* dest, const char* sur)
{
	char* p = dest;
	while (*dest++ = *sur++)
	{
		;
	}
	return p;
}

int main()
{
	char arr1[15] = "*****";
	char arr2[] = "Hello World";
	my_strcpy(arr1, arr2);
	printf("%s",arr1);
	return 0;
}

模拟实现strcpy

#include<stdio.h>
int my_strcmp(const char* p1, const char* p2)
{
	while (*p1 == *p2)
	{
		p1++;
		p2++;
		if (*p1 == '\0')
		{
			return 0;
		}
	}
	return *p1 - *p2;
}
int main()
{
	char arr1[] = "abdde";
	char arr2[] = "abcde";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}

模拟实现strcmp


#include<stdio.h>
char* my_strcat(char* dest, const char* cur)
{
	char* p = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *cur++)
	{
		;
	}
	return p;
}

int main()
{
	char arr1[20] = "Hello ";
	char arr2[] = "World";
	my_strcat(arr1, arr2);
	printf("%s",arr1);
	return 0;
}

模拟实现strcat



#include<stdio.h>

char* my_strstr(char* str1, const char* str2)
{
	const char* p = str1;
	const char* s1 = str1;
	const char* s2 = str2;
	if (*str2 == '\0')
		return str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abcdeasfa";
	char arr2[] = "bcde";
	char* p = my_strstr(arr1, arr2);
	if (p == NULL)
	{
		printf("不存在\n");
	}
	else
		printf("%s\n",p);
	return 0;
}
模拟实现strstr