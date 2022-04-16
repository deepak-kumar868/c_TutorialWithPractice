#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("input number of terms:");
    scanf("%d", &n);
    printf("the even number is:");
    for (i = 1; i < 2 * n + 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
            sum += i;
        }
    }
    printf("\n");
    printf("the sum is:%d", sum);

    return 0;
}