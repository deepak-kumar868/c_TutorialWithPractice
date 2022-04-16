// Memory leak

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    while (i < 3456)
    {
        printf("Welcome to deepak tutorial");
        int *i2 = malloc(34567 * sizeof(int));
        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);
    }
}
