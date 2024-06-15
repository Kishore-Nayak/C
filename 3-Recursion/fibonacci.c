#include<stdio.h>
int fibo(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    int fibNm1=fibo(n-1);
    int fibNm2=fibo(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
}
int main()
{
    int x;
    printf("Enter the number of sequence : ");
    scanf("%d",&x);
    printf("The fibonacci series of %dth term is %d",x,fibo(x));
    return 0;

}