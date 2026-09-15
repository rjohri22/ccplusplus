#include <stdio.h>       // Header file is included
#define PI 3.14          // Macro is replaced by its value

int main()
{
    // This comment is removed during preprocessing
    printf("Hello");

    printf(PI);
    
    return 0;
}