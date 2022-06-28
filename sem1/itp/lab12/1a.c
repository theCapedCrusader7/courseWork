#include<stdio.h>
#include<stdlib.h>
struct vector
{
    double *v;
    unsigned int d;
};
typedef struct vector vector;
int main()
{
    vector v;
    printf("Please enter the number of dimensions: \t");
    scanf("%d",&v.d);
    v.v=(double*)calloc(v.d,sizeof(double));
    for (int i = 0; i < v.d; i++)
    {
        printf("Please enter the value component of vector along dimension%d: \t",i+1);
        scanf("%lf",&v.v[i]);
    }
    printf("\nVector=\t");
    for (int i = 0; i < v.d; i++)
    {
        printf("%lf  ",v.v[i]);
    }
    return 0;
}
