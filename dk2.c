#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 18, b = 6;
    // printf("enter number a\n");
    // scanf("%d", &a);

    // printf("enter the number b\n");
    // scanf("%d", &b);
    // printf("the sum is %d\n", a + b);
    printf("the remainder is %d\n", a % b);

    // printf("the substraction  is %d\n", a - b);

    // printf("the multiplication is %d\n", a * b);

    // printf("the division is %f\n", a / b);

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int i, n1, n2;
    printf("enter the size of 1st linked list:");
    scanf("%d", &n1);
    struct node *head1, *newnode, *head2, *temp1, *temp2, *sort, *haad;
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head1 = newnode;
    temp1 = newnode;

    for (i = 2; i <= n1; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp1->next = newnode;
        temp1 = temp1->next;
    }

    printf("enter the size of 2nd linked list:");
    scanf("%d", &n2);
    printf("enter the first element of linked list:");
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    head2 = newnode;
    temp2 = newnode;

    for (i = 2; i <= n2; i++)
    {
        printf("enter next element:");
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp2->next = newnode;
        temp2 = temp2->next;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    sort = newnode;
    haad = newnode;

    if (head1->data > head2->data)
    {
        newnode->data = head2->next->data;
        newnode->next = NULL;
        head2 = head2->next;
    }
    else if (head1->data <= head2->data)
    {
        newnode->data = head1->next->data;
        newnode->next = NULL;
        head1 = head1->next;
    }

    for (i = 2; i <= (n1 + n2); i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (head1->data > head2->data)
        {
            newnode->data = head2->data;
            newnode->next = NULL;
            head2 = head2->next;
            sort->next = newnode;
            sort = sort->next;
        }
        else if (head1->data <= head2->data)
        {
            newnode->data = head1->data;
            newnode->next = NULL;
            head1 = head1->next;
            sort->next = newnode;
            sort = sort->next;
        }
    }
    printf("merge sorted linked list is:");
    traversal(haad);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int type1(int n, int a[n], int j, int k)
{
    int i, l, x;
}

int type2(int n, int a[n], int j, int k)
{
    int i, l, x;
}

int main()
{

    int n, up, i, j, k, type, l, x, y;
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the no. of update that you performs:");
    scanf("%d", &up);
    int arr[n];
    printf("enter the element of array:");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        printf("\t");
    }
    for (i = 0; i < up; i++)
    {
        printf("enter type:");
        scanf("%d", &type);
        printf("enter lower limit:");
        scanf("%d", &j);
        printf("enter upper limit:");
        scanf("%d", &k);

        if (type == 1)
        {
            for (i = j; i <= k; i++)
            {
                for (l = i; l < n; i++)
                {
                    arr[l] = arr[l + 1];
                }
                arr[n] = arr[i];
            }
        }
        else if (type == 2)
        {
            for (i = j; i <= k; i++)
            {
                y = arr[i];
                for (l = j; l <= 1; l--)
                {
                    arr[l] = arr[l - 1];
                }
                arr[1] = x;
            }
        }
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}*/
//#include <stdio.h>

/*int addi(int x)
{
    int arr[50], i = 0, median;
    int *temp = &arr[i];
    if (temp == NULL)
    {
        arr[0] = x;
        median = arr[0];
        printf("%d", median);
    }
    else
    {
        while (temp != NULL)
        {
            temp = &arr[i + 1];
            i++;
        }
        arr[i] = x;
    }
    int n = i;
    int k, j, a;
    for (k = 0; k < n; k++)
    {
        for (i = 1; i < n; i++)
        {
            if (arr[k] > arr[j])
            {
                a = arr[k];
                arr[k] = arr[j];
                arr[j] = a;
            }
        }
    }
}
*/
// int main()
// {
//     int n, op, i;
//     char add;
//     char sub;
//     int arr[op];
//     printf("enter the no. of operation:");
//     scanf("%d", &op);
//     for (i = 0; i < op; i++)
//     {
//         scanf("%c", &add);
//         scanf("%d", &n);

/*if (add = 'a')
        {
             addi(n);
        }*/
//}

//return 0;
//}
