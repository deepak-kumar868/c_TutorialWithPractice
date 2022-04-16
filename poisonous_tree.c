#include <stdio.h>

int main()
{
    int n, i, cout = 0;
    printf("enter the no. of tree:");
    scanf("%d", &n);
    int a[n];
    printf("enter the level of pestisides of tree:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0], max1 = a[0];

label:
    max1 = max;
    for (i = 1; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
            a[i] = 0;
        }
    }
    if (max != max1)
    {
        cout++;
        goto label;
    }

    printf("after %d days death of tree will stop", cout);

    return 0;
}