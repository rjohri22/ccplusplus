#include <stdio.h>

int main()                 // int → Keyword, main → Identifier
{
    int age = 25;          // int → Keyword
                            // age → Identifier
                            // = → Operator
                            // 25 → Constant
                            // ; → Symbol

    printf("Age = %d\n", age);
                            // printf → Identifier (Function name)
                            // ( → Symbol
                            // "Age = %d\n" → String Literal
                            // , → Symbol
                            // age → Identifier
                            // ) → Symbol
                            // ; → Symbol

    return 0;              // return → Keyword
                            // 0 → Constant
                            // ; → Symbol
}