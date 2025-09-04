#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct Practice
{
    string number;
    string name;
    }person;

int main(void)
{
    person people[3];
    people[0].name = "David";
    people[0].number = "+4121312";

    people[1].name = "John";
    people[1].number = "+4121312";

    people[2].name = "Yuliaa";
    people[2].number = "+4121312";

    string name = get_string("Name: ");

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, name) == 0)
        {
            printf("The number is: %s", people[i].number);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}
