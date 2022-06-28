#include <stdio.h>
#include<stdlib.h>

struct vector
{
  void *v;
  unsigned int d;
};

enum BasicDataType{Char,Int,Float,Double};
unsigned memoryAssign(struct vector vtr,unsigned int d,enum BasicDataType t)
{
if (t==Char)
{
  unsigned int i;  
vtr.v=(char*)malloc(d*sizeof(struct vector));
printf("Enter the vector v of %i dimensions\n",d);
  for(i=0;i<d;i++)
  {
    printf("Enter v[%u]: ",i+1);
    scanf("%s",&((char*)vtr.v)[i]);
  }
}

else if (t==Int)
{
  unsigned int i;  
vtr.v=(int*)malloc(d*sizeof(struct vector));
printf("Enter the vector v of %i dimensions\n",d);
  for(i=0;i<d;i++)
  {
    printf("Enter v[%u]:\t ",i+1);
    scanf("%d",&((int*)vtr.v)[i]);
  }
}
else if (t==Float)
{
  unsigned int i;  
vtr.v=(float*)malloc(d*sizeof(struct vector));
printf("Enter the vector v of %i dimensions\n",d);
  for(i=0;i<d;i++)
  {
    printf("Enter v[%u]: \t",i+1);
    scanf("%f",&((float*)vtr.v)[i]);
  }
}
else if (t==Double)
{
  unsigned int i;  
vtr.v=(double*)malloc(d*sizeof(struct vector));
printf("Enter the vector v of %i dimensions\n",d);
  for(i=0;i<d;i++)
  {
    printf("Enter v[%u]: \t",i+1);
    scanf("%lf",&((double*)vtr.v)[i]);
  }
}

return EXIT_SUCCESS;
}
int main()
{
  struct vector vtr;
  unsigned int d;
  enum BasicDataType t;
  printf("Enter the value of d: ");
  scanf("%u",&d);
  memoryAssign(vtr,d,0);
  return 0;
}