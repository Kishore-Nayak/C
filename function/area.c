#include<stdio.h>
#include<math.h>
float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float length,float width);
int main()
{
    float side,radius,length,width;
    printf("Enter the side of the square : ");
    scanf("%f",&side);
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    printf("Enter the length of the rectangle : ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle : ");
    scanf("%f",&width);
    float x=squarearea(side);
    printf("Area of the square is : %f\n",x);
    float y=circlearea(radius);
    printf("Area of the circle is : %f\n",y);
    float z=rectanglearea(length,width);
    printf("Area of the rectangle is : %f\n",z);
    return 0;
}

float squarearea(float side)
{
    return side*side;
}
float circlearea(float radius)
{
    return 3.1415*radius*radius;
}
float rectanglearea(float length,float width)
{
    return length*width;
}