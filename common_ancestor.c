#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newnode(int x)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int LCA(struct node *root, int v1, int v2)
{
    if (root != NULL)
    {
        if (root->data >= v1 && root->data >= v2)
        {
            LCA(root->left, v1, v2);
        }
        else if (root->data < v1 && root->data < v2)
        {
            LCA(root->right, v1, v2);
        }
        else if ((root->data < v1 && root->data > v2) || (root->data > v1 && root->data < v2))
        {
            printf("the common ansector of v1 and v2 is:%d", root->data);
        }
    }
}

int main()
{
    int v1, v2;
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root = newnode(4);
    root->left = newnode(2);
    root->left->left = newnode(1);
    root->left->right = newnode(3);
    root->right = newnode(7);
    root->right->left = newnode(6);

    printf("enter the vaule of v1 and v2:");
    scanf("%d%d", &v1, &v2);
    LCA(root, v1, v2);

    return 0;
}