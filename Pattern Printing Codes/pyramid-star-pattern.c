#include <stdio.h>

int main()
{
    int i, j, rows;
     /* Input rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)  // trailing (2*rownumber-1)
        {
            printf("*"); //print stars
        }
        printf("\n");
    }

    return 0;
}
