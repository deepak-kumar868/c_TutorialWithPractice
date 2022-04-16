#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

int main()
{
  int n, i = 1;
  struct node *head, *newnode, *temp;
  printf("enter number of node:");
  scanf("%d", &n);

  newnode = (struct node *)malloc(sizeof(struct node));
  printf("enter the data of node:");
  scanf("%d", &newnode->data);
  newnode->next = NULL;
  head = newnode;
  temp = newnode;

  for (i = 2; i <= n; i++)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    temp->next = newnode;
    temp = temp->next;
  }

  temp = head;

  while (temp != NULL)
  {
    printf("%d->", temp->data);
    temp = temp->next;
  }

  printf("NULL");
  return 0;
}