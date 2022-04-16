#include <stdio.h>
int stack[10], top = -1;

void push()
{
    char c;
    scanf("%s", &c);
    top = top + 1;
    stack[top] = c;

    if ((stack[top] == ')' && stack[top - 1] == '(') || (stack[top] == '}' && stack[top - 1] == '{') || (stack[top] == ']' && stack[top - 1] == '['))
    {
        top = top - 2;
    }
}

int main()
{
    int n, i;
    printf("enter the no. of bracket:");
    scanf("%d", &n);

    printf("enter bracket sequence:");
    for (i = 0; i < n; i++)
    {
        push();
    }
    if (top == -1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}