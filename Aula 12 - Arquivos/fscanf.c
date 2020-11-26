/* fprintf example */
#include <stdio.h>

int main ()
{
    FILE * pFile;
    int n;
    char name[100];

    pFile = fopen ("myfileprintf.txt","r");
    while(fscanf(pFile, "Name %d %[^\n]",&n,name) != EOF)
    {
        fgetc(pFile);
        printf("Name %d %s\n", n, name);
    }
    fclose (pFile);

    return 0;
}
