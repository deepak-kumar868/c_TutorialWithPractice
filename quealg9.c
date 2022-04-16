#include <stdio.h>

int test(int x, int y)
{
    return (x <= 20 || y >= 50) || (x >= 50 || y <= 20);
}

int main()
{
    printf("%d\n", test(20, 84));
    printf("%d\n", test(14, 50));
    printf("%d\n", test(11, 45));
    printf("%d\n", test(25, 40));
}