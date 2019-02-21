#include<stdio.h>
#include<cs50.h>
int main(void)

{
    int fivet = 500, twof = 250, two = 200, hund = 100, fifty = 50, five = 5, one =1, amount = 0;

    do
    {
        amount = get_int("How much change we owed you?: ");
    }
    while(amount < 0);


    int counter = 0;


    while (amount >= fivet)
    {
        counter++;
        amount = amount - fivet;
    }


    while (amount >= twof)
    {
        counter++;
         amount = amount - twof;
    }

    while (amount >= two)
    {
        counter++;
         amount = amount - two;
    }


    while (amount >= hund)
    {
        counter++;
         amount = amount - hund;
    }


    while (amount >= fifty)
    {
        counter++;
         amount = amount - fifty;
    }

    while (amount >= five)
    {
        counter++;
         amount = amount - five;
    }

    while (amount >= one)
    {
        counter++;
         amount = amount - one;
    }

    printf("%i\n", counter);
}