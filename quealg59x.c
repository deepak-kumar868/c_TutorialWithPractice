#include <stdio.h>
int test(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
    {
    }
    return arr[i] != 3 ? 1 : arr[i] != 5 ? 1
                                         : 0;
}
int main()
{
    int arr1[] = {1, 5, 5, 5, 5};
    int arr2[] = {3, 3, 3, 3};
    int arr3[] = {3, 3, 3, 5, 5, 5};
    int arr4[] = {1, 6, 8, 10};

    printf("%d\n", test(5, arr1));
    printf("%d\n", test(4, arr2));
    printf("%d\n", test(6, arr3));
    printf("%d\n", test(4, arr4));

    return 0;
}