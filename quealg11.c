#include <stdio.h>
int test(int x, int y)
{
    return (x >= 40 && y <= 50) || (y >= 40 && y <= 50) || (x >= 500 && y <= 60) || (y >= 50 && y <= 60);
}
int main()
{
    printf("%d\n", test(78, 95));
    printf("%d\n", test(25, 35));
    printf("%d\n", test(40, 50));
    printf("%d\n", test(55, 60));
}