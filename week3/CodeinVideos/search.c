#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "cannon", "iron", "boot", "thimble", "top hat"};

    string s = get_string("String: \n");

    for(int i = 0; i < 6; i++)
    {
        if(strcmp(strings[i], s) == 0)
        {
            printf("Found");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}