#include <stdio.h>

int main ()
{
  	int i, j;
  	i = 0;
  	while (i < 3)
	{
		j = i;
		while(j > 0)
		{
			//Fazer algo
			printf ("%d %d\n", i, j);
			j--;
			i++;
		}
		i++;
    }
  	return 0;
}
