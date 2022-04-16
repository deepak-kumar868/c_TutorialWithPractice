#include <stdio.h>

int main()
{
    int d, m, i, n, j, cout = 0;
    printf("enter the no. of square in chocolate:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the day and month of Ron'sbirthday:");
    scanf("%d%d", &d, &m);
    printf("input the no. on the chocolate's square:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - m; i++)
    {
        int sum = 0;
        for (j = i; j < m + i; j++)
        {
            sum += arr[j];
        }
        if (sum == d)
        {
            cout++;
        }
    }
    printf("lily can divide th chocolate in %d ways", cout);
    return 0;
}