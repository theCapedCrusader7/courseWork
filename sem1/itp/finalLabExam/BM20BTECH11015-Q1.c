#include <stdio.h>
#include <stdlib.h>


int main()
{
  char num[100];
  printf("Please enter a positive number :\t");
  scanf("%s",num);

  printf("The number before rotation is %s\n",num);
  char tmp=num[0];
  int numLength=0;
    
  for (unsigned i=0; num[i]!='\0';i++)
  {
    numLength++;
  }

  for (unsigned j=0;j<numLength;j++)
  {
    num[j]=num[j+1];
  }
  num[numLength-1]=tmp;
  num[numLength]='\0';
  printf("The number after rotation is %s\n",num);
     
  return 0;
}