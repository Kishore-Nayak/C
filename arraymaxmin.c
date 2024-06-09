#include<stdio.h>
int main()
{
    int i,j,size,sum=0,max,min;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    min=max=arr[0];
    for(j=0;j<size;j++)
    {
        if(min>arr[j])
        min=arr[j];
        if(max<arr[j]);
        max=arr[j];
    }
    avg=sum/size;
    printf("Max : %d\n",max);
    printf("Min : %d\n",min);
    printf("Sum : %d\n",sum);
    printf("Average : %f\n",avg);

    return 0;
}