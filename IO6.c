#include <stdio.h>

int main()
{
    int min;
    printf("input minute:");
    scanf("%d", &min);
    printf("hours=%d \n minute=%d", min / 60, min % 60);
    return 0;
}