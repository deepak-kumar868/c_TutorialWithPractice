#include <stdio.h>

int test(int x)
{
    return x < 0 || x > 100;
}

int main()
{

    printf("%d\n", test(101));
    printf("%d\n", test(-76));
    printf("%d\n", test(5));
}