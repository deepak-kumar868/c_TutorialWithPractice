#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("input the number of terms:");
    scanf("%d", &n);
    printf("square of natural number:");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i * i);
        sum += i * i;
    }
    printf("\n");
    printf("the sum of square natural number:%d", sum);

    return 0;
}