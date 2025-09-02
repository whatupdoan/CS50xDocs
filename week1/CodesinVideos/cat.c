#include <cs50.h>
#include <stdio.h>


void meow(int n)
{
    for(int i = 0; i <n; i++){
        printf("Meow \n");
    }
}

int get_possitive_int(void)
{
    int n;
    do
    {
        n = get_int("Press a Number: ");
    }
    while (n < 1);

    return n;
}


int main(void){

    int times = get_possitive_int();
    meow(times);
}
