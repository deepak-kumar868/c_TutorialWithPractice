#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int catA[n], catB[n], mouseC[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &catA[i]);
        scanf("%d", &catB[i]);
        scanf("%d", &mouseC[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (abs(mouseC[i] - catA[i]) == abs(mouseC[i] - catB[i]))
        {
            printf("Mouse C\n");
        }
        else if (abs(mouseC[i] - catA[i]) > abs(mouseC[i] - catB[i]))
        {
            printf("Cat B\n");
        }
        else if (abs(mouseC[i] - catA[i]) < abs(mouseC[i] - catB[i]))
        {
            printf("Cat A\n");
        }
    }
    return 0;
}