int main()
{
    int a = 1, b = 2;
    float c = 1.5;
    char d= 'c';
    if(d == 'x')
        printf("d é um caractere x\n");
    else
        printf("d não é um caractere x\n");
    if(c == a)
        printf("c é igual a a\n");
    else if(c == b)
        printf("c é igual a b\n");
    else if(c > a)
        printf("c é maior que a\n");
    else if (b > a)
        printf("b é maior que a\n");
    else
        printf("Não faço ideia do que testar\n");
}
