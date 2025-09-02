#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

string GetLetter(void);
int count_letters(string Letter);
int count_words(string Letter);
int count_sentences(string Letter);
int CountPoint(int sentences, int letters, int words);
void SetGrade(int roundedIndex);


int main(void)
{
    string Letter = GetLetter();
    int words = count_words(Letter);
    int letters = count_letters(Letter);
    int sentences = count_sentences(Letter);
    int roundedIndex = CountPoint(sentences, letters, words);
    SetGrade(roundedIndex);


}

string GetLetter(void)
{
    string letter;
    do
    {
        letter = get_string("Enter a Letter: ");
    }
    while (letter == NULL || strlen(letter) == 0);
    return letter;

}

int count_words(string Letter)
{
    int wordCounter = 1;
    int LetterSize = strlen(Letter);

    for(int i = 0; i < LetterSize; i++)
    {
        if(Letter[i] == ' ')
        {
            wordCounter++;
        }
    }
    return wordCounter;
}

int count_letters(string Letter)
{
    int letterCounter = 0;
    int LetterSize = strlen(Letter);

    for(int i = 0; i < LetterSize; i++)
    {
        if (isalpha((unsigned char)Letter[i]))
        {
            letterCounter++;
        }        
    }
    return letterCounter;
}

int count_sentences(string Letter)
{
    int sentenceCounter = 0;
    int LetterSize = strlen(Letter);

    for(int i = 0; i < LetterSize; i++)
    {
        if(Letter[i] == '?' || Letter[i] == '!' || Letter[i] == '.')
        {
            sentenceCounter++;
        }
    }
    return sentenceCounter;
}

int CountPoint(int sentences, int letters, int words)
{
    float L = ((float) letters / (float) words) * 100.00f;
    float S = ((float) sentences / (float) words) * 100.00f;
    float index = 0.0588f * L - 0.296f * S - 15.8f;

    int roundedIndex = round(index);
    return roundedIndex;
}

void SetGrade(int index)
{
    if(index >= 16)
    {
        printf("Grade 16+ \n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n",index);
    }
    
}

