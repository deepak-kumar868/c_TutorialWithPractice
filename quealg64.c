#include <stdio.h>
int test(int n, int arr[])
{
    int i, cout = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 5 && arr[i + 1] != 5)
        {
            cout++;
        }
    }
    if (cout == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr1[] = {3, 5, 1, 5, 3, 5, 7, 5, 1, 5};
    int arr2[] = {3, 5, 5, 5, 5, 5, 5};
    int arr3[] = {3, 5, 2, 5, 4, 5, 7, 5, 8, 5};
    int arr4[] = {2, 4, 5, 5, 5, 5};

    printf("%d\n", test(10, arr1));
    printf("%d\n", test(7, arr2));
    printf("%d\n", test(10, arr3));
    printf("%d\n", test(6, arr4));
}