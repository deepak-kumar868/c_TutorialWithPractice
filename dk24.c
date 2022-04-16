//function pointer

#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    // printf("the sum of 4 and 5 is %d\n", sum(4, 5));
    int (*fptr)(int, int);
    fptr = sum; //fptr=&sum
    int d = (*fptr)(4, 6);
    printf("the vaule of d is %d", d);
    return 0;
}
