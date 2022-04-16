#include <stdio.h>

int main()
{
    int n, i;
    printf("enter the no. of student in class:");
    scanf("%d", &n);
    int arr[n], grade[n];
    printf("   enter the marks of student\n");
    printf("-----------------------------------\n");
    for (i = 1; i <= n; i++)
    {
        printf("Sno.%d:", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 5 >= 3 && arr[i] > 40)
        {
            grade[i] = arr[i] + (5 - arr[i] % 5);
        }
        else if (arr[i] % 5 < 3 && arr[i] > 40)
        {
            grade[i] = arr[i];
        }
        else
        {
            grade[i] = 0;
        }
    }
    printf("\n");
    printf("    Grade list of all student\n");
    printf("-------------------------------------\n");
    for (i = 1; i <= n; i++)
    {
        if (grade[i] == 0)
        {
            printf("%d:fail\n", i);
        }
        else
        {
            printf("%d:%d\n", i, grade[i]);
        }
    }

    return 0;
}