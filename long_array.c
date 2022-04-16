#include <stdio.h>

int main()
{
    long long int n, i, sum = 0;
    printf("enter the size of array:");
    scanf("%lld", &n);
    long arr[n];
    printf("enter the element of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }
    printf("the sum of this array is:%lld", sum);

    return 0;
}