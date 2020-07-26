#include<stdio.h>

int main()
{
    float num1,num2,num3,num4,num5,avrg;

    printf("Enter Five Numbers : ");
    scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);

    avrg = (num1 + num2 + num3 + num4 + num5)/5;

    printf("Average is : %.2f",avrg);

    return 0;

}

