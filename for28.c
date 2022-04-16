#include <stdio.h>

int main()
{
    int n1, n2, i, j, sum;
    printf("input range:");
    scanf("%d%d", &n1, &n2);
    printf("the perfect number in this range is :");
    while (n1 <= n2)
    {
        sum = 0;
        for (i = 1; i < n1; i++)
        {
            if (n1 % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n1)
        {
            printf("%d\t", n1);
        }
        n1++;
    }
    return 0;
}