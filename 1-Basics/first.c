#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    (x>5)? printf("Greater than 5."): (x=5)? printf("Equal to 5."): printf("Less than 5.");
    return 0;
}