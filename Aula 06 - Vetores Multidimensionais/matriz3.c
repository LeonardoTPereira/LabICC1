#include <stdio.h>
#define LINHAS 3
#define COLUNAS 4

int main()
{
    int notas[LINHAS][COLUNAS] = {{10, 9, 8, 9}, {5, 6, 7, 8}, {3, 5, 8, 9}};
    for(int i = 0; i < LINHAS; ++i)
    {
        for(int j = 0; j < COLUNAS; ++j)
            printf("%2d ", notas[i][j]);
        printf("\n");
    }
    return 0;
}

