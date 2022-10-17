#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int year, month, n;
    while (scanf("%d %d %d", &year, &month, &n) != EOF)
    {
        int count = 0;
        int year_count = 0;
        int month_count = 0;
        int day_count = 0;
        int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            arr[2] += 1;
        }
        int a = year;
        //记录年份中出现的次数
        while (a)
        {
            if (a % 10 == n)
            {
                year_count++;
            }
            a /= 10;
        }
        //记录月份中出现的次数
        int b = month;
        while (b)
        {
            if (b % 10 == n)
            {
                month_count++;
            }
            b /= 10;
        }
        int i = 0;
        //记录日期中出现的次数
        for (i = 1; i <= arr[month]; i++)
        {
            int c = i;
            while (c)
            {
                if (c % 10 == n)
                {
                    day_count++;
                }
                c /= 10;
            }
        }
        if (n == 0 && month < 10)
        {
            month_count += 1;
        }
        if (n == 0)
        {
            day_count += 9;
        }
        count = day_count + arr[month] * (year_count + month_count);
        printf("%d\n", count);
    }
    return 0;
}
数字统计

#include<stdio.h>
int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int i = 0;
    int count = 0;
    for (i = l; i <= r; i++)
    {
        int a = i;
        while (a)
        {
            if (a % 10 == 2)
            {
                count++;
            }
            a /= 10;
        }
    }
    printf("%d", count);
    return 0;
}

牛客竞赛 日历中的数字