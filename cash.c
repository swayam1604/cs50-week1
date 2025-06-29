#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change;
    do
    {
        change = get_int("Cash owed (in cents): ");
    }
    while (change < 0);

    // Variables
    int quarter = 0;
    int dimes = 0;
    int nickel = 0;
    int penny = 0;

    // Greedy algorithm
    quarter = change / 25;
    change %= 25;

    dimes = change / 10;
    change %= 10;

    nickel = change / 5;
    change %= 5;

    penny = change;

    // Calculate and print total number of coins
    int total = quarter + dimes + nickel + penny;

    printf("Total coins used: %d\n", total);
}
