#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
    float dollars;

    do
    {
        dollars = get_float("change owed : ");

    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    int coins = 0;

    if (cents >= 25)
    {
        do
        {
            cents = cents - 25;
            coins = coins + 1;
        }
        while (cents >= 25);
    }

    if (cents >= 10)
    {
        do
        {
            cents = cents - 10;
            coins = coins + 1;
        }
        while (cents >= 10);
    }

    if (cents >= 5)
    {
        do
        {
            cents = cents - 5;
            coins = coins + 1;
        }
        while (cents >= 5);
    }

    if (cents >= 1)
    {
        do
        {
            cents = cents - 1;
            coins = coins + 1;
        }

        while (cents >= 1);
    }

    printf("%i \n", coins);
}