#include <stdio.h>
#include <string.h>
int main()
{

    char s1[] = "deepak";
    char s2[] = "rohan";
    char s3[1];
    puts(strcat(s1, s2));

    //printf("the length of s1 is %d\n",strlen(s1));
    //printf("the length of s2 is %d\n",strlen(s2));
    printf("the reversed of s1 is:");
    puts(strrev(s1));
    printf("the reversed of s2 is:\n");
    puts(strrev(s2));
    strcpy(s3, strcat(s1, s2));
    puts(s3);
    printf("the sky difference of s1 and s1 is %d\n:", strcmp(s1, s2));

    return 0;
}
