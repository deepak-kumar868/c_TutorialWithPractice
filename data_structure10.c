#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int i, n1, pos, j = 0;
    printf("enter the size of linked list:");
    scanf("%d", &n1);
    struct node *head1, *newnode, *temp1, *temp2;
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head1 = newnode;
    temp1 = newnode;
    temp2 = newnode;

    for (i = 2; i <= n1; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp1->next = newnode;
        temp1 = temp1->next;
    }

    printf("enter that position which you want to acces:");
    scanf("%d", &pos);

    for (i = 1; i < pos; i++)
    {
        temp2 = temp2->next;
    }
    printf("data at this position is:%d", temp2->data);

    printf("\n");
    while (temp2 != NULL)
    {
        temp2 = temp2->next;
        j++;
    }

    printf("position from the tail is:%d", j);

    return 0;
}
