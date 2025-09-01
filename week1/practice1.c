#include <cs50.h>
#include <stdio.h>

string get_name(void);
void push_print(string name);

int main(void)
{
    string name = get_name();
    push_print(name);
    return 0;
}

string get_name(void)
{
    return get_string("Name: ");
}

void push_print(string name)
{
    printf("Hello, %s \n", name);
}