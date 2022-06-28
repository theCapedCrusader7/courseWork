#include<stdio.h>
#include<stdlib.h>
struct element_t
{
  unsigned z;
  char symbol[30];
  char name[30];
  double A_mass;
};
typedef struct element_t element;
int main()
{
  element E[1000];
  int i,n;
  FILE *ptr;
  ptr=fopen("chemicalElements.txt","r");
  if (ptr==NULL)
  {
    printf("\n Open Error\n");
    return 1;
  }
  for (i=0;i<=112;i++)
  {
    fscanf(ptr,"%u %s %s %lf",&E[i].z,E[i].symbol,E[i].name,&E[i].A_mass);
  }
  printf("Enter the atomic number :\t");
  scanf("%d",&n);
  printf("%u %s %s %lf",E[n-1].z,E[n-1].symbol,E[n-1].name,E[n-1].A_mass);
  return 0;
  }