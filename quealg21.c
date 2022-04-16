#include <stdio.h>
int test(int n)
{
    return n % 10 <= 2 || n % 10 >= 8;
}
int main()
{
    printf("%d\n", test(3));
    printf("%d\n", test(7));
    printf("%d\n", test(8));
    printf("%d\n", test(21));
}