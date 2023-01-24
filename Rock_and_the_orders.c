#include<stdio.h>
int main()
{
    int d,c,e,f,g,h,i,j,p,k;
    scanf("%d%d%d%d%d%d%d%d%d%d",&d,&c,&e,&f,&g,&h,&i,&j,&p,&k);
    p=e+f+g;
    k=h+i+j;
    if(p<=150&&k<=150)
    {
        printf("NO");
    }
    else if(p>=150&&k>=150)
    {
        if(c<(2*d))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if(c<d)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}