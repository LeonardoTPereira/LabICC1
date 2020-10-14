#include <stdio.h>

float divide(int a, int b, int *resto);

int main()
{
    int resto;
    float r;
    r = divide(30, 20, &resto);
    printf("resultado: %f resto: %d\n", r, resto);
    return 0;
}

float divide(int a, int b, int *resto)
{
    *resto = a%b;
    return a/(float)b;
}
