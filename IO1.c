#include <stdio.h>

int main()
{
    int c;
    printf("input temperature in celcius:");
    scanf("%d", &c);
    printf("temperature in fahranhiet is:%f", (float)((9 * c) / 5) + 32);
    return 0;
}