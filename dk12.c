#include<stdio.h>

int factorial(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
}

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("the factorial of %d is %d",n,factorial(n));
    return 0;
}
