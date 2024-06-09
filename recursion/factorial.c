#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    int factNm1=factorial(n-1);
    int factN=factNm1*n;
    return factN;
}

int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("The factorial of %d is %d.",x,factorial(x));
    return 0;
}