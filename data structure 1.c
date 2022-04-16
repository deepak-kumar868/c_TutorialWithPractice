#include<stdio.h>
int main()
{
    int pos, arr[100],m,n,value;
    printf("enter number of element in array\n");
    scanf("%d",&n);

    printf("enter element");
    for(m=0;m<n;m++)
        scanf("%d",&arr[m]);

    printf("enter the index where you wish to insert an element\n");
    scanf("%d",&pos);

    printf("enter the vaule to insert\n");
    scanf("%d",&value);

    for(m=n;m>=pos;m--)
        arr[m]=arr[m-1];
    arr[pos]=value;
    printf("resultant array is");
        for(m=0;m<n;m++)
            printf("%d",arr[m]);

   return 0;
}
