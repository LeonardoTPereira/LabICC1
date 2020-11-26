#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *vector;
    int vectorSize;
    long fileSize;
    size_t result;
    FILE *fp;

    fp = fopen("data/numbers.bin","rb");
    //Se arquivo não pode ser aberto, sair.
    if(fp == NULL)
    {
       printf("Error! opening file");
       exit(1);
    }

    fseek(fp, 0, SEEK_END);
    fileSize = ftell(fp);
    //equivale a rewind(fp):
    fseek(fp, 0, SEEK_SET);

    printf("File size: %ld\n", fileSize);
    vectorSize = fileSize/sizeof(float);
    printf("Vector size: %d\n", vectorSize);

    vector = (float*)malloc(vectorSize*sizeof(float));

    result = fread(vector, sizeof(float), vectorSize, fp);

    //Se o retorno do fread é diferente do que era esperado, aconteceu algum erro!
    if(result != vectorSize)
    {
        printf("Reading error!");
        exit(3);
    }

    for(int i = 0; i < vectorSize; ++i)
        printf("%f ", vector[i]);
    printf("\n");

    fclose(fp);

    return 0;
}
