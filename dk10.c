#include<stdio.h>
int main()
{
    int num,a=0;
    printf("enter the number\n");
    scanf("%d",&num);
    do
        {
        printf("%d\n",a+1);
        a=a+1;
    if(a>=95)
        {
        break;
    }
    }while(a<num);
    return 0;
}
