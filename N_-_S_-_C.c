#include<stdio.h>
int main()
{
    int a,b,i,c,d;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        c=i*i;
        d=i*i*i;
        printf("%d %d %d
",i,c,d);
    }
}