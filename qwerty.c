#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;
int partition(int l, int h, unsigned long long int arr[])
{
    unsigned long long int pivot = arr[l];
    int start = l + 1;
    int end = h;
    do
    {
        while (arr[start] <= pivot)
        {
            start++;
        }

        while (arr[end] > pivot)
        {
            end--;
            ;
        }

        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            count++;
        }
    } while (end > start);

    int temp = arr[end];
    arr[end] = arr[l];
    arr[l] = temp;
    return end;
}

void quick_sort(int l, int h, unsigned long long int arr[])
{
    if (l < h)
    {
        int res = partition(l, h, arr);
        quick_sort(l, res - 1, arr);
        quick_sort(res + 1, h, arr);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    unsigned long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    quick_sort(0, n - 1, arr);
    printf("%d", count + 1);
}