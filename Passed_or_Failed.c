#include<stdio.h>
int main()
{
    int e,m,p,c,s;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&s);
    if(e>=34&&m>=34&&p>=34&&c>=34&&s>=34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}