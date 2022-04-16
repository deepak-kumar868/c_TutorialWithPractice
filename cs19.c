#include <stdio.h>

int main()
{
    int unit;
    char cus_id[20], name[20];
    printf("enter name:");
    scanf("%s", name);
    printf("enter customer id:");
    scanf("%s", cus_id);
    printf("enter unit:");
    scanf("%d", &unit);
    float chg;
    if (unit < 200)
    {
        chg = 1.20;
    }

    else if (unit > 200 && unit < 400)
    {
        chg = 1.50;
    }

    else if (unit >= 400 && unit < 600)
    {
        chg = 1.80;
    }
    else
    {
        chg = 2.00;
    }

    float bill = chg * unit, surchg;

    if (bill > 300)
    {
        surchg = bill * 15 / 100;
        bill = surchg + bill;
    }
    else if (bill < 100)
    {
        bill = 100;
    }

    printf("   electricity bill   \n");
    printf("-----------------------\n");
    printf("customer id no.         :%s\n", cus_id);
    printf("name                    :%s\n", name);
    printf("unit consumbed          :%d\n", unit);
    printf("rate rs/unit            :%f\n", chg);
    printf("surplus charge          :%f\n", surchg);
    printf("bill                    :%f\n", bill);

    return 0;
}