#include<stdio.h>

int main()
{
    int i, j, N, columns;
    printf("Enter number of columns: ");  //Input number of columns from user
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*");
        }

        if(i < N)
        {
            columns++;  //Increment number of columns per row for upper part
        }
        else
        {
            columns--;  //Decrement number of columns per row for lower part
        }
        printf("\n"); //move to the next line
    }

    return 0;
}
