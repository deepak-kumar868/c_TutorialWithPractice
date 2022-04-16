#include <stdio.h>

int main()
{
    int i, apple, orange, l, r, m, n, a = 0, o = 0;
    printf("enter the co-ordinate of house:");
    scanf("%d%d", &l, &r);
    printf("enter the co-ordinate of apple and orange tree:");
    scanf("%d%d", &apple, &orange);
    printf("enter the no. of appple and no. of orange fall:");
    scanf("%d%d", &m, &n);
    int app[m], orr[n];
    printf("enter the coordinate of apple:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &app[i]);
        if (apple + app[i] >= l)
        {
            a++;
        }
    }
    printf("enter the coordinate of orange:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &orr[i]);
        if (orange + orr[i] <= r)
        {
            o++;
        }
    }
    printf(" the number of apples that fall on Sam's house is:%d\n", a);
    printf(" the number of orange that fall on Sam's house is:%d", o);

    return 0;
}