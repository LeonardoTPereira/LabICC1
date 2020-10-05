#include <stdio.h>
#include <stdlib.h>

#define NPALAVRAS 3
#define MAXLETRAS 15

int main()
{
    char palavras[NPALAVRAS][MAXLETRAS];

    for(int i = 0; i < NPALAVRAS; ++i)
        scanf("%s", palavras[i]);
    for(int i = 0; i < NPALAVRAS; ++i)
        printf("%s\n", palavras[i]);
    return 0;
}
