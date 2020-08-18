#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : ");   // Input number of rows from user
    scanf("%d", &n);
    for(i=1; i<n; i++)   // Print the upper part of the arrow
    {
        for(j=1; j<=(2*i-2); j++)   // Print trailing (2*rownumber-2) spaces
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)  // Print inverted right triangle star pattern
        {
            printf("*");
        }

        printf("\n");
    }


    for(i=1; i<=n; i++)  // Print lower part of the arrow
    {
        for(j=1; j<=(2*n - 2*i); j++)  // Print trailing (2*n - 2*rownumber) spaces
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)  // Print simple right triangle star pattern
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
