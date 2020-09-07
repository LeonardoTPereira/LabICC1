int main()
{
    int a = 1;
    float b = 0.4;
    if(1 == 1)
        printf("1 é igual a 1, é verdade!\n");
    if(a != 1)
        printf("1 não é diferente de 1, é falso e não serei impresso :(\n");
    if (1 > 0.4)
        printf("1 é maior que 0.4, é verdade!\n");
    if(a < b)
        printf("1 não é menor que 0.4, é falso e não serei impresso :(\n");
    if(a <= b || a >= b)
        printf("Uma das duas tem que ser verdade\n");
    if(a == 1 && b == 0.4)
        printf("Os dois tem que ser verdade, por isso fui impresso\n");
    if(0.2 < 0.5)
    {
        printf("Também pode ser um bloco de código e não só uma linha\n");
        a = 0;
    }
}
