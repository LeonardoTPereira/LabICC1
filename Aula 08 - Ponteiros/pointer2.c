#include <stdio.h>

int main()
{
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;

    p1 = &firstvalue;  // p1 = address of firstvalue
    p2 = &secondvalue; // p2 = address of secondvalue
    printf("valor p1: %d\n", *p1);
    printf("valor p2: %d\n\n", *p2);
    *p1 = 10;          // value pointed to by p1 = 10
    *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
    printf("valor p1: %d\n", *p1);
    printf("valor p2: %d\n\n", *p2);

    p1 = p2;           // p1 = p2 (value of pointer is copied)
    *p1 = 20;          // value pointed to by p1 = 20

    printf("firstvalue is %d\n", firstvalue);
    printf("secondvalue is %d\n", secondvalue);
    return 0;
}
