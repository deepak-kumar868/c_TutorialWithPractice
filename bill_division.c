#include <stdio.h>

int main()
{
    int n, i, bill, el, sum = 0;
    printf("How many dish anna and brian ordered:");
    scanf("%d", &n);
    int arr[n];
    printf("enter the cost of dish:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("enter the index of dish that anna's not eat:");
    scanf("%d", &el);
    printf("enter the bill that brian charged to anna:");
    scanf("%d", &bill);
    printf("brian should have to return %d ruppee", sum / 2 - (sum - arr[el]) / 2);

    return 0;
}