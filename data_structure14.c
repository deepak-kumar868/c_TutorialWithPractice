#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
    int n, i, pos, element;
    printf("enter the size of doubly linked list:");
    scanf("%d", &n);

    struct node *head, *next, *prev, *temp, *newnode, *temp1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter first data is:");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;
    temp = newnode;
    temp1 = newnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter next data is:");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }

    printf(" doubly linked list before insertion is:");
    traversal(head);

    printf("\n");
    printf("enter the postion where you want to insert:");
    scanf("%d", &pos);

    printf("\n");
    printf("enter the element which you want to insert:");
    scanf("%d", &element);

    for (i = 1; i < pos - 1; i++)
    {
        temp1 = temp1->next;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = temp1->next;
    temp1->next = newnode;

    printf("doubly linked list after insertion is:");
    traversal(head);
}
