#include <stdio.h>

int main (){
  FILE * pFile;
  long size;
  char myString[100];
  pFile = fopen ("data/example.jpg","rb");
  if (pFile==NULL) perror ("Error opening file");
  else  {
    fseek (pFile, 0, SEEK_END);   // non-portable
    size=ftell (pFile);
    rewind(pFile);
    fread (myString,sizeof(char),size,pFile);
    printf("%s\n", myString);
    printf ("Size of example: %ld bytes.\n",size);
  }
  return 0;
}

