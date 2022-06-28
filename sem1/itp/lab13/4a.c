#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int IsHeterogram(char *s)
{
    int l=strlen(s);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l; j++)
        {
            if (i!=j)
            {
                if (s[i]==s[j])
                {
                    printf("The word  entered is not a heterogram.");
                    return 0;
                }
                else
                {
                    continue;
                }
                
            }
            if( ( i==(l-1) ) && ( j== (l-1) ) )
            {
                printf("The word  entered is a heterogram.");
            }
            else
            {
                continue;
            }
        }
    }
}

int main()
{
    char s[100];
    printf("Please enter the word: \t");
    scanf("%s",&s);
    IsHeterogram(s);
    return 0;
}