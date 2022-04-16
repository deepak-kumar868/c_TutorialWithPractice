#include <stdio.h>
int test(int n, int arr[n])
{
    int i, ctr = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == 5 && (arr[i + 1] == 5 || arr[i + 1] == 6))
        {
            ctr++;
        }
    }
    return ctr;
}
int main()
{
    int arr1[3] = {5, 5, 2};
    printf("%d\n", test(3, arr1));

    int arr2[5] = {5, 5, 2, 5, 5};
    printf("%d\n", test(5, arr2));

    int arr3[4] = {5, 6, 2, 9};
    printf("%d\n", test(4, arr3));
}