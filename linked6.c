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
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int pos, i = 1;
    struct node *head, *first, *second, *third, *fourth, *newnode, *temp;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head = first;
    temp = first;
    first->data = 2;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printf("data before insertion:");
    traversal(head);
    printf("\n");

    printf("enter the position where you want to insert");
    scanf("%d", &pos);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data which you want to insert:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    printf("data after insertion:");
    traversal(head);
    return 0;
}