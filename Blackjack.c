#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c==21)
    {
        printf("0");
    }
    else
    {
        d=21-c;
        if(d<=10)
        {
            printf("%d",d);
        }
        else
        {
            printf("-1");
        }
    }
}