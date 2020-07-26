#include<stdio.h>
#include<math.h>

int main()
{
    int radius;
    float area,perimeter;
    printf("Enter the radius : ");
    scanf("%d",&radius);
    
    area = 3.14 * pow(radius,2);
    printf("Area of the circle : %.2f \n",area);

    perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the circle : %.2f",perimeter);

    return 0;
}