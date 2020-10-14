#include <stdio.h>

int* fun()
{
    static int arr[100];

    /* Some operations on arr[] */
    arr[0] = 10;
    arr[1] = 20;

    return arr;
}

int main()
{
    int* ptr = fun();
    printf("%d %d", ptr[0], ptr[1]);
    return 0;
}
