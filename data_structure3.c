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
    int data1, n, i;
    struct node *newnode, *head, *temp;

    printf("enter the number of element before insertion:");
    scanf("%d", &n);

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("enter 1st element:");
    scanf("%d", &data1);

    newnode->data = data1;
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
    printf("element of linked list before insertion is:");
    traversal(head);

    printf("\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the element which you want to insert:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp->next = newnode;

    printf("element of liked list after insertion is:");
    traversal(head);
}
