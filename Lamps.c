#include<stdio.h>
int main()
{
    int n,k,x,y,e;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k)
    {
        printf("%d",k*x);
    }
    else if(x>y)
    {
        e=(k*x)+((n-k)*y);
        printf("%d",e);
    }
    else
    {
        printf("%d",n*x);
    }
}