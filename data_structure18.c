#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *insert(int x)
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = x;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int left_top_view(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        left_top_view(root->left);
        printf("%d\t", root->data);
    }
}
int right_top_view(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        printf("%d\t", root->data);
        right_top_view(root->right);
    }
}

int top_view(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        left_top_view(root);
        right_top_view(root->right);
    }
}

int main()
{
    struct node *root = insert(1);
    root->right = insert(2);
    root->right->right = insert(5);
    root->right->right->right = insert(6);
    root->right->right->left = insert(3);
    root->right->right->left->right = insert(4);
    printf("top view of this tree is:");
    top_view(root);
    return 0;
}