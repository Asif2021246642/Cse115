#include<stdio.h>

int main()

{
    int a,b,choice,add,sub;

    printf("Enter A: ");
    scanf("%d",&a);

    printf("Enter B: ");
    scanf("%d",&b);

    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch (choice)
    { 
        case 1:
            add = a + b;
            printf("Result : %d",add);
            break;
        case 2:
            sub = a - b;
            printf("Result : %d",sub);
            break;
        default:
            printf("Error");
         
    }

    return 0;


}