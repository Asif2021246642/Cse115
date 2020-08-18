#include <stdio.h>

int main()
{
    int i, j, rows;
    int stars, spaces;

    printf("Enter rows to print : ");
    scanf("%d", &rows);


    stars = 1;
    spaces = rows - 1;

    for(i=1; i<rows*2; i++)  // Iterate through rows
    {
        for(j=1; j<=spaces; j++)  //Print spaces
            printf(" ");
        for(j=1; j<stars*2; j++)   //Print stars
            printf("*");
        printf("\n"); //Go to next line

        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}
