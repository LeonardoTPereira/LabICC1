#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pFile;
    char buffer[100];
    pFile = fopen("aizen.txt", "r");

    if (pFile == NULL)
        perror ("Error opening file");

    else
    {
        while ( !feof(pFile) )
        {
            if (fgets (buffer, 100, pFile) == NULL )
                break;
            fputs(buffer, stdout);
        }
        fclose (pFile);
    }
    printf("\n");
    return 0;
}
