#include <stdio.h>

int main ()
{
	int i, j, k;
	k = 10;
	for (i = 0, j = k; i < 3 && j > 0; i++, j-=2)
	{
		//Fazer algo
		printf ("%d %d\n", i, j);
	}
	return 0;
}