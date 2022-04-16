#include <stdio.h>
int test(int x)
{
    return (x % 3 == 0 || x % 7 == 0) && x % 21 != 0;
}
int main()
{
    printf("%d\n", test(3));
    printf("%d\n", test(7));
    printf("%d\n", test(21));
}