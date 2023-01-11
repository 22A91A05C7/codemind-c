#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,min,max;
    scanf("%d",&n);
    for(int i=1;;i++)
    {
        c=a+b;a=b;b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
            break;
        }
    }
    int e=n-min;
    int f=max-n;
    if(e>f)
    printf("%d",max);
    else if(e==f)
    printf("%d %d",min,max);
    else
    printf("%d ",min);
}