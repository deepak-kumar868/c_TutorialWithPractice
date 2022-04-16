#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

void insertatail(struct node **head, int val)
{
    if (*head == NULL)
    {
        *head = insert(val);
    }
    else
    {
        struct node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = insert(val);
    }
}

void insertionathead(struct node **head, int val)
{
    struct node *newnode = insert(val);
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}

void display(struct node **head)
{
    struct node *temp = *head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL");
}

void deletion(struct node **head, int key)
{
    if (*head == NULL)
    {
        return;
    }

    struct node *temp = *head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    struct node *todelete = temp->next;
    temp->next = temp->next->next;
    free(todelete);
}

struct node *head = NULL;
insertatail(&head, 1);
insertatail(&head, 2);
insertatail(&head, 4);
insertatail(&head, 3);
insertionathead(&head, 7);

deletion(&head, 3);

display(&head);
}