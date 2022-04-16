#include <stdio.h>
int test(int n, int arr[])
{
    int i, total = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 5)
        {
            total += arr[i];
        }
    }
    return total == 15;
}
int main()
{
    int arr1[] = {1, 5, 6, 9, 10, 17};
    int arr2[] = {1, 5, 5, 5, 10, 17};
    int arr3[] = {1, 5, 5, 5, 5};
    printf("%d\n", test(6, arr1));
    printf("%d\n", test(6, arr2));
    printf("%d\n", test(5, arr3));
}