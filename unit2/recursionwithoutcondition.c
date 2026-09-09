#include <stdio.h>

void count()
{

    static int n = 0;

    n++;

    printf("Function call: %d\n", n);

 

    count();   // Function calls itself again
}

int main()
{
    count();

    return 0;
}