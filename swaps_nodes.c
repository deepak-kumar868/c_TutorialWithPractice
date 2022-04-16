#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

void inordertraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inordertraversal(root->left);
        printf("%d\t", root->data);
        inordertraversal(root->right);
    }
}

void swaps(struct node **a, struct node **b)
{
    struct node *temp = *a;
    *a = *b;
    *b = temp;
}

void swapslevel(struct node *root, int k, int lavel)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }

    else if (lavel == k)
    {
        swaps(&root->left, &root->right);
        return;
    }
    else
    {
        swapslevel(root->left, k, lavel + 1);
        swapslevel(root->right, k, lavel + 1);
    }
}

struct node *newnode(int x)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

struct node *insertion(struct node *root, int x)
{
    if (root == NULL)
    {
        return newnode(x);
    }

    else if (x > root->data)
    {
        root->right = insertion(root->right, x);
    }
    else if (x <= root->data)
    {
        root->left = insertion(root->left, x);
    }
}

int main()
{
    int i, n, x, lavel = 1, k;
    struct node *root;
    root = newnode(10);

    printf("enter the no. of node of tree:");
    scanf("%d", &n);
    printf("enter the nodes vaule of tree:");
    for (i = 1; i < n; i++)
    {
        scanf("%d", &x);
        insertion(root, x);
    }
    printf("\n");
    inordertraversal(root);
    printf("\n");
    printf("enter the lavel which tou want to insert:");
    scanf("%d", &k);
    swapslevel(root, k, lavel);
    inordertraversal(root);

    return 0;
}