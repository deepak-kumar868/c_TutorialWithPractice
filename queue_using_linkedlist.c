#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front = 0;
struct node *rear = 0;

void enqueue()
{
    int x;
    scanf("%d", &x);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->link = newnode;
        rear = rear->link;
    }
}
void dequeue()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else if (front == rear)
    {
        free(front);
        front = 0;
        rear = 0;
    }
    else
    {
        struct node *temp = front;
        front = front->link;
        free(temp);
    }
}
void display()
{
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        struct node *temp = front;
        while (temp != 0)
        {
            printf("%d\t", temp->data);
            temp = temp->link;
        }
    }
}
int main()
{
    int i, n, r;
    printf("enter the size of queue:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        enqueue();
    }
    printf("element in queue is:");
    display();
    printf("\n");
    printf("how many no. you want to delete:");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        dequeue();
    }
    printf("element in queue after deletion:");
    display();

    return 0;
}