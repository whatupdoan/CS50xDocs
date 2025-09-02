#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("Whats Your Name: ");

    printf("Merhaba %s \n", answer);
}
