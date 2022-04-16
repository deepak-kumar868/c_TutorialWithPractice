#include <stdio.h>

int main()
{
    char str;
    printf("input a chracter:");
    scanf("%c", &str);

    if (str >= 'a' && str <= 'z')
    {
        printf("this is alphabet");
    }

    else if (str >= '0' && str <= '9')
    {
        printf("this is digit");
    }
    else
    {
        printf("this is special character:");
    }

    return 0;
}