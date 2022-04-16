#include<stdio.h>

int main()
{
    int a,n,i;

    printf("enter an integer:");
    scanf("%d",&n);

    for(i=0;i<=10;i++)

{
    a=n*i;
    printf("%d*%d=%d\n",n,i,a);
    }
    return 0;
}
