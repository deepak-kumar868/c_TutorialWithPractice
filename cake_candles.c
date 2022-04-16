#include <stdio.h>

int main()
{
    int candles, i, tall = 0, cout = 0;
    printf("enter the no. of available candle:");
    scanf("%d", &candles);
    int can[candles];
    printf("enter the size of candle:");
    for (i = 0; i < candles; i++)
    {
        scanf("%d", &can[i]);
        if (can[i] > tall)
        {
            tall = can[i];
        }
    }
    for (i = 0; i < candles; i++)
    {
        if (tall == can[i])
        {
            cout++;
        }
    }
    printf("size of the candle on cake is:%d\n", tall);
    printf("no. of candle on cake is:%d\n", cout);

    return 0;
}