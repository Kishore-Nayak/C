#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("Enter the Rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time : ");
    scanf("%f",&t);
    float si=(p*t*r)/100;
    printf("The simple interest is : %f\n",si);
    float Amount = p *  
                  ((pow((1 + r / 100),t)));
    float ci=Amount-p;
    printf("The compound interest is : %f\n",ci);
    
    return 0;
}