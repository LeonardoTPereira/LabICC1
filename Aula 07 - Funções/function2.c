#include <stdio.h>

int divide(int a, int b, int *resto)
{
    *resto = a%b;
    return a/b;
}

int main()
{
    int r, resto;
    r = divide(30, 20, &resto);
    printf("resultado: %d resto: %d\n", r, resto);
    return 0;
}
