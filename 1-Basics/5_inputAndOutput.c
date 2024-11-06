/*
Both printf and scanf are library functions
These functions are available in stdio.h header file
stdio.h -> standard input output header file
*/


#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];

    // Input
    printf("Enter your name: ");
    scanf("%49s", name);                      // Read a string (up to 49 characters)

    printf("Enter your age: ");
    scanf("%d", &age);                       // Input integer

    printf("Enter your height: ");
    scanf("%f", &height);                    // Input float

    // Output
    printf("Hello, %s!\n", name);
    printf("You are %d years old and %.2f feet tall.\n", age, height);

    return 0;
}
