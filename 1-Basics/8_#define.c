/*
In C, #define is a preprocessor directive used to create macros, which are symbolic constants or expressions that can replace code snippets or values throughout the code. It is often used to improve readability, maintain consistency, and simplify updates to constant values.

#define NAME value
NAME: The identifier you are defining.
value: The value or expression to substitute wherever NAME appears in the code.
*/



/*
Important Points

No Type Checking: Macros are simple text replacements, so they don’t have type checking.

No Semicolon: Macros usually don’t end with a semicolon (;). The semicolon is added in the code where the macro is used.

Parentheses for Safety: Wrap macro arguments and expressions in parentheses to prevent unexpected behavior due to operator precedence.
*/

#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define int long long

int main() {
    printf("PI: %f\n", PI);
    printf("Square of 5: %d\n", SQUARE(5));
    printf("%zu",sizeof(int));
    return 0;
}
