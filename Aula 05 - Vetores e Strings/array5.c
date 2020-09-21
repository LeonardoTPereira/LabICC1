#include <stdio.h>

int main()
{
    int array[] = {10, 20, 30, 40};
    int n = sizeof(array)/sizeof(array[0]);
    printf("%d", n);
}
