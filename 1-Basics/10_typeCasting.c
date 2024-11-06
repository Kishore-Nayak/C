/*
Type casting in C refers to converting a variable from one data type to another. This can be done in two main ways: implicit casting (or automatic type conversion) and explicit casting.

1. Implicit Casting
This occurs when the compiler automatically converts one data type to another. For example, if you assign an int to a float, the int is automatically converted to float:
int a = 5;
float b = a; // Implicit casting from int to float

2. Explicit Casting
This is done using a cast operator and is necessary when converting data types that might lead to loss of data or when mixing different types in an expression.
float c = 5.5;
int d = (int)c; // Explicit casting from float to int, which truncates the decimal
*/

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.0;
    
    // Implicit casting
    float result1 = a / b; // a is implicitly converted to float
    printf("Implicit casting result: %f\n", result1);

    // Explicit casting
    float c = 5.7;
    int result2 = (int)c; // c is explicitly cast to int
    printf("Explicit casting result: %d\n", result2);
    
    return 0;
}


/*
Common Use Cases

Converting between numeric types: When performing arithmetic operations with different types.

Casting pointers: When working with pointers, especially in dynamic memory allocation or handling data structures.
*/

/*
Key Points

Be cautious of data loss when casting from a larger type to a smaller type (e.g., float to int).

Always ensure that the casting is meaningful in the context of your program to avoid logical errors.
*/
