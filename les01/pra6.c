#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void perm(char string[])
{
    pattern(string[0], string[2]);
    perm
}

int pattern(char *a, char[] * b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    char string[3] = "abc";
    perm(string);
    return 0;
}