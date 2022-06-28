#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1;
    FILE *f2;
    char c;
    char file_1[50];
    char file_2[50];
    printf("Please enter the name of file 1:\n");
    scanf("%s",file_1);
    printf("Please enter the name of file 2:\n");
    scanf("%s",file_2);
    f1=fopen(file_1,"a");
    f2=fopen(file_2,"r");
    if (f1==NULL)
    {
        printf("\n Open Error");
        return 1;
    }
    if (f2==NULL)
    {
        printf("\n Open Error");
        return 1;
    }
    do
    {
        c=fgetc(f2);
        fprintf(f1,"%c",c);
    } while (!feof(f2));
    
    printf("success");
    return 0;
}
