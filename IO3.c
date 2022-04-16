#include <stdio.h>

int main()
{
    int w, h;
    printf("input the height and width of rectangle:");
    scanf("%d%d", &w, &h);

    printf("perimeter of rectangle is:%d", 2 * (w + h));
    return 0;
}