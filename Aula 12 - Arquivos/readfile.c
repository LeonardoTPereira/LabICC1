#include <stdio.h>

int main ()
{
    FILE * pFile;
    char myString[100];
    pFile = fopen ("data/myfile.txt","r");
    if (pFile == NULL) perror ("Error opening file");
    else {
        if ( fgets (myString , 100 , pFile) != NULL )
            printf("%s\n", myString);
    fclose (pFile);
    }
    return 0;
}
