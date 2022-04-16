#include <stdio.h>

int main()
{
    int n, i, l, h;
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the element of array:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the interval:");
    scanf("%d%d", &l, &h);
    int a = arr[l], b = arr[l];
    for (i = l; i <= h; i++)
    {
        if (arr[i] < a)
        {
            b = a;
            a = arr[i];
        }
    }
    int s = (((b & a) ^ (b | a)) & (b ^ a));
    printf("%d", s);
    return 0;
}