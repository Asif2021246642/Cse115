#include<stdio.h>

int main()
{
    int arr[5];

    printf("Enter first value : ");
    scanf("%d",&arr[0]);

    printf("Enter second value : ");
    scanf("%d",&arr[1]);

    printf("Enter third value : ");
    scanf("%d",&arr[2]);

    printf("Enter fourth value : ");
    scanf("%d",&arr[3]);

    printf("Enter fifth value : ");
    scanf("%d",&arr[4]);
     
    for(int i = 4;i >= 0;i--)
    {
        printf("%d",arr[i]);
    
    }
    
    return 0;
}