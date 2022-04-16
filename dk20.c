#include <stdio.h>
int main()
{
    int a = 78;
    //int*ptr=NULL;
    int *ptr = &a;

    if (ptr != NULL)
    {
        printf("the value of a is %d\n", *ptr);
    }
    else
    {
        printf("the pointer is null pointer");
    }
    return 0;
}
