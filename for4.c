#include <stdio.h>

int main()
{
    int i, arr[10];
    float average, total = 0;
    printf("input 10 number:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    average = total / 10;
    printf("the average is :%f", average);

    return 0;
}