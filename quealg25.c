#include <stdio.h>
int test(int x, int y, int z)
{
    return x % 10 == y % 10 || y % 10 == z % 10 || z % 10 == x % 10;
}
int main()
{
    printf("%d\n", test(11, 21, 31));
    printf("%d\n", test(11, 22, 31));
    printf("%d\n", test(11, 22, 33));
}