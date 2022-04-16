#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, st = 0, i = 0;
    printf("enter the octal number:");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        st += r * pow(8, i);
        i++;
        n = n / 10;
    }
    printf("equivalent decimal number is:%d", st);

    return 0;
}