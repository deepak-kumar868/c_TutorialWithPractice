#include <stdio.h>

int test(int n)
{
    return n % 13 == 0 || n % 13 == 1;
}
int main()
{
    printf("%d\n", test(13));
    printf("%d\n", test(14));
    printf("%d\n", test(27));
    printf("%d\n", test(41));
}