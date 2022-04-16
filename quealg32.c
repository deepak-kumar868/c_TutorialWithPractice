#include <stdio.h>
int test(int x, int y)
{
    return x > 13 && y > 13 ? 0 : x <= 13 && y > 13         ? x
                              : y <= 13 && x > 13           ? y
                              : x <= 13 && y <= 13 && x > y ? x
                                                            : y;
}
int main()
{
    printf("%d\n", test(4, 5));
    printf("%d\n", test(7, 12));
    printf("%d\n", test(10, 13));
    printf("%d\n", test(17, 33));
}