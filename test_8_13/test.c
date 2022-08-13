#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
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
		printf("%s ",(p+i)->name);
	}
	printf("\n");
}
void print_stu_age(struct Stu* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",(p+i)->age);
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
	return ((struct Stu*)e1)->age - ((struct Stu*)e1)->age;
}
int main()
{
	int arr[10] = { 8,7,4,1,2,5,6,3,9,10 };
	struct Stu s[] = { {"zhangsan",20}, {"lisi",35}, {"wangwu",18}};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sz_stu = sizeof(s) / sizeof(s[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	qsort(s, sz_stu, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz_stu, sizeof(s[0]), cmp_stu_by_age);
	print(arr,sz);
	print_stu_name(s,sz_stu);
	print_stu_age(s, sz_stu);
	return 0;
}

qsort π”√¡∑œ∞