#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < n; i++)
        {
            if (i == 0 || i == (n - 1))
            {
                for (j = 0; j < n; j++)
                {
                    printf("* ");
                }
                //printf("\n");
            }
            else
            {
                printf("* ");
                for (j = 1; j < n - 1; j++)
                {
                    printf("  ");
                }
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

BC69 空心正方形图案

#include<stdio.h>
void insert(int* p, int n, int num)
{
    int count = 0;
    int i = 0;
    int arr[50];
    while (num >= *(p + count) && count < n)
    {
        count++;
    }
    int k = count;
    for (i = n; i >= k + 1; i--)
    {
        *(p + i) = *(p + i - 1);
    }
    *(p + count) = num;
}
int main()
{
    int n = 0;
    int arr[51];
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int num = 0;
    scanf("%d", &num);
    insert(arr, n, num);
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

BC77 有序序列插入一个数

#include<stdio.h>
int main()
{
    int n = 0;
    int i, j;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n + 1; i++)
        {
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}

BC105 菱形图案


#include<stdio.h>
int main()
{
    int i, j;
    int arr[7] = { 0 };
    /*for(i = 0;i < 7;i++)
    {
        scanf("%d",&arr[i]);
    }*/
    while (scanf("%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
    {
        int sum = 0;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int tem = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tem;
                }
            }
        }
        for (i = 1; i < 6; i++)
        {
            sum += arr[i];
        }
        printf("%.2f\n", sum / 5.0);
    }
    return 0;
}

BC93 公务员面试

#include<stdio.h>
int main()
{
    int n, i, j;
    int count = 0;
    int arr[3];
    int sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        for (j = 0; j < 3; j++)
        {
            sum += arr[j];
        }
        sum /= 3;
        if (sum < 60)
            count++;
        sum = 0;
    }
    printf("%d", count);
    return 0;
}

BC90 小乐乐算多少人被请家长

#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, t;
    while (scanf("%f %f %f", &a, &b, &c) != EOF)
    {
        if (a == 0)
        {
            printf("Not quadratic equation\n");
        }
        else
        {
            t = b * b - 4.0 * a * c;
            if (t == 0)
            {
                printf("x1=x2=%.2f\n", (-b) / (2.0 * a) + 0.00);
            }
            else if (t > 0)
            {
                printf("x1=%.2f;x2=%.2f\n", ((-b) - sqrt(t)) / (2.0 * a), ((-b) + sqrt(t)) / (2.0 * a));
            }
            else
            {
                float y;
                y = sqrt(-t) / (2 * a);
                if (y < 0)
                    y = -y;
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), y, -b / (2 * a), y);
            }
        }
    }
    return 0;
}

BC73 计算一元二次方程