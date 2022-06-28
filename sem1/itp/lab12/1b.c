
#include<stdio.h>
#include<stdlib.h>
struct vector
{
    double *v;
    unsigned int d;
};
typedef struct vector vector;
void initializeVector(vector *v,double a)
{
    printf("Please enter the number of dimensions: \t");
    scanf("%d",&v->d);
    v->v=(double*)calloc(v->d,sizeof(double));
    for (int i = 0; i < v->d; i++)
    {
        printf("Please enter the value component of vector along dimension%d: \t",i+1);
        scanf("%lf",&v->v[i]);
    }
}
int main()
{
    vector v;
    double a;
    printf("Please enter the number of vectors: \t");
    scanf("%lf",&a);
    initializeVector(&v,a);
    return 0;
}