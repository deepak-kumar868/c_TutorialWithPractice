#include <stdio.h>
int test();

int main()
{
    printf("%d\n", test(103));
    printf("%d\n", test(76));
    printf("%d\n", test(196));
}

int test(int x)
{
    return x >= 100 && x <= 200;
}