#include <stdio.h>
#include <stdlib.h>

int test(int n, int arr[n])
{
    int i;
    for (i = 0; i < n - 2; i++)
    {
        if (arr[i] = arr[i + 1] && arr[i + 2] == arr[i])

            return 1;
    }
    return 0;
}
int main()
{
    int arr1[5] = {1, 1, 2, 2, 1};
    printf("%d\n", test(5, arr1));

    int arr2[6] = {1, 1, 2, 1, 2, 3};
    printf("%d\n", test(6, arr2));

    int arr3[7] = {1, 1, 1, 2, 2, 2, 1};
    printf("%d", test(7, arr3));
}
