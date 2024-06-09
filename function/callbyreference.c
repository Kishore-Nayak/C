#include<stdio.h>
int swap(int*x,int*y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter two numbers before swapping : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Numbers after swapping : %d %d",a,b);
    return 0;
}