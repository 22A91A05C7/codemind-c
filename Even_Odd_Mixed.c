#include<stdio.h>
int main()
{
    int n,r,rem,ec=0,oc=0,c=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        n=n/10;
    }
    while(t!=0)
    {
        rem=t%10;
        if(rem%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
        t=t/10;
    }
    if(ec==c)
    {
        printf("Even");
    }
    else if(oc==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}