#include <stdio.h>
int test(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 3 || arr[i] == 5)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[] = {5, 5, 5, 5, 5};
    int arr2[] = {1, 6, 8, 10};
    int arr3[] = {3, 3, 3, 5, 5, 5};

    printf("%d\n", test(5, arr1));
    printf("%d\n", test(4, arr2));
    printf("%d\n", test(6, arr3));

    return 0;
}