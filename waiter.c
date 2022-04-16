/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int top = -1;
int pri[10], q, b[10], stack[10];
void push(int sym)
{
    stack[++top] = sym;
}
int pop()
{
    return stack[top--];
}
int isempty()
{
    if (top == -1)
        return 1;
    return 0;
}
void prime()
{

    pri[0] = 2;
    int count, c, i = 3;
    for (count = 1; count < 1250;)
    {
        for (c = 2; c <= i - 1; c++)
        {
            if (i % c == 0)
                break;
        }
        if (c == i)
        {
            pri[count] = i;
            count++;
        }
        i++;
    }
}
int main()
{

    prime();
    int n, i, a[10];
    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % pri[k] == 0)
            printf("%d\n", a[i]);
        else
            push(a[i]);
    }

    k++;
    int s;

    while (k < q)
    {
        int z = 0;
        while (!isempty())
        {
            b[z++] = pop();
        }
        for (i = 0; i < z; i++)
        {
            if (b[i] % pri[k] == 0)
                printf("%d\n", b[i]);
            else
                push(b[i]);
        }
        k++;
    }
    int x = 0, c[10];
    if (k == q)
    {
        while (!isempty())
        {
            c[x++] = pop();
        }
        for (i = x - 1; i >= 0; i--)
            printf("%d\n", c[i]);
    }

    return 0;
}*/
