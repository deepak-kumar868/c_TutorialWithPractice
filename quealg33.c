#include <stdio.h>
int test(int x, int y, int z)
{
    if (x < z && y < z && y > x)
    {
        return x - y == y - z;
    }
}
int main()
{
    printf("%d\n", test(4, 5, 6));
    printf("%d\n", test(7, 12, 13));
    printf("%d\n", test(-1, 0, 1));
}