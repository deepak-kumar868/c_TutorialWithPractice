#include <stdio.h>
#include <stdlib.h>

int main()

{
    FILE *deepak = NULL;
    deepak = fopen("dk222.txt", "r");
    // deepak = fopen("dk222.txt", "a");
    char m = fgetc(deepak);
    printf("the character i read was %c\n", m);
    while (m != EOF)
    {
        // printf("%c", m);
        // m = fgetc(deepak);
        putchar(m);
        m = fgetc(deepak);
    }

    // char d[500];
    // fgets(d, 99, deepak);
    // printf("%s\n", d);
    // fputc('o', deepak);
    // fputs("this is deepak", deepak);
    return 0;
}
