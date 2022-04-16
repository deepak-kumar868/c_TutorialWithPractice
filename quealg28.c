#include <stdio.h>
int test(int x, int y)
{
    return x % 10 == y / 10 || x / 10 == y % 10 || x / 10 == y / 10 || x % 10 == y % 10;
}
int main()
{
    printf("%d\n", test(11, 21));
    printf("%d\n", test(11, 20));
    printf("%d\n", test(10, 10));
}