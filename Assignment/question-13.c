/*
1
2 2
3 3 3 
4 4 4 4 


*/




#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number of rows : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    return 0;
}