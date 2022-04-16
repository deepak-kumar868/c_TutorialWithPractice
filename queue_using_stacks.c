#include <stdio.h>
int stack1[10], stack2[10], top1 = -1, top2 = -1;

void push1(int x)
{
    top1 = top1 + 1;
    stack1[top1] = x;
}
void push2(int x)
{
    top2 = top2 + 1;
    stack2[top2] = x;
}

void pop1()
{
    top1--;
}
void pop2()
{
    top2--;
}

void enqueue()
{
    if (top1 >= 9)
    {
        printf("queue is full");
    }
    else
    {
        int y;
        scanf("%d", &y);
        push1(y);
    }
}

void dequeue()
{
    if (top1 == -1)
    {
        printf("queue is empty");
    }
    else
    {
        while (top1 != -1)
        {
            int y = stack1[top1];
            pop1();
            push2(y);
        }
        pop2();
        while (top2 != -1)
        {
            int z = stack2[top2];
            pop2();
            push1(z);
        }
    }
}

void display()
{
    if (top1 == -1)
    {
        printf("queue is empty:");
    }
    else
    {
        int temp = -1;
        while (temp != top1)
        {
            temp++;
            printf("%d\t", stack1[temp]);
        }
    }
}

int main()
{
    int n, i, r;
    printf("enter the size of queue:");
    scanf("%d", &n);
    printf("enter the data of queue:");
    for (i = 0; i < n; i++)
    {
        enqueue();
    }
    printf("element in queue after insertion:");
    display();
    printf("\n");
    printf("how many no. you want to delete from queue:");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        dequeue();
    }
    printf("element in queue after deletion:");
    display();

    return 0;
}