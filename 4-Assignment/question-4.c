#include<stdio.h>
int main()
{
    int first,last,temp;
    printf("Enter the first number : ");
    scanf("%d",&first);
    printf("Enter the last number : ");
    scanf("%d",&last);
    for(int i=first; i<=last;i++)
    {
        temp=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0){
            temp=temp+1;
            break;
            }
        }
        if(temp==0)
            {
                printf("%d is a prime number.\n",i);
            }
    }
    return 0;
}