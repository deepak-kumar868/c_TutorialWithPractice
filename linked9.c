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
    int pos, i = 1;
    struct node *head, *first, *second, *third, *fourth, *newnode, *temp, *prev;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head = first;
    temp = first;
    first->data = 2;
    first->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printf("data before deletion:");
    traversal(head);
    printf("\n");

    printf("enter the position of node which you want to delete:");
    scanf("%d", &pos);

    while (i < pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    prev->next = temp->next;
    free(temp);

    printf("data after deletion:");
    traversal(head);
    return 0;
}