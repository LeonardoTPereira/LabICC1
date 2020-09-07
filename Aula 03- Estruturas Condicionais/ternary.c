#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a = 0.1f, b = 0.1f;
    if(a==0.1f)
        printf("Igualei dois floats\n");
    else
        printf("Não consegui igualar dois floats\n");
    if(a==0.1)
        printf("Igualei dois float e double\n");
    else
        printf("Não consegui igualar float e double\n");
    if(a==b)
        printf("Igualei dois floats\n");
    else
        printf("Não consegui igualar dois floats\n");
    a += 1.2;
    b += 1.2f;
    if(a==b)
        printf("Igualei dois floats depois de um cast implicito\n");
    else
        printf("Não consegui dois floats depois de um cast implicito\n");
    if(abs(a-b) < 0.0001)
        printf("Agora igualei dois floats depois de um cast implicito\n");
}
