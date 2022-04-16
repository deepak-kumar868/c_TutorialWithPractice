#include<stdio.h>
void function1(char array[])
{
    int i;
    while(array[i]!='\0')

{
    printf("%c",array[i]);
    i++;

}
return 0;}




int main()
{
char array[]={"deepak"};
  function1(array);
return 0;
}
