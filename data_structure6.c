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

    struct node *newnode, *head, *temp, *prevnode;
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
    printf("element of linked list before deletion:");
    traversal(head);

    printf("\n");
    printf("enter the position which you want to delete:");
    scanf("%d", &pos);

    temp = head;
    prevnode = temp;
    if (pos > 1)
    {

        while (j < pos)
        {
            prevnode = temp;
            temp = temp->next;
            j++;
        }
        prevnode->next = temp->next;
        free(temp);
    }
    else
    {
        head = temp->next;
        free(temp);
    }

    printf("\n");
    printf("element of linked list after deletion:");
    traversal(head);

    return 0;
}
