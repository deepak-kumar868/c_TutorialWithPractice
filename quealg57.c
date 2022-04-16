#include <stdio.h>
int test(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[3] > arr[5])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[] = {1, 5, 6, 9, 3, 3};
    int arr2[] = {1, 5, 5, 5, 10, 17};
    int arr3[] = {1, 3, 3, 5, 5, 5};

    printf("%d\n", test(6, arr1));
    printf("%d\n", test(6, arr2));
    printf("%d\n", test(6, arr3));

    return 0;
}