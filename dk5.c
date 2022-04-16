#include<stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    printf("your age is %d as you entered \n",age);

    if(age>=18){
        printf("you can vote");
}
        else if(age>=10){
        printf("you can vote for kids\n");
    }

        else
           {printf("you cannot vote\n");

    }
    return 0;
}
