#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char n = 0;
    while (scanf("%c", &n) != EOF)
    {
        getchar();
        if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
            printf("%c is an alphabet.\n", n);
        else
            printf("%c is not an alphabet.\n", n);
    }
    return 0;
}

BC47 - 判断是不是字母

#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            arr[2] += 1;
        }
        printf("%d\n", arr[month]);
    }
    return 0;
}

BC54 - 获得月份天数

#include<stdio.h>
int main()
{
    char n;
    while (scanf("%c", &n) != EOF)
    {
        getchar();
        if (n >= 'A' && n <= 'Z')
            printf("%c\n", n + 32);
        else
            printf("%c\n", n - 32);
    }
    return 0;
}

BC48 - 字母大小写转换

#include<stdio.h>
int main()
{
    double money;
    int month, day, n;
    scanf("%f %d %d %d", &money, &month, &day, &n);
    if (month == 11 && day == 11)
    {
        if (n)
        {
            money = 0.7 * money - 50;
        }
        else money = 0.7 * money;
    }
    if (month == 12 && day == 12)
    {
        if (n)
        {
            money = 0.8 * money - 50;
        }
        else money = 0.8 * money;
    }
    if (money < 0.0)
        money = 0;
    printf("%.2lf", money);
    return 0;
}


BC37 - 网购