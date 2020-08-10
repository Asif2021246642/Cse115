#include<stdio.h>
int main()

{
    int id,hour;
    float wages,salary;

    printf("Enter Employee ID : ");
    scanf("%d",&id);

    printf("Daily Worked Hours : ");
    scanf("%d",&hour);

    printf("Per Hour wages : ");
    scanf("%f",&wages);
    
    salary = (30 * hour * wages);
    
    printf("ID NUMBER : %d \n",id);
    printf("SALARY = BDT.%.2f",salary);

    return 0;

}