#include<stdio.h>

int main()
{
    int x,y,sum,sub,mul,div;
    char op;

    printf("Enter first number: ");
    scanf("%d",&x);

    printf("Enter secound number: ");
    scanf("%d",&y);

    printf("Enter operator: ");
    scanf(" %c",&op);

    switch (op)
    {
        case '+': 
            sum = x + y;
            printf("Result : %d",sum);   
        break;

        case '-': 
            sub = x - y;
            printf("Result : %d",sub);   
        break;

        case '*': 
            mul = x * y;
            printf("Result : %d",mul);   
        break;

        case '/': 
            div = x / y;
            printf("Result : %d",div);   
        break;
        
    
        default:
            printf("Use right operator");
    }


    return 0;
}