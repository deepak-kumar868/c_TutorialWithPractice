#include <stdio.h>

int main()
{
    int page, book;
    printf("enter the no. of page in book:");
    scanf("%d", &book);
    printf("enter the page no. that you want to read:");
    scanf("%d", &page);
    if (page % 2 == 0 && page <= book / 2)
    {
        printf("no. of turn is:%d", page / 2);
    }
    else if (page % 2 != 0 && page <= book / 2)
    {
        printf("no. of turn is:%d", (page - 1) / 2);
    }
    else if (page % 2 == 0 && page > book / 2)
    {
        printf("no. of turn is:%d", (book / 2) - (page / 2));
    }
    else if (page % 2 != 0 && page > book / 2)
    {
        printf("no. of turn is:%d", (book / 2) - (page - 1) / 2);
    }

    return 0;
}