#include <stdio.h>
int test(int x, int y)
{
    if (x == y)
    {
        return 0;
    }
    else if (x % 5 == y % 5 && x < y)
    {
        return x;
    }
    else if (x % 5 == y % 5 && x > y)
    {
        return y;
    }
}
int main()
{
    printf("%d\n", test(11, 21));
    printf("%d\n", test(11, 20));
    printf("%d\n", test(10, 10));
}