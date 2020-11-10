#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Retornando o ponteiro realocado
char* concatStrings(char* string1, char* string2)
{
    //String1 + String2 + '\0' + espaço
    int newSize = strlen(string1) + strlen(string2) + 2;
    int index1 = strlen(string1);

    string1 = (char*) realloc(string1, sizeof(char)*newSize);

    string1[index1++] = ' ';

    int index2 = 0;
    while(string2[index2] != '\0')
    {
        string1[index1++] = string2[index2++];
    }
    string1[index1] = '\0';

    return string1;
}

int main()
{
    char* stringPtr = NULL;
    char string1[] = "fique";
    char string2[] = "em";
    char string3[] = "casa";
    stringPtr = (char*) malloc(sizeof(char)*strlen(string1));
    strcpy(stringPtr, string1);
    printf("\n%s\n", stringPtr);
    stringPtr = concatStrings(stringPtr, string2);
    printf("\n%s\n", stringPtr);
    stringPtr = concatStrings(stringPtr, string3);
    printf("\n%s\n", stringPtr);
    return 0;
}
