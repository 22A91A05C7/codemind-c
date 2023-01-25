#include<stdio.h>
int main()
{
    int n,i,x,s=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    x=s/n;;
    for(i=0;i<n;i++)
    {
        if(x>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}