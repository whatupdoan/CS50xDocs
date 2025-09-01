#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x = ? ");
    int y = get_int("y = ? ");

    if (x < y)
    {
        printf("X (%d) < Y (%d)", x, y);

    }

    else if (x == y)
    {
        printf("X (%d) == Y (%d)", x, y);

    }

    if (x > y)
    {
        printf("X (%d) > Y (%d)", x, y);

    }
}
