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
    int i, n, pos, j = 1;
    printf("enter the size of linked list:");
    scanf("%d", &n);

    struct node *newnode, *head, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of ist node:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head = newnode;
    temp = newnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter next data:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
    printf("element of linked list before insertion:");
    traversal(head);

    printf("\n");
    printf("enter the position where you want to insert:");
    scanf("%d", &pos);

    printf("\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the element which you want to insert:");
    scanf("%d", &newnode->data);

    temp = head;
    while (j < pos - 1)
    {
        temp = temp->next;
        j++;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    printf("\n");
    printf("element of linked list after insertion:");
    traversal(head);

    return 0;
}
