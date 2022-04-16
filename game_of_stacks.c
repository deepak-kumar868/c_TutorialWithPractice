#include <stdio.h>
int stack1[5] = {1, 6, 4, 2, 4}, top1 = 4;
int stack2[4] = {5, 8, 1, 2}, top2 = 3, maxsum = 10, sum = 0;
int pop1()
{
    if (top1 == -1)
    {
        return 0;
    }
    else
    {
        sum += stack1[top1];
        top1 = top1 - 1;
    }
}

int pop2()
{
    if (top2 == -1)
    {
        return 0;
    }
    else
    {
        sum += stack2[top2];
        top2 = top2 - 1;
    }
}

int main()
{
    int n1 = 0;
    while (sum < maxsum)
    {
        if (stack1[top1] >= stack2[top2])
        {
            pop2();
        }
        else
        {
            pop1();
        }
        n1++;
    }
    if (sum > 10)
    {
        printf("no. of move=%d", n1 - 1);
    }
    else if (sum == 10)
    {
        printf("no. of move =%d", n1);
    }

    return 0;
}