#include <stdio.h>

int main()
{
    int cp, sp;
    printf("enter the buying price and selling price:");
    scanf("%d%d", &cp, &sp);
    if (sp > cp)
    {
        printf("you can booked your profit amount :%d", sp - cp);
    }
    else if (cp > sp)
    {
        printf("loss amount:%d", cp - sp);
    }
    else
    {
        printf("no profit no loss");
    }

    return 0;
}