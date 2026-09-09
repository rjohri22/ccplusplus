#include <stdio.h>

int main()
{
    int age;

    // 'age' is an lvalue because it represents
    // a storage location.
    // 25 is the value being assigned.
    age = 25;

    printf("Age = %d\n", age);

    return 0;
}