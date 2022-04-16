#include <stdio.h>
int test(int x, int y, int z)
{
    return x == y ? z : x == z ? y
                    : y == z   ? x
                               : x + y + z;
}
int main()
{
    printf("%d\n", test(4, 5, 7));
    printf("%d\n", test(7, 4, 12));
    printf("%d\n", test(10, 10, 12));
    printf("%d\n", test(12, 12, 18));
}