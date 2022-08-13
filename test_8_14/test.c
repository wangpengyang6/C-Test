#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct Stu
{
	char name[20];
	int age;
};

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_stu_name(struct Stu* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", (p + i)->name);
	}
	printf("\n");
}

void print_stu_age(struct Stu* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", (p + i)->age);
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return(*(int*)e1 - *(int*)e2);
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void swap(char* bulf1, char* bulf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *bulf1;
		*bulf1 = *bulf2;
		*bulf2 = tmp;
		bulf1++;
		bulf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int main()
{
	int arr[10] = { 8,7,4,1,2,5,6,3,9,10 };
	struct Stu s[] = { {"zhangsan",20}, {"lisi",35}, {"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz_stu = sizeof(s) / sizeof(s[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);

	bubble_sort(s, sz_stu, sizeof(s[0]), cmp_stu_by_name);
	print_stu_name(s, sz_stu);

	bubble_sort(s, sz_stu, sizeof(s[0]), cmp_stu_by_age);
	print_stu_age(s, sz_stu);
	return 0;
}

模仿qsort的功能实现一个通用的冒泡排序

