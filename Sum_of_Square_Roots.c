#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,d,i,s=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        d=sqrt(i);
        s=s+d;
    }
    printf("%0.2f",s);
}