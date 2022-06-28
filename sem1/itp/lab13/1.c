#include<stdio.h>

int main()
{
 char s[90];
 FILE *f;
 f=fopen("1000CommonWords.txt","r");
 
 if (f==NULL)   
 { 
    printf("Error\n");
    return 1;    
 }
 
 while(!feof(f))
 {
    fscanf(f,"%s",s);
    if((s[7]=='\0')&&(s[6]!='\0')&&(s[5]!='\0')&&(s[4]!='\0')&&(s[3]!='\0')&&(s[2]!='\0')&&(s[1]!='\0'))
    {
        printf("%s\n",s);
    }
  
 }
 return 0;
}
