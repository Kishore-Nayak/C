#include<stdio.h>
//declaration
void printHello();
void printGoodbye();

int main()
{
    printHello(); //function call
    printGoodbye();
    return 0;
}

//function definition
void printHello()
{
    printf("Hello World\n");
}

void printGoodbye()
{
    printf("Goodbye\n");
}