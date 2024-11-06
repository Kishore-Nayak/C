/*
    Escape Sequences in C
    ----------------------

    \n    // Newline (moves the cursor to the beginning of the next line)
    \t    // Horizontal tab (inserts a tab space)
    \b    // Backspace (moves the cursor one character back)
    \r    // Carriage return (moves the cursor to the beginning of the current line)
    \f    // Form feed (advances to the next page in printing contexts)
    \a    // Alert (produces a beep sound, if supported by hardware)
    \\    // Backslash (inserts a literal backslash)
    \'    // Single quote (inserts a single quote character)
    \"    // Double quote (inserts a double quote character)
    \?    // Question mark (inserts a question mark character)

    Special Numeric Escape Sequences:
    --------------------------------
    \0    // Null character (ASCII value 0)
    \nnn  // Octal value (where nnn is an octal number; e.g., \101 for 'A')
    \xhh  // Hexadecimal value (where hh is a hex number; e.g., \x41 for 'A')
*/


#include <stdio.h>

int main() {
    printf("Hello, World!\n");       // Newline
    printf("Tab\tSpace\n");           // Horizontal tab
    printf("Backslash: \\\n");        // Backslash
    printf("Single quote: \' \n");    // Single quote
    printf("Double quote: \" \n");    // Double quote
    printf("Alert sound\a\n");        // Alert sound (may not work on all systems)
    printf("Hexadecimal: \x41\n");    // Hexadecimal for 'A'
    printf("Octal: \101\n");          // Octal for 'A'
    return 0;
}

/*
In C, escape sequences are special character combinations that represent non-printable or special characters. They start with a backslash (\) followed by a specific character, allowing you to include non-standard or control characters in strings and character constants.
*/