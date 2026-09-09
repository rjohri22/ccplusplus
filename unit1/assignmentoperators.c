#include <stdio.h>

int main()
{
    int a = 10;

    printf("Initial value = %d\n", a);

    // Same as: a = a + 5
    a += 5;
    printf("After += 5 = %d\n", a);

    // Same as: a = a - 3
    a -= 3;
    printf("After -= 3 = %d\n", a);

    // Same as: a = a * 2
    a *= 2;
    printf("After *= 2 = %d\n", a);

    // Same as: a = a / 2
    a /= 2;
    printf("After /= 2 = %d\n", a);

    return 0;
}