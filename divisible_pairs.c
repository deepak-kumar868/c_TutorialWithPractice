#include <stdio.h>

int main()
{
    int k, n, i, j, cout = 0;
    printf("enter an positive number:");
    scanf("%d", &k);
    printf("enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the data of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                cout++;
            }
        }
    }
    printf("no. of valid pairs is:%d", cout);
    return 0;
}