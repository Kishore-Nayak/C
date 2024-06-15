#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    printf("Enter the base : ");
    scanf("%d",&x);
    printf("Enter the exponent : ");
    scanf("%d",&y);
    int result=pow(x,y);
    printf("The result is %d.",result);
    
    return 0;
}