#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"David", "John", "Yullia"};
    string numbers[] = {"+123130", "+123193", "+1231"};

    string name = get_string("Name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}