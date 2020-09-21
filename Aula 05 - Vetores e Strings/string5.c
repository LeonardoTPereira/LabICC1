#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], str2[20];
    scanf("%[^\n]%*c", str);
    printf("-%s-\n", str);
    scanf("%[^\n]%*c", str2);
    printf("-%s-\n", str2);
    return 0;
}

