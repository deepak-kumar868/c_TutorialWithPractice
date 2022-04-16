#include <stdio.h>
int test(int n, int arr[n])
{
    int i;
    for (i = 0; i < n; i++)
    {
        return arr[0] == arr[n - 1] ? 1 : 0;
    }
}
int main()
{
    int arr1[6] = {3, 7, 5, 5, 3, 7};
    int arr2[6] = {3, 7, 5, 5, 3, 7};
    int arr3[7] = {3, 7, 5, 5, 3, 7, 5};
    printf("%d\n", test(6, arr1));
    printf("%d\n", test(6, arr2));
    printf("%d", test(7, arr3));
}