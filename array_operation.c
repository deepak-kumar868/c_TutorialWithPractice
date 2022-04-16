#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, up, i, l, x, y, m, temp;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the no. of update that you performs:");
    scanf("%d", &up);
    int arr[n];
    int type[up];
    int j[up];
    int k[up];
    printf("enter the element of array:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        printf("\t");
    }
    for (m = 1; m <= up; m++)
    {
        printf("enter type:");
        scanf("%d", &type[m]);
        printf("enter lower limit:");
        scanf("%d", &j[m]);
        printf("enter upper limit:");
        scanf("%d", &k[m]);

        if (type[m] == 1)
        {
            for (i = j[m]; i <= k[m]; i++)
            {
                int l = j[m];
                while (l < n)
                {
                    temp = arr[l];
                    arr[l] = arr[l + 1];
                    arr[l + 1] = temp;
                    l++;
                }
            }
        }
        else if (type[m] == 2)
        {
            for (i = j[m]; i <= k[m]; i++)
            {
                int p = k[m];
                while (p > 1)
                {
                    temp = arr[p];
                    arr[p] = arr[p - 1];
                    arr[p - 1] = temp;
                    p--;
                }
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}