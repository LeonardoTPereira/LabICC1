#include <stdio.h>
#include <stdlib.h>

//Um enum é uma enumeração. Começando em 0.
//É muito usado para facilitar leitura e manutenção de código.
//Muito usado no contexto de desenvolvimento de jogos.
enum types{Fire, Water, Wind, Earth, Light, Dark}; //0 a 5

/**
 *  Fire == 0 
 *  Water == 1
 *  Wind == 2 
 *  Earth == 3 
 *  Light == 4
 *  Dark == 5
 */

int main()
{
    int defenderHP, attackerAtk, defenderType, attackerType, damageMultiplier, hitChance, randHit;
    printf("Vida do Defensor:\n");
    scanf("%d", &defenderHP);
    printf("Tipo do Defensor:\n"); //0 a 5 (enum)
    scanf("%d", &defenderType);
    printf("Ataque do Atacante:\n");
    scanf("%d", &attackerAtk);
    printf("Tipo do Atacante:\n"); //0 a 5 (enum)
    scanf("%d", &attackerType);
    printf("Chance de Acerto:\n"); //0 a 100
    scanf("%d", &hitChance);
    
    //A função rand() gera um número aleatório. Ao pegarmos o resto do resultado por um valor, limitamos ela entre 0 e esse valor.
    randHit = rand()%100; 
    
    if(randHit < hitChance) 
    {
        if(attackerType == Water)
            if(defenderType == Fire)
                damageMultiplier = 2;
            else
                damageMultiplier = 1;
        else if(attackerType == Wind)
            if(defenderType == Earth)
                damageMultiplier = 2;
            else
                damageMultiplier = 1;
        else if(attackerType == Light)
            if(defenderType == Dark)
                damageMultiplier = 2;
            else
                damageMultiplier = 1;
        else if(attackerType == Fire)
            if(defenderType == Water)
                damageMultiplier = 0.5;
            else
                damageMultiplier = 1;
        else if(attackerType == Earth)
            if(defenderType == Wind)
                damageMultiplier = 0.5;
            else
                damageMultiplier = 1;
        else if(attackerType == Dark)
            if(defenderType == Light)
                damageMultiplier = 0.5;
            else
                damageMultiplier = 1;
        else
        {
            damageMultiplier = 1.0;
        }
        defenderHP -= attackerAtk*damageMultiplier;
        printf("HP restante: %d\n", defenderHP);
    }
    else
    {
        printf("O ataque falhou!\n");
    }
    return 0;
}
