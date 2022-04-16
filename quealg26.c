#include <stdio.h>
#include <stdlib.h>
int test(int x, int y, int z)
{
    return abs(x - y) >= 20 || abs(y - z) >= 20 || abs(z - x) >= 20;
}
int main()
{
    printf("%d\n", test(11, 21, 31));
    printf("%d\n", test(11, 22, 31));
    printf("%d\n", test(10, 20, 15));
}