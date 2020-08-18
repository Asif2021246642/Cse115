#include <stdio.h>

int main()
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");  //print spaces
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */
                printf("*");  //print stars
            }
            else
            {
                printf(" ");  //print spaces
            }
        }
        printf("\n");  //move to next line
    }

    return 0;
}
