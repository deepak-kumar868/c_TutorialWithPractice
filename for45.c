#include <stdio.h>

int main()
{
    int n1, n2, i, j, lcm;
    printf("input first number:");
    scanf("%d", &n1);
    printf("input second number:");
    scanf("%d", &n2);
    if (n1 > n2)
    {
        j = n1;
    }
    else
    {
        j = n2;
    }
    for (i = j;; i++)
    {
        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("the lcm is:%d", lcm);

    return 0;
}