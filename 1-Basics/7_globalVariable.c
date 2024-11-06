//In C, global variables are variables that are declared outside of any function, typically at the beginning of the program file, and they have global scope. This means they can be accessed by any function within the same file after their declaration.

#include <stdio.h>

int globalVar = 10;  // Global variable

void display() {
    printf("Value of globalVar in display(): %d\n", globalVar);
}

int main() {
    printf("Value of globalVar in main(): %d\n", globalVar);
    globalVar = 20;  // Modify global variable
    display();
    return 0;
}

/*
Key Points about Global Variables:

Scope: Global variables have file scope, meaning they are accessible to all functions in the file where they are declared.

Lifetime: They exist for the entire duration of the program's execution.

Storage Class: By default, global variables have the extern storage class, meaning they are stored in a fixed memory location.

Initialization: If not explicitly initialized, global variables are automatically initialized to zero (or NULL for pointers).
*/



/*
Tips and Best Practices

Minimize Use: Avoid using too many global variables as they can make the code harder to read, debug, and maintain.

Naming Conventions: Use a naming convention for global variables (e.g., prefix with g_ or use all caps) to distinguish them from local variables.

Use extern for Access Across Files: If you need to access a global variable from multiple files, declare it as extern in the files that need access.
*/