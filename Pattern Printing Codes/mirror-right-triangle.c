#include <stdio.h>

int main()
{
    int i, j, rows;
     /* Input number of rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");  //print stars
        }
        printf("\n");
    }

    return 0;
}
