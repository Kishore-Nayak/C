#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0)
    {
        count++;
        temp=temp/10;
    }
    printf("No of digits of %d is %d.",n,count);
    return 0;
}