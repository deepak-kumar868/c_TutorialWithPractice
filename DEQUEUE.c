#include <stdio.h>
#define N 5
int Dqueue[N];
int front = -1, rear = -1;

void enqueuefront(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Dqueue[front] = x;
    }
    else if ((front == 0 && rear == N - 1) || front == rear + 1)
    {
        printf("queue is full");
    }
    else if (front == 0)
    {
        front = N - 1;
        Dqueue[front] = x;
    }
    else
    {
        front = front - 1;
        Dqueue[front] = x;
    }
}
void enqueuerear(int x)
{
    if ((front == 0 && rear == N - 1) || front == rear + 1)
    {
        printf("queue is full");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        Dqueue[front] = x;
    }
    else if (rear == N - 1)
    {
        rear = 0;
        Dqueue[rear] = x;
    }
    else
    {
        rear = rear + 1;
        Dqueue[rear] = x;
    }
}

void display()
{
    if (rear == front == -1)
    {
        printf("Dequeue is empty");
    }
    else
    {
        int i = front;
        while (i != rear)
        {
            printf("%d\t", Dqueue[i]);
            i = (i + 1) % N;
        }
        printf("%d", Dqueue[rear]);
    }
}
void dequeuefront()
{
    if (front == -1 && rear == -1)
    {
        printf("Dequeue is empty");
    }
    else if (front == rear)
    {
        front == rear == -1;
    }
    else if (front == N - 1)
    {
        front = 0;
    }

    else
    {
        front = front + 1;
    }
}

void dequeuerear()
{
    if (front == -1 && rear == -1)
    {
        printf("Dequeue is empty");
    }
    else if (front == rear)
    {
        front == rear == -1;
    }
    else if (rear == 0)
    {
        rear = N - 1;
    }
    else
    {
        rear = rear - 1;
    }
}

int main()
{
    enqueuefront(1);
    enqueuefront(2);
    enqueuefront(3);
    enqueuerear(4);
    enqueuerear(5);
    display();
    printf("\n");
    dequeuefront();
    dequeuerear();
    display();

    return 0;
}