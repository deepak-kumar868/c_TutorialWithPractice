#include <stdio.h>
int stack[10], top = -1;

void push()
{
    int x;
    printf("enter the number that you want to insert:");
    scanf("%d", &x);
    if (top == 10)
    {
        printf("overflow condition");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("underflow condition");
    }
    else
    {
        top = top - 1;
    }
}

int max()
{
    int m = -4567, i;
    while (top != -1)
    {
        if (top == -1)
        {
            printf("underflow condition");
        }
        else
        {
            if (stack[top] > m)
            {
                m = stack[top];
            }
            else
            {
                top = top - 1;
            }
        }
    }
    printf("%d", m);
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