#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, bin = 0, r;
    printf("enter the binary number:");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        bin += r * pow(2, i);
        n = n / 10;
        i++;
    }
    printf("the equivalent decimal number is:%d", bin);

    return 0;
}