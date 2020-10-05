#include <stdio.h>

int main()
{

    int notas[2][3] = {{10, 9, 8}, {5, 6, 7}};
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
            printf("%2d ", notas[i][j]);
        printf("\n");
    }
    return 0;
}
