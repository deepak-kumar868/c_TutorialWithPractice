#include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("number between 100 and 200,divisible by 9:");
    for (i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            printf("%d\t", i);
            sum += i;
        }
    }
    printf("\n");
    printf("the sum is:%d", sum);

    return 0;
}