#include <cs50.h>
#include <stdio.h>

int possitive(void)
{
    int n;

    do
    {
        n = get_int("How Money Cash Do You Have :");
    }
    while(n < 0);
    return n;
}


int main(void)
{
    int amount = possitive();
    int counter = 0;
    int quarter = 25;
    int dime = 10;
    int nickel = 5;


    counter += amount / quarter;
    amount = amount % quarter;

    counter += amount / dime;
    amount = amount % dime;

    counter += amount / nickel;
    amount = amount % nickel;

    counter += amount;

    printf("%d \n", counter);
    return 0;

}
