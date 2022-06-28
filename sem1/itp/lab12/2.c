#include<stdio.h>
#include<stdlib.h>
int main()
{
    double **matrix;
    int m,n;
    printf ("Please enter the number of rows: \t");
    scanf("%d",&m);
    printf ("Please enter the number of columns:\t ");
    scanf("%d",&n);
    matrix=(double **)calloc(m,n*sizeof(double));
    for (int i = 0; i < m; i++)
    {
        matrix[i]=(double *)calloc(n,sizeof(double));
    }
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Please enter the value:\t ");
            scanf("%lf",&matrix[i][j]);
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf  ",matrix[i][j]);
        }
        printf("\n");
    }
}