#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ***nomesCompletos = NULL;
    char letra;
    int i, j, k, totalNomes, *palavrasPorNome = NULL;
    i = j = k = totalNomes = 0;
    do
	{
		nomesCompletos = (char***) realloc(nomesCompletos, (i+1)*sizeof(char**));
		nomesCompletos[i] = NULL;
		palavrasPorNome = (int*) realloc(palavrasPorNome, (i+1)*sizeof(int));
		//Indice que conta qual a letra atual da palavra em 'i'
		j = 0;
	    do
		{
		    nomesCompletos[i] = (char**) realloc(nomesCompletos[i], (j+1)*sizeof(char*));
		    nomesCompletos[i][j] = NULL;
			k = 0;
			do{
				//Lê letra da entrada
				letra = getchar();
				//Coloca a letra lida na string
				nomesCompletos[i][j] = (char*) realloc(nomesCompletos[i][j], (k+1)*sizeof(char));
				nomesCompletos[i][j][k] = letra;
				//Aumenta o indice para ler a proxima letra
				k++;
				// 10 = \n, 32 = espaço, 35 = #
			}while((letra != 10) && (letra!= 32) && (letra!=35));
			//Como o ultimo caractere lido não é o '\0', deve ser substituido por '\0', para indicar o fim da string
			nomesCompletos[i][j][k-1] = '\0';
			j++;
		}while((letra != 10) && (letra!= 35));
		//Como o ultimo caractere lido não é o '\0', deve ser substituido por '\0', para indicar o fim da string
		palavrasPorNome[i] = j;
		i++;
	}while (letra != 35);
	totalNomes = i;

    //Print the result.
	for(i = 0; i < totalNomes; i++)
    {
        for(j = 0; j < palavrasPorNome[i]; j++)
        {
            printf("%s-", nomesCompletos[i][j]);
            free(nomesCompletos[i][j]);
        }
        free(nomesCompletos[i]);
        printf("\n");
    }
    free(palavrasPorNome);
    free(nomesCompletos);
}
