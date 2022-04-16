#include <stdio.h>

int main()
{
    char str[50];
    int i, m = 0;
    printf("input the string:");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        m++;
    }
    printf("length of string is :%d", m);

    return 0;
}