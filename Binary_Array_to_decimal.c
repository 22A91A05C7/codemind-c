#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,c=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        x=pow(2,n-i-1)*a[i];
        c=c+x;
    }
    printf("%d",c);
}