#include <stdio.h>

int main()
{
    int i, j;
    char chr = '*';
    for (i = 1; i <= 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}