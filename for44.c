#include <stdio.h>

int main()
{
    int n1, n2, i, j, hcf;
    printf("input first number:");
    scanf("%d", &n1);
    printf("input second number:");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        j = n2;
    }
    else
    {
        j = n1;
    }
    for (i = 1; i <= j; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("the lcm is:%d", n1 * n2 / hcf);

    return 0;
}