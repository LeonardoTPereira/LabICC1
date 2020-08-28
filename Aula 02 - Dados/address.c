#include <stdio.h>
int main()
{
    int a = 1;
    char b ='G';
    double c = 3.14;
    long int d = 123453;
    unsigned int *z, e = 231435242;
    long long int f = 1234533334564;
    //print do endereço e seu tamanho
    printf("An integer. Address %p and size %lu byte.\n", &a,sizeof(a));
    printf("A character. Address %p and size %lu byte.\n", &b,sizeof(char));
    printf("A double. Address %p and size %lu byte.\n", &c,sizeof(double));
    printf("A long int. Address %p and size %lu byte.\n", &d,sizeof(d));
    printf("An unsigned int. Address %p and size %lu byte.\n", &e,sizeof(e));
    printf("A long long int. Address %p and size %lu byte.\n", &f,sizeof(f));
    z=&a;
    printf("A pointer to a char. Value %u, Address %p, size %lu byte", *z, z, sizeof(z));
    return 0;
}
