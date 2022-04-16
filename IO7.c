#include <stdio.h>

int main()
{
    char first[20], last[20], dob[4];
    printf("enter first name:");
    scanf("%s", first);
    printf("enter last name:");
    scanf("%s", last);
    printf("enter date of birth:");
    scanf("%s", dob);
    printf("bio data is :%s\n%s\n%s", first, last, dob);
    return 0;
}