#include <stdio.h>
#include <string.h>

int main()
{
    char str[6] = {'s', 't', 'r', 'i', 'n', 'g'};
    char str2[10];
    str2[0] = 't';
    printf("String length: %lu\n", strlen(str));
    printf("String size: %lu\n", sizeof(str));
    printf("String length: %lu\n", strlen(str2));
    printf("String size: %lu\n", sizeof(str2));
}

