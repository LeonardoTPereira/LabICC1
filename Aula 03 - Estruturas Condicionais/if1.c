int main()
{
    int a = 1;
    float b = 0.4;
    if(1 == 1)
        printf("1 � igual a 1, � verdade!\n");
    if(a != 1)
        printf("1 n�o � diferente de 1, � falso e n�o serei impresso :(\n");
    if (1 > 0.4)
        printf("1 � maior que 0.4, � verdade!\n");
    if(a < b)
        printf("1 n�o � menor que 0.4, � falso e n�o serei impresso :(\n");
    if(a <= b || a >= b)
        printf("Uma das duas tem que ser verdade\n");
    if(a == 1 && b == 0.4)
        printf("Os dois tem que ser verdade, por isso fui impresso\n");
    if(0.2 < 0.5)
    {
        printf("Tamb�m pode ser um bloco de c�digo e n�o s� uma linha\n");
        a = 0;
    }
}
