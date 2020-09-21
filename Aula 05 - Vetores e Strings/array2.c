#include <stdio.h>

int main ()
{
	int i, array[3];
	for(i = 0; i < 3; i++)
	{
		printf("Digite um valor:\n");
		scanf("%d", &array[i]);
		printf("Digitou: %d\n", array[i]);
	}
	return 0;
}

