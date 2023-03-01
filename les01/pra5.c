#include <stdio.h>
#include <string.h>
void substrings(char string[]);

int main(void)
{
    char string[] = "abcd";
    char *s = string;
    substrings(string);
    return 0;
}

void substrings(char string[])
{
    char *s;
    int max = strlen(string);

    for (int i = 0; i < max; i++)
    {
        s = string;
        for (int j = 0; j <= i; j++)
        {
            printf("%c", *s);
            s++;
        }
        printf("\n");
    }
    s = string;
    s++;
    string = s;
    if (string[0] != '\0')
    {
        substrings(string);
    }
}