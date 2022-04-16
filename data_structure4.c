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
    int i, n, element;
    struct node *head, *newnode, *temp;

    printf("enter the size of linked list:");
    scanf("%d", &n);

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the element of 1st node:");
    scanf("%d", &element);
    newnode->data = element;
    newnode->next = NULL;
    head = newnode;
    temp = newnode;

    for (i = 2; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter next element:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }

    printf("element before insertion is:");
    traversal(head);

    printf("\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the data which you want to insert:");
    scanf("%d", &newnode->data);
    newnode->next = head->next;
    free(head);
    head = newnode;

    printf("element after insertion is:");
    traversal(head);

    return 0;
}
