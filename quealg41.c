#include <stdio.h>
int test(int arr[2])
{
    return arr[0] == 15 || arr[1] == 15 || arr[0] == 20 || arr[1] == 20;
}
int main()
{
    int arr1[2] = {12, 20};
    int arr2[2] = {14, 15};
    int arr3[2] = {11, 21};
    printf("%d\n", test(arr1));
    printf("%d\n", test(arr2));
    printf("%d", test(arr3));
}