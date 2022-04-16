#include <stdio.h>

int main()
{
    int x1, x2, v1, v2;
    printf("enter the starting location and size of jump of kangaroo1:");
    scanf("%d%d", &x1, &v1);
    printf("enter the starting location and size of jump of kangaroo2:");
    scanf("%d%d", &x2, &v2);
    if (x1 > x2 && v1 > v2 || x1 < x2 && v1 < v2)
    {
        printf("NO");
    }
    else
    {
        if ((x1 - x2) % (v1 - v2) == 0)
        {
            printf("YES");
        }
    }

    return 0;
}