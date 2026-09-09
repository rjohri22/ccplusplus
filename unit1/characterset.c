#include <stdio.h>              // # → Preprocessor symbol, < > → special symbols

int main()                      // ( ) → special symbols
{
    int age = 25;               // Letters → int, age | Digits → 25 | = and ; → special symbols

    char grade = 'A';           // Letters → char, grade | 'A' → character constant

    printf("Age = %d\n", age);  // Letters, " " → string symbols, % → format symbol, \n → escape sequence

    printf("Grade = %c\n", grade); // %c → character format specifier, \n → escape sequence

    return 0;                   // Letters → return | Digit → 0 | ; → special symbol
}