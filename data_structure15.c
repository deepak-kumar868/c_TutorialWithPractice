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

    struct node *head, *next, *prev, *temp, *newnode, *tail;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter first data is:");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    head = newnode;
    temp = newnode;

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
    tail = temp;

    while (temp != NULL)
    {
        temp->next = temp->prev;
        temp = temp->prev;
    }
    head = tail;
    printf("reverse of given doubly linked list is:");
    traversal(head);
}