#include<stdio.h>
#include<conio.h>
int main()
{

    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    switch(age)
    {
     case 1:
     printf("your age is 4");

     break;
     case 2:
     printf("your age is 7");

     break;
     case 3:
     printf("your age is 23");
     break;
 default:
     printf("match not found");

      break;
    }


         return 0;
}
