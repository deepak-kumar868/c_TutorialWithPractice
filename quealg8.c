#include <stdio.h>
int test(int x, int y, int z)
{
    return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}

int main()
{
    printf("%d\n", test(21, 76, 55));
    printf("%d\n", test(21, 34, 55));
    printf("%d\n", test(19, 76, 49));
    printf("%d\n", test(19, 76, 55));
}