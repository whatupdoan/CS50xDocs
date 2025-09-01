#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("X için Değer Gir: ");
    int y = get_int("Y için Değer Gir: ");

    int z = x + y;

    printf("%i\n", z);
}
