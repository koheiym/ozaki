#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int n);

void main()
{
    int n1, n2, con, max;
    n1 = 100;
    n2 = n1;
    con = 0;
    max = 10000;
    while (n2 < max)
    {
        bool a = is_prime(n2);
        if (a)
        {
            if (is_prime(n2 + 2) && is_prime(n2 + 6) || is_prime(n2 + 4) && is_prime(n2 + 6))
            {

                con++;
            }
        }
        n2++;
    }
    printf("%d以上%d以下の三つ子素数の数は%d個", n1, max, con);
}

bool is_prime(int n)
{
    int con = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            con++;
        }
    }
    if (con == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}