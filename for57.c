#include <stdio.h>

int main()
{
    int n, i;
    printf("input the no. of character of string:");
    scanf("%d", &n);
    char str[n];
    printf("input a string:");
    scanf("%s", str);
    printf("the reverse string is:");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}