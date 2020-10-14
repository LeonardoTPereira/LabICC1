#include <stdio.h>

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int r;
    r = add(10, 20);
    printf("%d\n", r);
	//printf("%d\n", add(10, 20));
    return 0;
}
