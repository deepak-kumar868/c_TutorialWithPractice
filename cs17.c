#include <stdio.h>

int main()
{
    char str;
    printf("enter any alphabet:");
    scanf("%c", &str);
    if (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        printf("the alphabet is a vowel");
    }
    else
    {
        printf("the alphabet is a consonant");
    }

    return 0;
}