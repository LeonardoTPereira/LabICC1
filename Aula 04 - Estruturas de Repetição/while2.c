#include <stdio.h>

int main ()
{
  	int i, j;
  	i = 0;
  	j = 10;
  	while ( i < 3 && j > 0)
	{
		//Fazer algo
		printf ("%d %d\n", i, j);
		++i;
		j-=i;
    }
  	return 0;
}
