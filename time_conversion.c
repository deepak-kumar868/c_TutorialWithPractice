#include <stdio.h>

int main()
{
    int i, h, min, s;
    char c1, c2, p, m;
    printf("input the 12 hour time:");
    scanf("%d%c%d%c%d%c%c", &h, &c1, &min, &c2, &s, &p, &m);
    printf("time in military form is:");
    if (p == 'p' || p == 'P')
    {

        printf(" % d % c % d % c % d % c % c ", h + 12, c1, min, c2, s, p, m);
    }
    else
    {
        printf(" % d % c % d % c % d % c % c ", h, c1, min, c2, s, p, m);
    }

    return 0;
}