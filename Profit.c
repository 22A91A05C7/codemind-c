#include<stdio.h>
int main()
{
    int cp,sp,amount;
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        amount=sp-cp;
        printf("Profit");
    }
    else if(cp>sp)
    {
        amount=cp-sp;
        printf("Loss");
    }
    else
    {
        printf("No Profit No Loss");
    }
    return 0;
}