#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nums[2][3]  =  { {16, 18, 20}, {25, 26, 27} };
    int **numsp;
    numsp = (int**) malloc(sizeof(int*)*2);
    for(int i = 0; i < 2; ++i)
        numsp[i] = (int*)malloc(sizeof(int)*3);

    printf("\nVetor:\n");
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d - ", nums[i][j]);
            *(*(numsp+i)+j) = nums[i][j];
        }
        printf("\n");
    }
    printf("\nPonteiro:\n");
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            printf("%d - ", numsp[i][j]);
        }
        printf("\n");
    }

	for(int i = 0; i < 2; ++i)
        free(numsp[i]);
	free(numsp);
}
