#include<stdio.h>
int main()
{
    int i,a[10];

    printf("enter the vaule of a[i]\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
    printf("the vaule of a[i] is %d",i,a[i]);

    return 0;

}
