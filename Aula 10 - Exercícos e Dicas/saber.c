#include <stdio.h>
#include <stdlib.h>

int** createTerrain(int nRows, int nCols)
{
    int **terrain;
    terrain = (int**) malloc(sizeof(int*)*nRows);
    for(int i = 0; i < nRows; ++i)
    {
        terrain[i] = (int*) malloc(sizeof(int)*nCols);
    }

    for(int i = 0; i < nRows; ++i)
    {
        for(int j = 0; j < nCols; ++j)
        {
            scanf("%d", &terrain[i][j]);
        }
    }

    return terrain;
}

void searchLightSaber(int **terrain, int nRows, int nCols, int *x, int *y)
{
    int sevenCounter = 0;
    for(int i = 0; i < nRows; ++i)
    {
        for(int j = 0; j < nCols; ++j)
        {
            //If lightsaber number is found, search the possibility
            if(terrain[i][j] == 42)
            {
                sevenCounter = 0;
                //Look around the neighborhood for 7's
                for(int neighborX = i-1; neighborX < i+2; ++neighborX)
                {
                    for(int neighborY = j-1; neighborY < j+2; ++neighborY)
                    {
                        //If go over matrix bounds, break this search for neighbors,
                        if(neighborX < 0 || neighborY < 0 || neighborX >= nRows || neighborY >= nCols)
                        {
                            break;
                        }
                        //If bounds are ok, check if there are 7's
                        else
                        {
                            //We already know terrain[i][j] is a 42
                            if(!((neighborX == i) && (neighborY == j)))
                                if(terrain[neighborX][neighborY] == 7)
                                    sevenCounter++;
                        }
                    }
                }
                //If there were 8 neighbor cells with a 7 in them, we found the light saber!
                if(sevenCounter == 8)
                {
                    *x = i+1;
                    *y = j+1;
                }
            }
        }
    }
}

int main()
{
    int **terrain;
    int x=0, y=0;
    int nRows, nCols;

    scanf("%d %d", &nRows, &nCols);

    terrain = createTerrain(nRows, nCols);

    searchLightSaber(terrain, nRows, nCols, &x, &y);

    printf("%d %d", x, y);

    for(int i = 0; i < nRows; ++i)
    {
        free(terrain[i]);
    }
    free(terrain);

}

