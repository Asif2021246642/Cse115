#include <stdio.h>

int main()
{
    int i, j, N;
   /* Input rows from user */
    printf("Enter number of rows: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        {
        for(j=1; j<=N; j++)
        {
            printf("*"); //print stars
        }
        printf("\n"); //move to next line
    }

    return 0;
}
