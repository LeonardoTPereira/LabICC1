#include <stdio.h>

int main ()
{
  FILE *pFile;
  pFile = fopen ("data/myfile.txt","w");
  if (pFile!=NULL)
  {
    fputs ("fopen example", pFile);
    fclose (pFile);
  }
  return 0;
}
