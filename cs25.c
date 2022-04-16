#include <stdio.h>

int main()
{
    int choice, r, l, w, b, h;
    float area;
    printf("input 1 for area of circle\n");
    printf("input 2 for area of rectangle\n");
    printf("input 3 for area of triangle\n");
    printf("input the choice:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("input the radius of circle:");
        scanf("%d", &r);
        area = 3.14 * r * r;
        break;

    case 2:
        printf("input the length and width of rectangle:");
        scanf("%d%d", &l, &w);
        area = l * w;
        break;

    case 3:
        printf("input the radius of circle:");
        scanf("%d%d", &b, &h);
        area = 3.14 * r * r;
        break;

    default:
        break;
    }
    printf("the area is:%f", area);

    return 0;
}