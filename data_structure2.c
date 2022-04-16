#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *newnode, *head, *temp;

    int n, data1, i;
    printf("enter the number of element which you want:");
    scanf("%d", &n);
    printf("enter the data of 1st node");
    scanf("%d", &data1);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data1;
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

    printf("the element present in this linked list is:");
    temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }

    return 0;
}