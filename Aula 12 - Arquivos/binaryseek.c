/* fseek example */
#include <stdio.h>

int main ()
{
    FILE *pFile;
    pFile = fopen("data/example.bin" , "wb");
    fputs ("This is an apple.", pFile);
    fseek (pFile, 9, SEEK_SET);
    fputs (" sam" , pFile );
    fclose ( pFile );
    return 0;
}
