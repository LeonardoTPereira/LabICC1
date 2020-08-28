#include <stdio.h>
int main()
{
    int a = 1;
    char b ='G';
    double c = 3.14;
    long int d = 123453;
    unsigned int e = 231435242;
    long long int f = 1234533334564;
    //print da variável e seu tamanho
    printf("A character. Value %c and size %lu byte.\n", b,sizeof(char));
    printf("An integer. Value %d and size %lu byte.\n", a,sizeof(a));
    printf("A double. Value %lf and size %lu byte.\n", c,sizeof(double));
    printf("A long int. Value %ld and size %lu byte.\n", d,sizeof(d));
    printf("An unsigned int. Value %u and size %lu byte.\n", e,sizeof(e));
    printf("A long long int. Value %lld and size %lu byte.\n", f,sizeof(f));
    return 0;
}
