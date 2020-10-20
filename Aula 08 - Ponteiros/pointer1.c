#include <stdio.h>

int main()
{
    int firstvalue, secondvalue;
    int *mypointer;

    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    printf("firstvalue is %d\n", firstvalue);
    printf("secondvalue is %d\n", secondvalue);
    return 0;
}
