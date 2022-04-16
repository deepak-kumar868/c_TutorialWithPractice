#include <stdio.h>
int test(int n, int arr[n])
{
    int total = 0, i;
    for (i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}
int main()
{
    int arr1[5] = {10, 20, 30, 40, 50};
    printf("%d\n", test(5, arr1));

    int arr2[5] = {10, 20, -30, -40, 50};
    printf("%d", test(5, arr2));
}