#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void change(char* left, char* right)
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
    char arr[10001] = { '\0' };
    gets(arr);
    int len = strlen(arr);
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z')
            ;
        else
            arr[i] = ' ';
    }
    char* cur = arr;
    while (*cur)
    {
        char* start = cur;
        char* end = cur;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        change(start, end - 1);
        if (*end != '\0')
        {
            cur = end + 1;
        }
        else
            cur = end;
    }
    change(arr, arr + len - 1);
    printf("%s", arr);
    return 0;
}

HJ31 单词倒排

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    if (n == 0)
        printf("0");
    while (n)
    {
        printf("%d", n % 10);
        n /= 10;
    }
    return 0;
}

HJ11 数字颠倒



#include<stdio.h>
int fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    if (n <= 2)
        return c;
    while (n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}

HJ37 统计每个月兔子的总数

