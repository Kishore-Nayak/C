/*
  *
 * *
* * *
*/






#include<stdio.h>
int main()
{
    int row,col,space,x;
    printf("Enter the number of rows : ");
    scanf("%d",&x);
    for(row=1;row<=x;row++)
    {
        for(space=1;space<=(x-row);space++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}