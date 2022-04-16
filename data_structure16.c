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
}
void preordertraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d\t", root->data);
        preordertraversal(root->left);
        preordertraversal(root->right);
    }
}

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

void postordertraversal(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        postordertraversal(root->left);
        postordertraversal(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    struct node *root;
    root = newnode(1);
    root->right = newnode(2);
    root->right->right = newnode(5);
    root->right->right->left = newnode(3);
    root->right->right->left->right = newnode(4);
    root->right->right->right = newnode(6);

    printf("preorder traversal is:");
    preordertraversal(root);
    printf("\n");
    printf("inorder traversal is:");
    inordertraversal(root);
    printf("\n");
    printf("postorder traversal is:");
    postordertraversal(root);
    return 0;
}