#include <stdio.h>
#define TOTALNUMBERS 2.0

int main ()
{
    int numero1, numero2;
    float media;
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    media = (numero1 + numero2)/TOTALNUMBERS;
    printf("%.2f", media);
    return 0;
}
