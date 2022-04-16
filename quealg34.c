#include <stdio.h>

int test(int n1, int n2, int arr1[n1], int arr2[n2])
{
    {
        return arr1[0] == arr2[0] && arr1[n1 - 1] == arr2[n2 - 1];
    }
}
int main()
{
    int arr11[5] = {10, 20, 30, 40, 50};
    int arr12[5] = {10, 20, 30, 40, 50};
    printf("%d\n", test(5, 5, arr11, arr12));

    int arr21[4] = {10, 20, 40, 50};
    int arr22[4] = {11, 20, 40, 51};
    printf("%d\n", test(4, 4, arr21, arr22));
}