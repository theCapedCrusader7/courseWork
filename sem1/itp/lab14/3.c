#include<stdio.h>
#include<string.h>
#include<math.h>
float value(float x,float *f,int q)
{
    float a=0;
    for (int i = 0; i <= q; i++)
    {
        a=a+f[i]*pow(x,i);
    }
    return a;
}
int main()
{
    float f[10];
    float l,h;
    float d;
    int q;
    float fl,fh;
    float root; 
    float b;
    float acc;
    printf("please enter the degree of the polynomial:\n");
    scanf("%d",&q);
    for (int i = 0; i <= q; i++)
    {
        printf("Please enter the value of a%d:\n",i);
        scanf("%f",&f[i]);
    }
    printf("Please enter the accuraracy of the root:\n");
    scanf("%f",&acc);
    printf("Please enter the value of lower limit of the interval:\n");
    scanf("%f",&l);
    printf("Please enter the value of upper limt of the interval:\n");
    scanf("%f",&h);
    
    
    do
    {
        b=h-l;
        root=(l+h)/2;
        d=value( (l+h)/2 , f,q );
        fl=value(l,f,q);
        fh=value(h,f,q);
        if (d==0)
        {
            root=(l+h)/2;
            break;
        }
        else if (fl==0)
        {
            root=l;
            break;
        }
        else if (fh==0)
        {
            root=h;
            break;
        }
        else if (d*fl<0)
        {
            h=(l+h)/2;
        }
        else if (d*fh<0)
        {
            l=(l+h)/2;
        }
        else
        {
            printf("error.\n");
        }
    } while (b>acc);

    printf("%f",root);
    
    return 0;
}