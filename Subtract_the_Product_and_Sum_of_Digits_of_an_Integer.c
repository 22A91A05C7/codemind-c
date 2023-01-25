#include<stdio.h>
int main()
{
    int m,n,s=0,p=1;
    scanf("%d",&m);
    while(m>0)
    {
        n=m%10;
        s=s+n;
        p=p*n;
        m=m/10;
    }
    printf("%d",p-s);
}