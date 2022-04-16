#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *insert(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int l = height(root->left);
        int r = height(root->right);
        if (l > r)
        {
            return l + 1;
        }
        else
        {
            return r + 1;
        }
    }
}

void lavel_traversal(struct node *root, int lavel)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (lavel == 1)
        {
            printf("%d\t", root->data);
        }
        else if (lavel > 1)
        {
            lavel_traversal(root->left, lavel - 1);
            lavel_traversal(root->right, lavel - 1);
        }
    }
}

int main()
{
    int h, i;
    struct node *root = insert(1);
    root->right = insert(2);
    root->right->right = insert(5);
    root->right->right->right = insert(6);
    root->right->right->left = insert(3);
    root->right->right->left->right = insert(4);

    h = height(root);

    printf("lavel traversal of given tree is:");
    for (i = 1; i <= h; i++)
    {
        lavel_traversal(root, i);
    }
    return 0;
}