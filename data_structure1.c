#include <stdio.h>
#include <conio.h>
int main()
{
  int n, i;
  printf("enter the size of array:");
  scanf("%d", &n);

  int arr[n];
  printf("enter the element of array:");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("the array is:");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
  printf("\n");
  printf("the reverse of array is:");
  for (i = n - 1; i >= 0; i--)
  {
    printf("%d\t", arr[i]);
  }

  return 0;
}