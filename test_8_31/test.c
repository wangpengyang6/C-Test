#define  _CRT_SECURE_NO_WARNINGS 1


int* masterMind(char* solution, char* guess, int* returnSize) {
    *returnSize = 2;
    static int ret[2] = { 0 };
    int count_guess = 0;
    int count_fguess = 0;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (solution[i] == guess[i])
        {
            count_guess++;
            solution[i] = '0';
            guess[i] = '0';
        }
    }
    for (i = 0; i < 4; i++)
    {
        if (solution[i] != '0')
        {
            int j = 0;
            for (j = 0; j < 4; j++)
            {
                if (solution[i] == guess[j])
                {
                    count_fguess++;
                    guess[j] = '0';
                    break;
                }
            }
        }
    }
    ret[0] = count_guess;
    ret[1] = count_fguess;
    return ret;
}

 leetcode 题号：面试题 16.15. 珠玑妙算

#include<stdio.h>
#include<math.h>
int main()
{
    double n = 0.00;
    int m = 0;
    while (scanf("%lf %d", &n, &m) != EOF)
    {
        double arr[1000] = { 0.00 };
        int i = 0;
        double sum = n;
        for (i = 0; i < m - 1; i++)
        {
            arr[i] = sqrt(n);
            sum += arr[i];
            n = sqrt(n);
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}

ZJ16 数列的和


int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    static int ret[2] = { 0 };
    *returnSize = 2;
    for (i = 0; i < numbersLen; i++)
    {
        if (numbers[i] > target)
            continue;
        for (j = i + 1; j < numbersLen; j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                ret[0] = i + 1;
                ret[1] = j + 1;
            }
        }
    }
    return ret;
}

NC61 两数之和
