#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int i = 0;
    int n = 0;
    int num = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        num ^= arr[i];
    }
    printf("%d", num);
    return 0;
}

KS33 Ñ°ÕÒÆæÊı

int findPeakElement(int* nums, int numsLen) {
    int i = 0;
    int max = nums[0];
    if (nums[0] > nums[1])
        return 0;
    if (nums[numsLen - 1] > nums[numsLen - 2])
        return numsLen - 1;
    for (i = 1; i < numsLen - 1; i++)
    {
        if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
        {
            return i;
        }
    }
    return 0;
}

NC107 Ñ°ÕÒ·åÖµ

#include<stdio.h>
int main()
{
    char str[10001] = { 0 };
    gets(str);
    int n = 0;
    scanf("%d", &n);
    str[n] = '\0';
    puts(str);
    return 0;
}

HJ46 ½ØÈ¡×Ö·û´®