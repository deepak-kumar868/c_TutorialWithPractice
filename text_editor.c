#include <stdio.h>
#include <stdlib.h>

char stack[10] = {'a', 'b', 'c', 'd', 'e'};
int top = 4;

void push(int n)
{
    int i, a[n];
    printf("enter the character to append:");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &a[i]);
        top = top + 1;
        stack[top] = a[i];
    }
}

void pop()
{
    int n1;
    printf("enter the no. of character to delete:");
    scanf("%d", &n1);
    top = top - n1;
}

void print()
{
    int n2;

    printf("enter the character to print:");
    scanf("%d", &n2);
    if (top >= n2 - 1)
    {
        printf("%c", stack[n2 - 1]);
    }
    else
    {
        printf("ERROR!");
    }
}

int main()
{
    int num, op, i;
    printf("enter the no. of operation:");
    scanf("%d", &op);
    int a[op];
    for (i = 0; i < op; i++)
    {
        printf("enter the choice:");
        scanf("%d", &a[i]);
        switch (a[i])
        {
        case 1:
            printf("enter the no. of character that you push:");
            scanf("%d", &num),
                push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            print();
            break;

        default:
            printf("wrong choice");
            break;
        }
    }
    return 0;
}