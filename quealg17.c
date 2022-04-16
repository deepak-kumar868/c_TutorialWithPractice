#include <stdio.h>
int test(int a, int b)
{
    return a + b >= 10 && a + b <= 20 ? 30 : a + b;
}
int main()
{
    printf("%d\n", test(12, 17));
    printf("%d\n", test(2, 17));
    printf("%d\n", test(22, 17));
    printf("%d", test(20, 0));
}