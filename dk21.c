// predefined fumction

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("the file name is %s\n", __FILE__);
    printf("today date is %s\n", __DATE__);
    printf("time is %s\n", __TIME__);
    printf("line no. is %d\n", __LINE__);
    printf("compiler name is %d\n", __STDC__);

    return 0;
}
