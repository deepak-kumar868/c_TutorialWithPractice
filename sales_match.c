#include <stdio.h>

int main()
{
    int i, n, j, cout = 0;
    printf("How many no. of socks you have:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the colour type of all socks:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = 0;
                    cout++;
                    break;
                }
            }
        }
    }

    printf("Number of paired of socks is:%d", cout);

    return 0;
}