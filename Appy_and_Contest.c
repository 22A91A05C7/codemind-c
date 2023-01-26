#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,k;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        if((n/a>=k&&n/b!=k)||(n/b>=k&&n/a!=k))
        printf("Win
");
        else
        printf("Lose
");
    }
}