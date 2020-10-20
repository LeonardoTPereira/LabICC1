#include <stdio.h>
#include <stdlib.h>

void increase (void* data, int psize)
{
    if ( psize == sizeof(char) )
    { 
        char* pchar;
        pchar=(char*)data; 
        ++(*pchar); 
    }
    else if (psize == sizeof(int) )
    { 
        int* pint; 
        pint=(int*)data; 
        ++(*pint); 
    }
}

int main ()
{
    char a = 'x';
    int b = 1602;
    increase (&a,sizeof(a));
    increase (&b,sizeof(b));
    printf("%c, %d\n", a , b);
    return 0;
}