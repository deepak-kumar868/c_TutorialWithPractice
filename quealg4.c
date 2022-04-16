#include <stdio.h>
#include <stdlib.h>

int test(int x)
{
    if (abs(x - 100) <= 10 || abs(x - 200) <= 10)
    {
        return 1;
    }
    return 0;
}
int main(void)
{
    printf("%d\n", test(103));
    printf("%d\n", test(90));
    printf("%d\n", test(89));
}
