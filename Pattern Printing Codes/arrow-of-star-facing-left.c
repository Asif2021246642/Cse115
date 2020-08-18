#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : ");   // Input number of rows from user
    scanf("%d", &n);
    for(i=1; i<n; i++)  // Print upper part of the arrow
    {
        for(j=1; j<=(n-i); j++)  //Print trailing (n-rownumber) spaces
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)  // Print inverted right triangle
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=1; i<=n; i++)  // Print bottom part of the arrow
    {
        for(j=1; j<i; j++)  // Print trailing (rownumber-1) spaces
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)  // Print the right triangle
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
