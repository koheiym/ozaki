#include <stdio.h>

#define N 3 // perm(N-1) で順列が表示される。

char p[];

void perm(int);

void main(void)
{
    char p[N] = "abc";
    perm(0);
}

void swap(char *a, char *b)
{
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void perm(int i)
{
    int j;

    if (i < N - 1)
    {
        for (j = i; j < N; j++) // Loop
        {
            printf("これ");
            swap(&p[i], &p[j]); // swap1
            perm(i + 1);        // 再帰呼び出し
            swap(&p[i], &p[j]); // swap2（元に戻す）
        }
    }
    else //(i == N-1)　　
    {
        for (j = 0; j < N; j++)
            printf("%d", p[j]);
        printf("\n");
    }
}