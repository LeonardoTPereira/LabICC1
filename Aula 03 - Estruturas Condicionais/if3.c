int main(){
    int teste1, teste2, teste3, teste4;
    teste1 = teste2 = teste3 = teste4 = 1;
    teste2 = 0;
    if(teste1 > 0)
        if(teste2 > 0)
            printf("Passou nos testes 1 e 2\n");
        else if(teste3 > 0)
            printf("Passou nos testes 1 e 3\n");
        else
            if(teste4 > 0)
                printf("Passou nos testes 1 e 4\n");
            else
                printf("Passou só no teste 1\n");
    else
        if(teste2 > 0)
            printf("Passou só no teste 2\n");
        else
            printf("Não passou em nenhum teste\n");
    return 0;
}

