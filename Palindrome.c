#include<stdio.h>
int is_pal(int);
int main()
{
    int n;
    scanf("%d",&n);
    if(is_pal(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int is_pal(int m)
{
    int q,r,s=0;
    q=m;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(s==m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}