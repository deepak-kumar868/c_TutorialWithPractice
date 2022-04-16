#include <stdio.h>

int main()
{
    int i, sum = 0;
    printf("the first natural number is:");
    for (i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
        sum += i;
    }
    printf("\n");
    printf("the sum of first 10 natural number is:%d", sum);
    return 0;
}