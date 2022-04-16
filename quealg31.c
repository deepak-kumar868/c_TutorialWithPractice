#include <stdio.h>
int test(int x, int y, int z);
int num(int n)
{
    return n >= 10 && n <= 20 && n != 13 && n != 17 ? 0 : n;
}

int test(int x, int y, int z)
{
    return num(x) + num(y) + num(z);
}

int main()
{
    printf("%d\n", test(4, 5, 7));
    printf("%d\n", test(7, 4, 12));
    printf("%d\n", test(10, 13, 12));
    printf("%d\n", test(13, 12, 18));
}