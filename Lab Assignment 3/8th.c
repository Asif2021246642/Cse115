#include<stdio.h>

int main()
{
    int sum, a[100][100], b[100][100] ,c[100][100];
    int rowa, rowb, columna, columnb;

    printf("Number of rows in A: ");
    scanf("%d",&rowa);
    printf("Number of columns in A: ");
    scanf("%d",&columna);
    printf("Number of rows in B: ");
    scanf("%d",&rowb);
    printf("Number of columns in B: ");
    scanf("%d",&columnb);

    if(columna != rowb)
    {
        printf("Invalid matrix dimensions\n");
        return 0;
    }

    for(int i=0;i<rowa;i++){
        for(int j=0;j<columna;j++)
        {
            printf("A[%d][%d]: ",i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<rowb;i++)
    {
        for(int j=0;j<columnb;j++)
        {
            printf("B[%d][%d]: ",i, j);
            scanf("%d",&b[i][j]);
        }
    }

    for (int r = 0; r < rowa; r++)
    {
        for (int i = 0; i < columnb; i++)
        {
            sum = 0;
            for (int j = 0; j < columna; j++)
            {
                sum = sum + a[r][j] * b[j][i];
            }
            c[r][i] = sum;
        }
    }
    printf("\n");

    for (int i = 0; i < rowa;i++)
    {
        for (int j = 0; j < columnb;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
