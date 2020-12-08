#include <stdio.h>

void recursiveFunction(int input)
{
    printf("%d\n", input);
    recursiveFunction(--input);
}

int main()
{
    recursiveFunction(5);
    return 0;
}
