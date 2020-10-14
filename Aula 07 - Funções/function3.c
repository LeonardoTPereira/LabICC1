#include <stdio.h>

int divide(const int *a, const int *b, int *resto)
{
    *resto = *a%*b;
    return *a/(*b);
}

int main()
{
    int r, resto;
    int a = 30, b = 20;
    r = divide(&a, &b, &resto);
    printf("resultado: %d resto: %d\n", r, resto);
    return 0;
}
