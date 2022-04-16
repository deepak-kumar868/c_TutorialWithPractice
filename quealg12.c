#include <stdio.h>

int test(int x, int y)
{
    if ((x >= 20 && y <= 30) || (y >= 20 && x <= 30))
    {
        if (x > y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    printf("%d\n", test(78, 95));
    printf("%d\n", test(20, 30));
    printf("%d\n", test(21, 25));
    printf("%d\n", test(28, 28));
}