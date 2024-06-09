#include<stdio.h>
int main()
{
    int n,reminder,result=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    
    while(temp!=0)
    {
        reminder=temp%10;
        result=result+(reminder*reminder*reminder);
        temp=temp/10;
    }
    if(n==result){
        printf("%d is an armstrong number.",n);
    }
    else{
        printf("%d is not an armstrong number.",n);
    }

    return 0;
}