#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,sum=0;
    int*ptr;
    printf("enter the number of element\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("error");
        return 0;
    }
printf("enter the vaule of element\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",ptr+i);
           sum+=*(ptr+i);

            }
printf("sum=%d",sum);

return 0;


}
