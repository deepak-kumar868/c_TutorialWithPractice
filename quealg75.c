#include <stdio.h>

int test(int n, int arr[n])
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] == arr[i] && arr[i] == 15)
        {
            return 1;
        }
    }
    return 0;
}
int main(void)
{
    int arr1[5] = {5, 5, 1, 15, 15};
    printf("%d\n", test(5, arr1));

    int arr2[5] = {15, 2, 3, 4, 15};
    printf("%d\n", test(5, arr2));

    int arr3[6] = {3, 3, 15, 15, 5, 5};
    printf("%d\n", test(6, arr3));
}