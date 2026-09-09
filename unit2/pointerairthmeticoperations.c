#include <stdio.h>
#include <stddef.h>   // for ptrdiff_t

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // --------------------------------------------------
    // 1. Creating pointers to array elements
    // --------------------------------------------------

    int *p1 = &arr[0];   // p1 points to first element
    int *p2 = &arr[3];   // p2 points to fourth element

    printf("===== POINTER BASICS =====\n");

    // Printing the address stored in the pointer
    printf("Address stored in p1 = %p\n", (void *)p1);
    printf("Address stored in p2 = %p\n", (void *)p2);

    // * is the dereference operator.
    // It gives the value stored at the address.
    printf("Value pointed by p1 = %d\n", *p1);
    printf("Value pointed by p2 = %d\n", *p2);


    // --------------------------------------------------
    // 2. Pointer assignment
    // --------------------------------------------------

    printf("\n===== POINTER ASSIGNMENT =====\n");

    p1 = p2;

    // Now p1 and p2 point to the same element
    printf("Value pointed by p1 = %d\n", *p1);
    printf("Value pointed by p2 = %d\n", *p2);


    // Put p1 back to first element
    p1 = &arr[0];


    // --------------------------------------------------
    // 3. Pointer + integer
    // --------------------------------------------------

    printf("\n===== POINTER + INTEGER =====\n");

    // p1 currently points to arr[0].
    // p1 + 2 points to arr[2].
    printf("Value at p1     = %d\n", *p1);
    printf("Value at p1 + 2 = %d\n", *(p1 + 2));


    // --------------------------------------------------
    // 4. Pointer - integer
    // --------------------------------------------------

    printf("\n===== POINTER - INTEGER =====\n");

    // p1 - 1 would move one element backward.
    // But p1 is already at the first element,
    // so moving backward would be invalid.
    
    // Instead, move p1 to arr[3].
    p1 = &arr[3];

    printf("Value at p1     = %d\n", *p1);
    printf("Value at p1 - 2 = %d\n", *(p1 - 2));


    // --------------------------------------------------
    // 5. Incrementing a pointer
    // --------------------------------------------------

    printf("\n===== POINTER INCREMENT =====\n");

    p1 = &arr[0];

    printf("Before p1++ : %d\n", *p1);

    // p1++ moves the pointer to the next array element.
    p1++;

    printf("After p1++  : %d\n", *p1);


    // --------------------------------------------------
    // 6. Decrementing a pointer
    // --------------------------------------------------

    printf("\n===== POINTER DECREMENT =====\n");

    printf("Before p1-- : %d\n", *p1);

    // p1-- moves the pointer one element backward.
    p1--;

    printf("After p1--  : %d\n", *p1);


    // --------------------------------------------------
    // 7. Pointer subtraction
    // --------------------------------------------------

    printf("\n===== POINTER SUBTRACTION =====\n");

    p1 = &arr[0];
    p2 = &arr[3];

    // p2 - p1 gives the number of array elements
    // between p1 and p2.
    //
    // p2 -> arr[3]
    // p1 -> arr[0]
    //
    // 3 - 0 = 3

    ptrdiff_t difference = p1 - p2;

    printf("p1- p2 = %td\n", difference);


    // --------------------------------------------------
    // 8. Pointer comparison ==
    // --------------------------------------------------

    printf("\n===== POINTER == =====\n");

    p1 = &arr[0];
    p2 = &arr[0];

    if (p1 == p2)
    {
        printf("p1 and p2 point to the same element\n");
    }
    else
    {
        printf("p1 and p2 point to different elements\n");
    }


    // --------------------------------------------------
    // 9. Pointer comparison !=
    // --------------------------------------------------

    printf("\n===== POINTER != =====\n");

    p1 = &arr[0];
    p2 = &arr[3];

    if (p1 != p2)
    {
        printf("p1 and p2 point to different elements\n");
    }
    else
    {
        printf("p1 and p2 point to the same element\n");
    }


    // --------------------------------------------------
    // 10. Pointer comparison <
    // --------------------------------------------------

    printf("\n===== POINTER < =====\n");

    p1 = &arr[1];
    p2 = &arr[3];

    // Both pointers point into the SAME ARRAY.
    //
    // p1 -> arr[1]
    // p2 -> arr[3]
    //
    // Therefore p1 < p2 is valid.

    if (p1 < p2)
    {
        printf("p1 comes before p2 in the array\n");
    }
    else
    {
        printf("p1 does not come before p2\n");
    }


    // --------------------------------------------------
    // 11. Pointer comparison >
    // --------------------------------------------------

    printf("\n===== POINTER > =====\n");

    if (p2 > p1)
    {
        printf("p2 comes after p1 in the array\n");
    }
    else
    {
        printf("p2 does not come after p1\n");
    }


    // --------------------------------------------------
    // 12. Pointer <=
    // --------------------------------------------------

    printf("\n===== POINTER <= =====\n");

    if (p1 <= p2)
    {
        printf("p1 comes before or is equal to p2\n");
    }


    // --------------------------------------------------
    // 13. Pointer >=
    // --------------------------------------------------

    printf("\n===== POINTER >= =====\n");

    if (p2 >= p1)
    {
        printf("p2 comes after or is equal to p1\n");
    }


    // --------------------------------------------------
    // 14. Pointer and array relationship
    // --------------------------------------------------

    printf("\n===== POINTER AND ARRAY =====\n");

    p1 = arr;

    // Array name arr represents the address of arr[0]
    // in most expressions.

    printf("arr[0]      = %d\n", arr[0]);
    printf("*p1        = %d\n", *p1);

    // These two are equivalent:
    printf("arr[2]      = %d\n", arr[2]);
    printf("*(arr + 2)  = %d\n", *(arr + 2));


    // --------------------------------------------------
    // 15. Changing array values using pointer
    // --------------------------------------------------

    printf("\n===== MODIFYING ARRAY USING POINTER =====\n");

    p1 = &arr[2];

    printf("Before change: %d\n", *p1);

    // Change the value of arr[2] through the pointer
    *p1 = 100;

    printf("After change : %d\n", *p1);
    printf("arr[2]       : %d\n", arr[2]);


    // --------------------------------------------------
    // 16. Pointer + pointer is NOT allowed
    // --------------------------------------------------

    printf("\n===== POINTER + POINTER =====\n");

    printf("p1 + p2 is NOT a valid pointer operation.\n");
    printf("Pointer + integer is valid, but pointer + pointer is not.\n");


    return 0;
}