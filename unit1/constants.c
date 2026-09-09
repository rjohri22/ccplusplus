#include <stdio.h>

#define PI 3.14                  // PI is a named constant using #define

int main()
{
    const int AGE = 25;          // AGE is a constant using const

    int marks = 85;              // 85 → Integer constant
    float radius = 5.0;          // 5.0 → Floating-point constant
    char grade = 'A';            // 'A' → Character constant

    printf("Age = %d\n", AGE);
    // "Age = %d\n" → String literal
    // AGE → Named constant

    printf("Marks = %d\n", marks);
    // 85 was assigned to marks → Integer constant

    printf("Grade = %c\n", grade);
    // 'A' was assigned to grade → Character constant

    printf("PI = %.2f\n", PI);
    // PI → Named constant defined using #define
    // 3.14 → Floating-point constant

    return 0;                    // 0 → Integer constant
}