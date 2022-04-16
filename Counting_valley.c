#include <stdio.h>

int main()
{
    unsigned long long int n, i, cout = 0, lavel = 0;
    scanf("%lld", &n);
    char c[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s", &c[i]);
        if (lavel == 0 && c[i] == 'D')
        {
            cout++;
            lavel--;
        }
        else if (c[i] == 'D')
        {
            lavel--;
        }
        else if (c[i] == 'U')
        {
            lavel++;
        }
    }
    printf("%lld", cout);

    return 0;
}
