#include<stdio.h>
int main()
{
    long long int mno,count=0;
    scanf("%lld",&mno);
    while(mno>0)
    {
        mno=mno/10;
        count++;
    }
    if(count==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}