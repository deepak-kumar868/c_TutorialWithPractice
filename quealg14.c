#include <stdio.h>
int test(int n, int arr[n])
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 2 && arr[i + 2] == 3)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[5] = {1, 1, 2, 3, 1};
    printf("%d\n", test(5, arr1));

    int arr2[5] = {1, 1, 2, 4, 1};
    printf("%d\n", test(5, arr2));

    int arr3[6] = {1, 2, 2, 1, 2, 3};
    printf("%d\n", test(6, arr3));
}