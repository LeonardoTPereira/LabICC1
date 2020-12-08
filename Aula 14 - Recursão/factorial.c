#include <stdio.h>

#define NUMBER 1

int fact(int n)
{
    int answer;
    if(n <= 1)
        return 1;
    else
    {
        answer = n*fact(n-1);
        return answer;
    }

}

int main()
{
    printf("%d\n",fact(NUMBER));
}
