#include<stdio.h>
int main()
{
    int u;
    float b,s,tb,c;
    scanf("%d",&u);
    if(u<200)
    {
        b=1.20;
    }
    else if(u>=200&&u<400)
    {
        b=1.40;
    }
    else if(u>=400&&u<600)
    {
        b=1.60;
    }
    else if(u>=600&&u<800)
    {
        b=1.80;
    }
    else if(u>=800)
    {
        b=2.00;
    }
    c=u*b;
    if(c>400)
    {
        s=0.15*c;
    }
    tb=c+s;
    {
        printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,b,c,s,tb);
    }
}