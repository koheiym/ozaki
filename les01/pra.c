#include <stdio.h>
#include <math.h>

void factorizntion(int n, int i);

void main()
{
    int n, i = 2;
    printf("Input int->");
    scanf("%d", &n);
    printf("360 ");
    factorizntion(n, i);
}

void factorizntion(int n, int i)
{

    if (n > 1)
    {

        if (n % i == 0)
        {
            n = n / i;
            printf("%d ", i);
            factorizntion(n, i);
        }
        else
        {
            factorizntion(n, i + 1);
        }
    }
}