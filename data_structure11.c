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
    int i, n1;
    printf("enter the size of linked list:");
    scanf("%d", &n1);
    struct node *head1, *newnode, *temp1, *temp2, *prev;
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head1 = newnode;
    temp1 = newnode;
    temp2 = newnode;
    prev = newnode;

    for (i = 2; i <= n1; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp1->next = newnode;
        temp1 = temp1->next;
    }

    temp2 = temp2->next;
    while (temp2 != NULL)
    {
        if (prev->data == temp2->data)
        {
            prev->next = temp2->next;
            free(temp2);
            temp2 = prev->next;
        }
        else
        {
            prev = prev->next;
            temp2 = temp2->next;
        }
    }

    printf("linked list after delete the duplicates:");
    traversal(head1);
    return 0;
}
