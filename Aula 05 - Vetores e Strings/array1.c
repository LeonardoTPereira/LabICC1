#include <stdio.h>

int main ()
{
	int i, array[10];
	for(i = 0; i < 10; i++)
	{
		array[i] = i*2;
		printf("Indice %d - Array: %d\n", i, array[i]);
	}
	return 0;
}
