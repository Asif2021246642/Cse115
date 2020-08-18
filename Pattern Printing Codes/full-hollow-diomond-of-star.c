#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)  // print the upper half of the pattern
    {
        for(j=i; j<=n; j++)
        {
            printf("*");   //print stars
        }

        for(j=1; j<=(2*i-2); j++) //print trailing ((2*rownumber-2) spaces
        {
            printf(" ");  //print space
        }

        for(j=i; j<=n; j++)
        {
            printf("*");  //print stars
        }

        printf("\n");
    }


    for(i=1; i<=n; i++)  // print the lower half of the pattern
    {
        for(j=1; j<=i; j++)
        {
            printf("*"); //print stars
        }

        for(j=(2*i-2); j<(2*n-2); j++)  //print trailing ((2*rownumber-2) spaces
        {
            printf(" ");  //print space
        }

        for(j=1; j<=i; j++)
        {
            printf("*");  //print stars
        }

        printf("\n");
    }

    return 0;
}
