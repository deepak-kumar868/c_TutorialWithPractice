#include <stdio.h>

int main()
{
    int i, scores, max, min, best = 0, wrost = 0;
    printf("enter the no. of season:");
    scanf("%d", &scores);
    int arr[scores];
    printf("enter the scores of all season:");
    for (i = 0; i < scores; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    max = arr[0];
    min = arr[0];
    for (i = 1; i < scores; i++)
    {
        if (arr[i] > max)
        {
            best++;
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            wrost++;
            min = arr[i];
        }
    }
    printf("maria broke her best record %d times.\n", best);
    printf("maria broke her wrost record %d times.", wrost);

    return 0;
}