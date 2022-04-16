#include <stdio.h>
#include <stdlib.h>
int exam(int arr_size, int arr[])
{
    int first_ele = arr[0], max = 0;
    int middle_ele = arr[(arr_size / 2)];
    int last_ele = arr[arr_size - 1];
    if (first_ele > middle_ele && first_ele > last_ele)
    {
        max = first_ele;
    }

    else if (first_ele < middle_ele && middle_ele > last_ele)
    {
        max = middle_ele;
    }

    else if (last_ele > middle_ele && first_ele < last_ele)
    {
        max = last_ele;
    }
}
int main()
{
    int arr1[] = {1};
    int arr1_size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 9};
    int arr2_size = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {1, 2, 9, 3, 3};
    int arr3_size = sizeof(arr3) / sizeof(arr3[0]);
    printf("%d\n", exam(arr1_size, arr1));
    printf("%d\n", exam(arr2_size, arr2));
    printf("%d\n", exam(arr3_size, arr3));
}