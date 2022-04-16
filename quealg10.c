#include <stdio.h>
#include <stdlib.h>
int test(int x, int y)
{
    if (abs(x - 100) > abs(y - 100))
    {
        return y;
    }

    else if (abs(x - 100) < abs(y - 100))
    {
        return x;
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("%d\n", test(78, 95));
    printf("%d\n", test(95, 95));
    printf("%d\n", test(99, 70));
}