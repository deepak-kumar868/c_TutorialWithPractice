#include <stdio.h>
int test(int x, int y, int z)
{
    return x < y && y < z;
}
int main()
{
    printf("%d\n", test(1, 2, 3));
    printf("%d\n", test(4, 5, 6));
    printf("%d\n", test(-1, 1, 0));
}