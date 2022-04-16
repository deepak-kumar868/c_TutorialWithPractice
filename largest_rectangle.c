#include <stdio.h>

int main()
{
    int n, l, i, j, area, max = 0;
    printf("enter the no. of building");
    scanf("%d", &n);
    int h[n];
    printf("enter the length of building:");
    scanf("%d", &l);
    printf("enter the height of building:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &h[i]);
    }

    for (i = 1; i < n; i++)
    {
        area = 0;
        for (j = i; j < n; j++)
        {
            area += h[i] * l;
        }
        if (area > max)
        {
            max = area;
        }
    }
    printf("maximum area for mall is:%d", max);

    return 0;
}