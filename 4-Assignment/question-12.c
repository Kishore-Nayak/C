#include<stdio.h>
int printpascal(int x)
{
    int row,col,space,n;
    for(row=0;row<x;row++)
    {
        for(space=0;space<(x-row);space++)
        {
            printf(" ");
        }
        n=1;
        for(col=1;col<=row+1;col++)
        {
            printf(" %d",n);
            n=n*(row-col+1)/(col);
        }
        printf("\n");
    }
}
int main()
{
    int x;
    printf("Enter the number of rows : ");
    scanf("%d",&x);
    printpascal(x);
    return 0;
}