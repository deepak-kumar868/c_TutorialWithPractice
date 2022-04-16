#include <stdio.h>

int main()
{
    int hrs, min;
    printf("input the hours and minute:");
    scanf("%d%d", &hrs, &min);
    printf("total minute=%d", hrs * 60 + min);
    return 0;
}