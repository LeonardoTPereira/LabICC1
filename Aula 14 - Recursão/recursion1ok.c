#include <stdio.h>

void recursiveFunction(int input)
{
    if(input > 0)
    {
        printf("%d\n", input);
        recursiveFunction(--input);
    }
}

int main()
{
    recursiveFunction(5);
    return 0;
}
