#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x=n,count=0;
    if(n==1)
    {
        printf("%d is neither prime nor composite.",n);
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0){
        count=count+1;
        break;
        }
    }
    if(count==0 &&n!=1)
    {
        printf("%d is a prime number.",n);
    }
    if(count==1)
    {
        printf("%d is not a prime number",n);
    }

    return 0;
}