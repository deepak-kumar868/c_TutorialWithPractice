#include <stdio.h>

int main()
{
    int math, phy, che;
    printf("enter the marks af three subject:");
    scanf("%d%d%d", &math, &phy, &che);
    if (math > 65 && phy >= 55 && che >= 50 && (math + phy + che >= 190 || math + phy >= 140))
    {
        printf("candidate are eligible for admossion");
    }
    else
    {
        printf("candidate are not eligible for admission");
    }

    return 0;
}