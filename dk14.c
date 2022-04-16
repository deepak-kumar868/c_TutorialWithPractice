#include <stdio.h>
int main()
{
    int a = 45;
    int *ptra = &a;
label:
    printf("the vaule of a is %d\n", a);
    printf("the vaule is %d\n", *ptra);
    printf("the space is %d\n", &ptra);
    printf("the space is %d\n", &ptra + 6);
    printf("the space is %d\n", &ptra + 8);
    printf("the space is %d\n", &ptra + 10);
    printf("the adress of a is %d\n", ptra);
    printf("the space is %p\n", &a + 2);

    return 0;
}
