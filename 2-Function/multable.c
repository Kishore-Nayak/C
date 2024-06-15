#include<stdio.h>
int multable(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    multable(n);     //argument or actual parameter
    
    return 0;
}

int multable(int x)    //parameter or formal parameter
{
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",x,i,x*i);
    }
}