#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readText()
{
    char* text = NULL;
    char currentChar;
    int textSize = 0;

    do
    {
        scanf("%c", &currentChar);
        textSize++;
        text = (char*) realloc(text, sizeof(char)*textSize);

        if(currentChar != '\n')
            text[textSize-1] = currentChar;
        else
            text[textSize-1] = '\0';

    }while(currentChar != '\n');

    return text;
}

int main()
{
    char *tweet;
    int tweetSize;

    tweet = readText();
    tweetSize = strlen(tweet);

    //Prints MUTE if tweet is larger than possible
    if(tweetSize > 140)
        printf("MUTE");
    //If it is OK, print TWEET
    else
        printf("TWEET");

    free(tweet);

    return 0;
}
