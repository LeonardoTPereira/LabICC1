#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "string";
    printf("String length: %lu\n", strlen(str)); //6
    printf("String size: %lu\n", sizeof(str)); //7
}
