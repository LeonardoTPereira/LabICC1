int main()
{
    int a = 1, b = 2;
    float c = 1.5;
    char d= 'c';
    if(d == 'x')
        printf("d � um caractere x\n");
    else
        printf("d n�o � um caractere x\n");
    if(c == a)
        printf("c � igual a a\n");
    else if(c == b)
        printf("c � igual a b\n");
    else if(c > a)
        printf("c � maior que a\n");
    else if (b > a)
        printf("b � maior que a\n");
    else
        printf("N�o fa�o ideia do que testar\n");
}
