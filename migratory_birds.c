#include <stdio.h>

int main()
{
    int i, n, max = 0, j, type;
    printf("enter the no. of sight of birds:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the type of sighted birds:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        int cout = 1;
        if (arr[i] != 0)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = 0;
                    cout++;
                }
            }
            if (cout > max)
            {
                max = cout;
                type = arr[i];
            }
        }
    }

    printf("type%d birds was sighted maximum %d times", type, max);

    return 0;
}