#include <stdio.h>
int test(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1] - 1 && arr[i] == arr[i + 2] - 2)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[6] = {1, 2, 3, 5, 3, 7};
    printf("%d\n", test(6, arr1));

    int arr2[6] = {3, 7, 5, 5, 3, 7};
    printf("%d\n", test(6, arr2));

    int arr3[7] = {3, 7, 5, 5, 6, 7, 5};
    printf("%d\n", test(7, arr3));
}