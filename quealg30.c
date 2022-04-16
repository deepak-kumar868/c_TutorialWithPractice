#include <stdio.h>
int test(int x, int y, int z)
{
    if (x == 13)
    {
        return 0;
    }
    else if (y == 13)
    {
        return x;
    }
    else if (z == 13)
    {
        return x + y;
    }
    else
    {
        return x + y + z;
    }
}
int main()
{
    printf("%d\n", test(4, 5, 7));
    printf("%d\n", test(7, 4, 12));
    printf("%d\n", test(10, 13, 12));
    printf("%d\n", test(13, 12, 18));
}