#include <stdio.h>

int main()
{
    int n1, n2, sum, r, n;
    printf("input lower value of range:");
    scanf("%d", &n1);
    n = n1;
    printf("input upper value of range:");
    scanf("%d", &n2);
    printf("armstrong number in this range is:");
    while (n <= n2)
    {
        sum = 0;
        n1 = n;
        while (n1 != 0)
        {
            r = n1 % 10;
            sum += r * r * r;
            n1 = n1 / 10;
        }
        if (sum == n)
        {
            printf("%d\t", n);
        }
        n++;
    }

    return 0;
}