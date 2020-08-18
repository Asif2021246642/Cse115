#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");  //Input number of rows from user
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)  //terate through rows
    {
        for(j=i; j<=rows; j++)  //Iterate through columns
        {
            /*
             * Print stars for first row(i==1),
             * first column(j==1) and
             * last column(j=rows) */

            if(i==1 || j==i || j==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); //move to next line
    }

    return 0;
}
