#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
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

int check_bst(struct node *root)
{
    if ((root->left != NULL && root->right != NULL) && (root->left->data > root->data || root->right->data <= root->data))
    {
        printf("NOT\n");
        return 0;
    }
    else if (root->left == NULL && root->right->data < root->data)
    {
        printf("NOT\n");
        return 0;
    }
    else if (root->right == NULL && root->left->data > root->data)
    {
        printf("NOT\n");
        return 0;
    }

    else if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    else if (root == NULL)
    {
        return 0;
    }
    else
    {
        check_bst(root->left);
        check_bst(root->right);
    }
}

int main()
{
    printf("if you see a [NOT] in downward,\nyour tree is not a binary\notherwise your tree is binary.");
    printf("\n\n");

    struct node *root;
    root = newnode(2);
    root->right = newnode(1);
    root->left = newnode(1);
    root->right->right = newnode(5);
    root->right->right->left = newnode(3);
    root->right->right->left->right = newnode(4);
    root->right->right->right = newnode(6);
    check_bst(root);

    return 0;
}