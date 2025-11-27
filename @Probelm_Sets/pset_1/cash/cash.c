#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cents;
    // prompt usr for input of amt owed (in cents)
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int coins = 0;

    // calc no. of quarters we should give by div. Store the remainder back to cents.
    coins += cents / 25;
    cents %= 25;
    // calc no. of dimes we should give by div. Store the remainder back to cents.
    coins += cents / 10;
    cents %= 10;
    // calc no. of nickels we should give by div. Store the remainder back to cents.
    coins += cents / 5;
    cents %= 5;
    // calc no. of pennies we should give by div. Store the remainder back to cents.
    coins += cents / 1;
    cents %= 1;

    // print the sum
    printf("%i\n", coins);
}
