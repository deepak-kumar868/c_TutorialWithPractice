#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int length(struct node *ptr)
{
    int l = 0;
    while (ptr != NULL)
    {
        l++;
        ptr = ptr->next;
    }
    return l;
}

int main()
{
    int l1, l2, i, d;
    struct node *head1, *head2, *ptr1, *ptr2;
    struct node *ist = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *thi = (struct node *)malloc(sizeof(struct node));
    struct node *fou = (struct node *)malloc(sizeof(struct node));
    struct node *fiv = (struct node *)malloc(sizeof(struct node));
    struct node *six = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));

    head1 = ist;
    ptr1 = ist;
    ist->data = 1;
    ist->next = sec;

    sec->data = 2;
    sec->next = thi;

    thi->data = 3;
    thi->next = fou;

    fou->data = 4;
    fou->next = fiv;

    fiv->data = 5;
    fiv->next = six;

    six->data = 6;
    six->next = NULL;

    head2 = first;
    ptr2 = first;
    first->data = 8;
    first->next = second;

    second->data = 7;
    second->next = fiv;

    l1 = length(head1);
    l2 = length(head2);

    if (l1 > l2)
    {
        d = l1 - l2;
        for (i = 0; i < d; i++)
        {
            ptr1 = ptr1->next;
        }
    }
    else
    {
        d = l2 - l1;
        for (i = 0; i < d; i++)
        {
            ptr2 = ptr2->next;
        }
    }

    while (ptr1->data != ptr2->data)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    printf("merge point of both linked list is:%d", ptr1->data);

    return 0;
}
