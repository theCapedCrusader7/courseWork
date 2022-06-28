#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int top=-1;
double stack[500];

int empty(double s[])
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
int full()
{
    if(top>=499)
    {
      return 1;
    }
    return 0;
}


void push (double s[], double val)
{
  if(full())
  {
    printf("Stack is full ");
  }
  else
  {
    top++;
    s[top]=val;
  }
}


double pop(double s[])
  {
    if(empty(s))
    {
      printf("Stack is empty ");
      return -1;
    }
    double val=s[top];
    top--;
    return val;
  }


void postfix(char p[])
{
  char ch,arr[50];
  double val,a,b;
  int j=0;

  for(int i=0;i<strlen(p);i++)
  {
      ch=p[i];
  
    if(ch==',')
    {
      if(j!=0){
      char num[j];
      for(int i=0;i<j;i++)
        num[i]=arr[i];
      push(stack,atoi(num));
      j=0; 
      }
    }
    else if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/'))
    {
      switch (ch) 
            {
            case '*':
              {
                a=pop(stack);
                b=pop(stack);
                val = b * a;
                push(stack,val);
                break;
              }

            case '/':
              {
                a=pop(stack);
                b=pop(stack);
                val = b / a;
                push(stack,val); 
                break;
              }

            case '+':
               {
                a=pop(stack);
                b=pop(stack);
                val = b + a;
                push(stack,val);
                break;
               }

            case '-':
                if(p[i+1]==','||(i+1)==strlen(p))
                {
                    a=pop(stack);
                    b=pop(stack);
                    val = b - a;
                    push(stack,val);
                }
                else{
                  arr[j]=ch;
                  j++; 
                } 
                break;
            }
  
    }
    else if(i==strlen(p)-1)
    {
      if(j!=0){
        arr[j]=ch;
        j++;
        char num[j];
        for(int i=0;i<j;i++)
          num[i]=arr[i];
        push(stack,atoi(num));
        j=0; 
      }
      else{
        push(stack,(int)(p[i]-'0'));
      }
    }
    else
    {
      arr[j]=ch;
      j++;
    }
 
}
}


int main()
{

   char p[500];
    printf("Please enter the postfix expression:\t");
    scanf("%s",p);
   
   postfix(p);
   if(top==0)
    {
      double k=pop(stack);
      printf("Value of the postfix expression is %lf",k);
    }
   else
      printf("The entered expression is not a postfix expression");
           
           
  return 0; 

}