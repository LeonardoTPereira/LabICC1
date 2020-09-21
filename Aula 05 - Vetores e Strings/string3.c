#include <stdio.h>
#include <string.h>

int main ()
{
	int i;
	char palavra[10];
	printf("Digite uma palavra:\n");
	scanf("%s", palavra);

	i = 0;
	while(palavra[i] != '\0')
	{
		printf("%c ", palavra[i]);
		i++;
	}
	printf("\n%s", palavra);
	return 0;
}
