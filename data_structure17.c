#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newnode(int x)
{
    struct node *root;
    root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int calheight(struct node *root1)
{
    if (root1 == NULL)
    {
        return 0;
    }
    int lheight = calheight(root1->left);
    int rheight = calheight(root1->right);
    return max(lheight, rheight) + 1;
}

int main()
{
    struct node *root = newnode(3);
    root->left = newnode(3);
    root->left->left = newnode(1);
    root->right = newnode(5);
    root->right->left = newnode(4);
    root->right->right = newnode(6);
    root->right->right->right = newnode(7);
    printf("height of tree is:%d", calheight(root));
    return 0;
}