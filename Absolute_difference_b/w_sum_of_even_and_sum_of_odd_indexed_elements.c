#include<stdio.h>
int main()
{
    int i,n,s=0,h=0,e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else if(i%2!=0)
        {
            h=h+a[i];
        }
    }
    e=s-h;
    printf("%d",e);
}