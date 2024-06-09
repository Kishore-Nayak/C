#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        sum=sum+i;
    }
    printf("The sum of  first %d natural numbers is %d.",x,sum);
    return 0;
}