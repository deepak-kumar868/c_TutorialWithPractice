#include <stdio.h>
int test(int n, int arr[n])
{
    return n = 2 && ((arr[0] == 10 && arr[1] == 10) || (arr[0] == 20 && arr[1] == 20));
}
int main()
{
    int arr1[2] = {12, 20};
    int arr2[2] = {20, 20};
    int arr3[2] = {10};
    printf("%d\n", test(2, arr1));
    printf("%d\n", test(2, arr2));
    printf("%d", test(2, arr3));
}