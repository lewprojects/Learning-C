//Funcion to determine if a character is alphabetic

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

//function to determine if a character is alphabetic
bool alphabetic (const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
}

//
void readLine (char buffer[])
{
    char character;
    int i = 0;

    do
    {
        character = getchar();
        buffer[i] = character;
        i++;
    }
    while(character != '\n');

    buffer[i - 1] = '\0';
}

//Function to count the number of words in a string

int countWords (const char string[])
{
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic (const char c);

    for (i = 0; string[i] != '\0'; i++)
        if(alphabetic(string[i]) || string[i] == '\'' && alphabetic(string[i + 1]))
        {
                if(lookingForWord)
                {
                    wordCount++;
                    lookingForWord = false;
                }
        }
        else
            lookingForWord = true;

    return wordCount;
}

int countNums (const char string[])
{
    int i, numCount = 0;
    bool lookingForNum = true;

    for (i = 0; string[i] != '\0'; i++)
        if(isdigit(string[i]) || string[i] == '.' && isdigit(string[i + 1]) || string[i] == ',' && isdigit(string[i + 1]))
        {
                if(lookingForNum)
                {
                    numCount++;
                    lookingForNum = false;
                }
        }
        else
            lookingForNum = true;

    return numCount;
}

int main (void)
{
    char text[500];
    int totalWords = 0;
    int totalNumbers = 0;
    int countWords(const char string[]);
    int countNums (const char string[]);
    void readLine(char buffer[]);
    bool endOfText = false;

    printf("Type in your text.\n");
    printf("When you are done, press 'RETURN' twice.\n\n");

    while(!endOfText)
    {
        readLine(text);

        if(text[0] == '\0')
            endOfText = true;
        else
            totalWords += countWords(text);
            totalNumbers += countNums(text);
    }

    printf("\nThere are %i words in the above text.\n", totalWords);
    printf("There are %i numbers in the above text.\n", totalNumbers);

    return 0;
}