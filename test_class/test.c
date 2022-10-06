#include<stdio.h>
#include<string.h>
#include<assert.h>
void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* e1 = dest;
	assert(dest);
	assert(src);
	
	while (num--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return e1;
}

void* my_memmove(void* dest, const void* src, size_t num)
{
	void* e1 = dest;
	assert(dest);
	assert(src);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return e1;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	my_memcpy(arr2, arr1, 20);
	my_memmove(arr1+2,arr1,20);
	return 0;
}