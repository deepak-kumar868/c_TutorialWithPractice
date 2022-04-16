#include <stdio.h>
int test(int x, int y, int z)
{
    return z == x + y || x == z + y || y == z + x;
}
int main()
{
    printf("%d\n", test(1, 2, 3));
    printf("%d\n", test(4, 5, 6));
    printf("%d", test(-1, 1, 0));
}