#include<stdio.h>

int main()

{
    int num;

    printf("Enter a number: ");

    scanf("%d",&num);

    if(num % 7 ==0){

        printf("%d is a multiple of 7",num);
    }

    else{
        printf("%d is not a multiple of 7",num);
    }

    return 0;

}
