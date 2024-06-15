#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        int reminder=temp%10;
        sum=sum+reminder;
        temp=temp/10;
    }
    printf("The sum of digits of %d is %d.",n,sum);
    return 0;
}