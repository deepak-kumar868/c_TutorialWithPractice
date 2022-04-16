#include <stdio.h>
#include <stdlib.h>
int main()
{
  FILE *fp = NULL;
  // char string[45] = " this is hackroo";
  char string[45];
  // fp = fopen("dk222.txt", "a");
  fp = fopen("dk222.txt", "r");
  if (fp == NULL)
  {
    printf("file is not present\n");
  }
  else
  {
    printf("file opened in read mode\n");
  }
  fscanf(fp, "%s", string);
  printf("the content of this file has %s\n", string);

  // fprintf(fp, "%s", string);
  // printf("the content of this file has %s\n", string);

  fclose(fp);
  return 0;
}
