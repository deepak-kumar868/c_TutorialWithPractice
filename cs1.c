#include <stdio.h>

int main()
{
    int n1, n2;
    printf("neter two number:");
    scanf("%d%d", &n1, &n2);
    if (n1 == n2)
    {
        printf("both number are equal");
    }
    else
    {
        printf("both number are not equal");
    }

    return 0;
}