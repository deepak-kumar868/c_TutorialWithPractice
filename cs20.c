#include <stdio.h>

int main()
{
    char chr;
    printf("input a grade:");
    scanf("%c", &chr);
    if (chr == 'A')
    {
        printf("average");
    }

    else if (chr == 'E')
    {
        printf("excellent");
    }

    else if (chr == 'V')
    {
        printf("very good");
    }

    else if (chr == 'G')
    {
        printf("good");
    }
    else if (chr == 'F')
    {
        printf("fail");
    }
    else
    {
        printf("false grade");
    }

    return 0;
}