#include <stdio.h>

int main()
{
    int option, a=1;
    char optionChar;
    scanf("%d", &option);
    //scanf("%c", &optionChar);
    switch (option)
    {
        case 1: printf("Escolheu a 1\n");
            break;
        //Não pode ser uma variável
        //case a: printf("Escolheu a 2\n");
        case 2: printf("Escolheu a 2\n");
            break;
        case 3: printf("Escolheu a 3\n");
            break;
        default: printf("Não existe essa opção\n");
            //Não precisa de break já que é o fim. Mas pode colocar
            //break;
    }
    /*switch (optionChar)
    {
        case '1': printf("Escolheu a char 1\n");
            break;
        case '2': printf("Escolheu a char 2\n");
            break;
        case 'a': printf("Escolheu a char a\n");
            break;
        default: printf("Não existe essa opção\n");
            break;
    }*/
    return 0;
}
