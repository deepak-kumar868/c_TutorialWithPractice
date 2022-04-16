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
    else if (rear >= 9)
    {
        printf("overflow condition");
    }
    else
    {
        rear = rear + 1;
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
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

int main()
{
    int i, n, r, j = 0;
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