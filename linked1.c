#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nextptr;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->nextptr;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 3;
    head->nextptr = second;

    second->data = 5;
    second->nextptr = third;

    third->data = 7;
    third->nextptr = fourth;

    fourth->data = 9;
    fourth->nextptr = NULL;

    traversal(head);
    return 0;
}