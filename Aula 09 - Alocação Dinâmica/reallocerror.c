#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Retornando o ponteiro realocado
char* concatStrings(char* string1, char* string2)
{
    //String1 + String2 + \n + espaço
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

//Não retornando o ponteiro reallocado - ERRADO!!!
void concatStringsWrong(char* string1, char* string2)
{
    //String1 + String2 + \n + espaço
    int newSize = strlen(string1) + strlen(string2) + 2;
    int index1 = strlen(string1);

    string1 = (char*) realloc(string1, sizeof(char)*newSize*100);

    string1[index1++] = ' ';

    int index2 = 0;
    while(string2[index2] != '\0')
    {
        string1[index1++] = string2[index2++];
    }
    string1[index1] = '\0';
}

//Ponteiro para o ponteiro a ser realocado
void concatStrings2(char** string1, char* string2)
{
    //String1 + String2 + \n + espaço
    int newSize = strlen(*string1) + strlen(string2) + 2;
    int index1 = strlen(*string1);

    *string1 = (char*) realloc(*string1, sizeof(char)*newSize);

    (*string1)[index1++] = ' ';

    int index2 = 0;
    while(string2[index2] != '\0')
    {
        (*string1)[index1++] = string2[index2++];
    }
    (*string1)[index1] = '\0';
}

void mallocs()
{
    for(int i = 0; i < 100; i++)
    {
        int *ptr = (int*) malloc(sizeof(int)*1000);
    }
}

int main()
{
    char* stringPtr = NULL;
    char string1[] = "fique";
    char string2[] = "em";
    char string3[] = "casa";
    stringPtr = (char*) malloc(sizeof(char)*strlen(string1)*10000);
    strcpy(stringPtr, string1);
    mallocs();
    printf("\n%s\n", stringPtr);
    //concatStringsWrong(stringPtr, string2);
    concatStrings2(&stringPtr, string2);
    //stringPtr = concatStrings(stringPtr, string2);
    printf("\n%s\n", stringPtr);

    mallocs();
    //stringPtr = concatStrings(stringPtr, string3);
    concatStrings2(&stringPtr, string3);
    //concatStringsWrong(stringPtr, string3);
    printf("\n%s\n", stringPtr);
    return 0;
}
