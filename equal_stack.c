#include <stdio.h>

int main()
{
    int h1, h2, h3, top1 = -1, top2 = -1, top3 = -1, i, sum1 = 0, sum2 = 0, sum3 = 0;
    printf("enter the size of all three stack:");
    scanf("%d%d%d", &h1, &h2, &h3);
    int stack1[h1], stack2[h2], stack3[h3];

    printf("enter the data of stack1:");
    for (i = 0; i < h1; i++)
    {
        if (top1 < h1)
        {
            top1 = top1 + 1;
            scanf("%d", &stack1[top1]);
            sum1 += stack1[top1];
        }
    }

    printf("enter the data of stack2:");
    for (i = 0; i < h2; i++)
    {
        if (top2 < h2)
        {
            top2 = top2 + 1;
            scanf("%d", &stack2[top2]);
            sum2 += stack2[top2];
        }
    }

    printf("enter the data of stack3:");
    for (i = 0; i < h3; i++)
    {
        if (top3 < h3)
        {
            top3 = top3 + 1;
            scanf("%d", &stack3[top3]);
            sum3 += stack3[top3];
        }
    }
    printf("\n");
    while ((sum1 != sum2 || sum2 != sum3 || sum3 != sum1))
    {
        if ((top1 > -1 && top2 > -1 && top3 > -1))
        {
            if (sum1 > sum2 && sum1 > sum3)
            {
                sum1 = sum1 - stack1[top1];
                top1 = top1 - 1;
            }
            else if (sum2 > sum1 && sum2 > sum3)
            {
                sum2 = sum2 - stack2[top2];
                top2 = top2 - 1;
            }
            else if (sum3 > sum2 && sum3 > sum1)
            {
                sum3 = sum3 - stack3[top3];
                top3 = top3 - 1;
            }
            else if (sum1 == sum2 && sum1 > sum3)
            {
                if (stack1[top1] > stack2[top2])
                {
                    sum1 = sum1 - stack1[top1];
                    top1 = top1 - 1;
                }
                else
                {

                    sum2 = sum2 - stack2[top2];
                    top2 = top2 - 1;
                }
            }

            else if (sum3 == sum2 && sum3 > sum1)
            {
                if (stack3[top3] > stack2[top2])
                {
                    sum3 = sum3 - stack3[top3];
                    top3 = top3 - 1;
                }
                else
                {

                    sum2 = sum2 - stack2[top2];
                    top2 = top2 - 1;
                }
            }

            else if (sum1 == sum3 && sum1 > sum2)
            {
                if (stack1[top1] > stack3[top3])
                {
                    sum1 = sum1 - stack1[top1];
                    top1 = top1 - 1;
                }
                else
                {
                    sum3 = sum3 - stack3[top3];
                    top3 = top3 - 1;
                }
            }
        }
        else
        {
            printf("not possible");
            break;
        }
    }

    if (sum1 == sum2 && sum2 == sum3 && sum3 == sum1)
    {
        printf("minimum equal height is:%d", sum1);
    }

    return 0;
}