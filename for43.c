#include <stdio.h>

int main()
{
    int n1, n2, j, i, hcf;
    printf("input 1st number for HCF:");
    scanf("%d", &n1);

    printf("input 2nd number for HCF:");
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
    printf("the hcf is :%d", hcf);

    return 0;
}