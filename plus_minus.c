#include <stdio.h>

int main()
{
    int n, i;
    float plus = 0, minus = 0, neutral = 0;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the data of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            neutral++;
        }
    }
    printf("the ratio of positive element is:%f\n", plus / n);
    printf("the ratio of negative is element is:%f\n", minus / n);
    printf("the ratio of neutral element is:%f", neutral / n);

    return 0;
}