#include <stdio.h>
int test(int n, int arr[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 5)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr1[] = {1, 5, 6, 9, 10, 17};
    int arr2[] = {1, 5, 5, 9, 10, 17};
    int arr3[] = {1, 5, 5, 9, 10, 17, 5, 5};

    printf("%d\n", test(6, arr1));
    printf("%d\n", test(6, arr2));
    printf("%d\n", test(8, arr3));

    return 0;
}