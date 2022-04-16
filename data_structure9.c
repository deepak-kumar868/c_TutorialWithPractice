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
    int i, n1, n2;
    printf("enter the size of 1st linked list:");
    scanf("%d", &n1);
    struct node *head1, *newnode, *head2, *temp1, *temp2, *sort, *haad;
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

    newnode = (struct node *)malloc(sizeof(struct node));
    if (head1->data > head2->data)
    {
        newnode->data = head2->data;
        newnode->next = NULL;
        head2 = head2->next;
        sort = newnode;
        haad = newnode;
    }

    else if (head1->data < head2->data)
    {
        newnode->data = head1->data;
        newnode->next = NULL;
        head1 = head1->next;
        sort = newnode;
        haad = newnode;
    }

    while (head1 != NULL && head2 != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head1->data > head2->data)
        {
            newnode->data = head2->data;
            newnode->next = NULL;
            sort->next = newnode;
            sort = sort->next;
            head2 = head2->next;
        }
        else if (head1->data <= head2->data)
        {
            newnode->data = head1->data;
            newnode->next = NULL;
            sort->next = newnode;
            sort = sort->next;
            head1 = head1->next;
        }
    }

    if (head1 == NULL)
    {
        while (head2 != NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data = head2->data;
            newnode->next = NULL;
            sort->next = newnode;
            sort = sort->next;
            head2 = head2->next;
        }
    }
    else if (head2 == NULL)
    {
        while (head1 != NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->data = head1->data;
            newnode->next = NULL;
            sort->next = newnode;
            sort = sort->next;
            head1 = head1->next;
        }
    }
    printf("merged sorted list is:");
    traversal(haad);
    return 0;
}