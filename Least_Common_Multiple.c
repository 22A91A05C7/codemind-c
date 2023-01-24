#include<stdio.h>
int main()
{
    long long int a,b,lcm,gcd,i,p;
    scanf("%lld%lld",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    p=a*b;
    lcm=p/gcd;
    printf("%lld",lcm);
}