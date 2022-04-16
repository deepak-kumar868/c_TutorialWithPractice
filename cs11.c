#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float root1, root2;
    printf("input te value of a,b,c:");
    scanf("%d%d%d", &a, &b, &c);
    d = sqrt(b * b - 4 * a * c);
    root1 = (-b + d) / 2 * a;
    root2 = (-b - d) / 2 * a;
    if (d < 0)
    {
        printf("root are imaginary");
    }
    else
    {
        printf("root of quadratic is: %f\n%f", root1, root2);
    }
    return 0;
}