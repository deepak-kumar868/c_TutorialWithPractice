#include <stdio.h>
int test(int n, int arr[])
{
    int i, cout = 0, cout1 = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)
        {
            return 1;
        }
        else if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 3, 5, 5, 5, 5};
    int arr3[] = {2, 5, 5, 7, 8, 10};

    printf("%d\n", test(4, arr1));
    printf("%d\n", test(6, arr2));
    printf("%d\n", test(6, arr3));
}