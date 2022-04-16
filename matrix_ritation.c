#include <stdio.h>

int main()
{
    int m, n, r, i, j, min, k;
    printf("enter the size of matrix:");
    scanf("%d%d", &m, &n);
    printf("enter the number of rotation:");
    scanf("%d", &r);

    if (m >= n)
    {
        min = n;
    }
    else
    {
        min = m;
    }

    int ring = min / 2;

    int arr[m][n];
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 1; i <= ring; i++)
    {
        while (r)
        {
            int t = arr[1][1];
            for (j = 1; j <= m; j++)
            {
                for (k = 1; k <= n; i++)
                {
                    if (k == i && k != m)
                    {
                        arr[j][k] = arr[j][k + 1];
                    }
                    if (k == m && k != n)
                    {
                        arr[j][k] = arr[j + 1][k];
                    }
                    if (j == n && k != i)
                    {
                        arr[j][m + 1 - k] = arr[j][m - k];
                    }
                    if (k == i && j != i)
                    {
                        arr[j][k] = arr[j - 1][k];
                    }
                }
                arr[1][1] = t;
            }
        }
        r--;
    }

    return 0;
}