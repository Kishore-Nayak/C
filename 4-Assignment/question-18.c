#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number of terms : ");
    scanf("%d",&x);
    printf("1 + ");
    for(int i=2;i<=x-1;i++)
    {
        printf("1 / %d + ",i);
    }
    
    printf("1/%d",x);
    return 0;
}