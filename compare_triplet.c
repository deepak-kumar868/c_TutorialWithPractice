#include <stdio.h>

int main()
{
    int a, b, c, a1, b1, c1, alica = 0, bob = 0;
    printf("enter the alica score:");
    scanf("%d%d%d", &a, &b, &c);
    printf("enter the bob score:");
    scanf("%d%d%d", &a1, &b1, &c1);
    if (a1 > a)
    {
        bob++;
    }
    else if (a > a1)
    {
        alica++;
    }
    if (b1 > b)
    {
        bob++;
    }
    else if (b > b1)
    {
        alica++;
    }

    if (c1 > c)
    {
        bob++;
    }
    else if (c > c1)
    {
        alica++;
    }

    if (alica > bob)
    {
        printf("Alica won\n");
        printf("Bob lose");
    }

    return 0;
}