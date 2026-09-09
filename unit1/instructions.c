#include <stdio.h>

int main()
{
    int age = 25;                  // Declaration + initialization instruction

    age = age + 1;                 // Assignment/calculation instruction

    printf("Age = %d\n", age);     // Output instruction

    if (age >= 18)                 // Control instruction: checks a condition
    {
        printf("Adult\n");         // Executes if condition is true
    }
    else                            // Control instruction: alternative condition
    {
        printf("Minor\n");         // Executes if condition is false
    }

    return 0;                      // Return instruction
}