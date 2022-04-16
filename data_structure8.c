#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i, n1, n2;
    printf("enter the size of 1st linked list:");
    scanf("%d", &n1);
    struct node *head1, *newnode, *head2, *temp1, *temp2;
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head1 = newnode;
    temp1 = newnode;

    for (i = 2; i <= n1; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp1->next = newnode;
        temp1 = temp1->next;
    }

    printf("enter the size of 2nd linked list:");
    scanf("%d", &n2);
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head2 = newnode;
    temp2 = newnode;

    for (i = 2; i <= n2; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp2->next = newnode;
        temp2 = temp2->next;
    }

    if (n1 == n2)
    {
        while (head1->next != NULL && head1->data == head2->data)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        if (head1->next == NULL && head2->next == NULL)
        {
            printf("both are equal linked list");
        }
        else
        {
            printf("both linked list are not equal");
        }
    }
    else
    {
        printf("both linked list are not equal");
    }

    return 0;
}
