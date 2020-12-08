#include <stdio.h>
#define NUMBER 24
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

int main()
{
    for (int i = 0; i < NUMBER; i++)
        printf("%d ", fib(i));
    return 0;
}
