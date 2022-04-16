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
    int i, n;
    struct node *head, *newnode, *temp, *prev, *current, *next;

    printf("enter the size of linked list:");
    scanf("%d", &n);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data of first node:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head = newnode;
    temp = newnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter thr data of next node:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }

    printf("linked list before reverse is:");
    traversal(head);
    prev = NULL;
    current = head;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    printf("\n");
    printf("linked list after reverse is:");
    head = prev;
    traversal(head);
    return 0;
}
