#include<stdio.h>
int main()
{
    int n,s,t,c=1;
    scanf("%d",&n);
    t=n;
    s=n*n;
    while(n!=0)
    {
        if(s%10!=n%10)
        {
            c=0;
            break;
        }
        n=n/10;
        s=s/10;
    }
    if(c==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}