#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VECTORSIZE 10

int main()
{
    float vector[VECTORSIZE];
    FILE *fp;
    srand(time(NULL));

    for(int i = 0; i < VECTORSIZE; ++i)
        vector[i] = rand()/(float)(RAND_MAX/100);


    fp = fopen("data/numbers.bin","wb");
    //Se arquivo não pode ser aberto, sair.
    if(fp == NULL)
    {
       printf("Error! opening file");
       exit(1);
    }

    fwrite(vector, sizeof(float), VECTORSIZE, fp);

    fclose(fp);

    return 0;
}
