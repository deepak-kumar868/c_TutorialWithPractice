#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 3;
    first->next = second;

    second->data = 5;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 9;
    fourth->next = NULL;
    printf("data before insertion:\n");
    head = first;
    traversal(head);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data of new node:");
    scanf("%d", &newnode->data);
    newnode->next = first;
    head = newnode;
    printf("data after insertion is:\n");
    traversal(head);
    return 0;
}