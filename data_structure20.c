#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newnode(int x)
{
    struct node *root1 = (struct node *)malloc(sizeof(struct node));
    root1->data = x;
    root1->left = NULL;
    root1->right = NULL;
    return root1;
}
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

struct node *insertion(struct node *root, int x)
{
    if (root == NULL)
    {
        return newnode(x);
    }
    else
    {
        if (x > root->data)
        {
            root->right = insertion(root->right, x);
        }
        else
        {
            root->left = insertion(root->left, x);
        }
    }
}

int main()
{
    int y;
    struct node *root = newnode(1);
    root->right = newnode(2);
    root->right->right = newnode(5);
    root->right->right->right = newnode(6);
    root->right->right->left = newnode(3);
    root->right->right->left->right = newnode(4);

    printf("inorder traversal before insertion");
    inorder(root);
    printf("\n");

    printf("enter the data which you want to insert in given BT:");
    scanf("%d", &y);
    insertion(root, y);

    printf("inorder traversal after insertion");
    inorder(root);

    return 0;
}
