#include<stdio.h>
#include <stdbool.h>    //In C, bool is not a built-in type as it is in C++. To use bool in C, you need to include the header <stdbool.h>, which defines bool as a macro for _Bool

int main(){
    int a = 6;  //variable declaration & initialization
    printf("The value of a is : %d",a);

    float b = 5.9;
    printf("\nThe value of b is : %f",b);

    bool flag = false;
    printf("\nThe value of flag is : %d",flag);

    long long int largeNumber = 9223372036854775807;  // maximum value for signed long long int
    printf("\nThe value of largeNumber is : %lld",largeNumber);



    //size of all data types in c language
    // "%zu" format specifier is used for sizeof operator
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long: %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of bool: %zu byte\n", sizeof(bool));



    /*
    Format Specifiers for C Data Types

    Basic Data Types:
    -----------------
    char                  - printf: %c        scanf: %c        // Single character
    signed char           - printf: %hhd      scanf: %hhd      // Signed 1-byte integer
    unsigned char         - printf: %hhu      scanf: %hhu      // Unsigned 1-byte integer
    short                 - printf: %hd       scanf: %hd       // Signed short integer
    unsigned short        - printf: %hu       scanf: %hu       // Unsigned short integer
    int                   - printf: %d or %i  scanf: %d or %i  // Signed integer
    unsigned int          - printf: %u        scanf: %u        // Unsigned integer
    long                  - printf: %ld       scanf: %ld       // Signed long integer
    unsigned long         - printf: %lu       scanf: %lu       // Unsigned long integer
    long long             - printf: %lld      scanf: %lld      // Signed long long integer
    unsigned long long    - printf: %llu      scanf: %llu      // Unsigned long long integer
    float                 - printf: %f        scanf: %f        // Decimal floating-point
    double                - printf: %lf       scanf: %lf       // Double-precision floating-point
    long double           - printf: %Lf       scanf: %Lf       // Extended-precision floating-point
    void*                 - printf: %p        scanf: N/A       // Pointer address
    bool (stdbool.h)      - printf: %d or %i  scanf: %d        // Boolean (1 for true, 0 for false)

    Additional Format Specifiers:
    -----------------------------
    Hexadecimal           - printf: %x or %X                // Lowercase or uppercase hex
    Octal                 - printf: %o                      // Octal (base 8)
    Scientific Notation   - printf: %e or %E                // Scientific notation
    Exponential/Decimal   - printf: %g or %G                // Chooses between %e and %f
    Width and Precision   - printf: %.2f                    // Example for two decimal places
*/

    return 0;
}