#include <stdio.h>

int main()
{
    int i, j, rows;
     /* Input number of rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
         /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow right triangle */
        for(j=1; j<=i; j++)
        {
            if(i==rows || j==1 || j==i)
            {
                /*
             * Print star for last row(i==row),
             * first column(j==1) and
             * last column(j==i).
             */
                printf("*");  //print stars
            }
            else
            {
                printf(" "); //print spaces
            }
        }

        printf("\n"); // move to next line
    }

    return 0;
}
