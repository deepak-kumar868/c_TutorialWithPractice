#include <stdio.h>
int test(int x, int y)
{
    return (x >= 10 && x <= 20) || (y >= 10 && y <= 20) ? 18 : x + y;
}
int main()
{
    printf("%d\n", test(3, 7));
    printf("%d\n", test(10, 11));
    printf("%d\n", test(10, 20));
    printf("%d\n", test(21, 220));
}