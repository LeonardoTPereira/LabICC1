#include <stdio.h>

int* fun(int *arr)
{
    /* Some operations on arr[] */
    arr[0] = 10;
    arr[1] = 20;

    return arr;
}

int main()
{
    int arr[100];
    int* ptr = fun(arr);
    printf("%d %d\n", ptr[0], ptr[1]);
    printf("%d %d\n", arr[0], arr[1]);
    return 0;
}
