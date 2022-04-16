#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *top;

void push()
{
    int x;
    struct node *stack = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &stack->data);
    stack->link = top;
    top = stack;
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("underflow condition");
    }
    else
    {
        top = top->link;
        free(temp);
    }
}

void max()
{
    int m = 0;
    struct node *temp = top;
    if (temp == NULL)
    {
        printf("underflow condition");
    }
    else
    {
        while (temp != NULL)
        {
            if (temp->data > m)
            {
                m = temp->data;
            }
            temp = temp->link;
        }
        printf("%d", m);
    }
}

int main()
{

    int ch, op, i;
    printf("enter the no. of operation:");
    scanf("%d", &op);
    for (i = 0; i < op; i++)
    {
        printf("enter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            max();
            break;

        default:
            printf("wrong choice!");
            break;
        }
    }

    return 0;
}