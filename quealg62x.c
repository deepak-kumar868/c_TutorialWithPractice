#include <stdio.h>
int test(int n, int arr[])
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 3 && arr[i++] == 5)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 3, 5, 5, 5};
    int arr3[] = {2, 5, 5, 7, 8, 10};

    printf("%d\n", test(4, arr1));
    printf("%d\n", test(5, arr2));
    printf("%d\n", test(6, arr3));
}