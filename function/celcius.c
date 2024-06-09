#include<stdio.h>
float celcius(float c)
{
    float far=(c*9/5)+32;
    return far;
}
int main()
{
    float c;
    printf("Enter the temperature in degree celcius : ");
    scanf("%f",&c);
    printf("The temperature in degree farenhit is %f.",celcius(c));
    return 0;
}