#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int CalculateThePoint(string Context);
string get_Context(string player);

int main(void)
{
    string player1 = get_Context("Player 1 : ");
    string player2 = get_Context("Player 2 : ");

    int point1 = CalculateThePoint(player1);
    int point2 = CalculateThePoint(player2);

    if (point1 < point2)
    {
        printf("Player 2 Wins!\n");
    }
    else if (point1 == point2)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Player 1 Wins! \n");
    }
}

string get_Context(string player)
{
    string player_text;
    do{
        player_text = get_string("%s", player);
    }
    while (player_text == NULL || strlen(player_text) == 0);
    printf("%s You wrote: %s \n",player, player_text);
    return player_text;
}

int CalculateThePoint(string Context)
{
    const int POINTS[26] = {
	1, 3, 3, 2, 1, 4, 
    2, 4, 1, 8, 5,
    1, 3, 1, 1, 3, 
    10, 1, 1, 1, 1,
    4, 4, 8, 4, 10};
    
    int PlayerPoint = 0;
 
    for(int i = 0; i < strlen(Context); i++)
    {
        Context[i] = tolower(Context[i]);

        int Ascii_to_Alphabet = (int) Context[i] - 'a';

        PlayerPoint += POINTS[Ascii_to_Alphabet];

    }

    return PlayerPoint;    

}

