#include <stdio.h>
int queue[10], rear = -1, front = -1;

void enqueue()
{
    int num;
    scanf("%d", &num);
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }
    else if (front == (rear + 1) % 10)
    {
        printf("overflow");
    }
    else
    {
        rear = (rear + 1) % 10;
        queue[rear] = num;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % 10;
    }
}

void display()
{
    int i = front;
    if (front == rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        while (i != rear)
        {
            printf("%d\t", queue[i]);
            i = (i + 1) % 10;
        }
        printf("%d", queue[rear]);
    }
}

int main()
{
    int i, n, r, j = 0;
    printf("enter the size of queue:");
    scanf("%d", &n);
    printf("enter the element of array:");
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
    printf("\n");
    printf("enque some other element");
    enqueue();
    enqueue();
    printf("overall data of queue is:");
    display();

    return 0;
}