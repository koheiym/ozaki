#include <stdio.h>

int sum_divisors(int n);

void main()
{
    int per, max = 10000;
    for (int i = 1; i < max; i++)
    {
        per = sum_divisors(i);
        if (per == i)
        {
            printf("完全数:%d\n", per);
        }
    }
}

int sum_divisors(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += n / i;
        }
    }
    return sum;
}