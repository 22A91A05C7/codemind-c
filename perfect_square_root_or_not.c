#include<stdio.h>
#include<math.h>
int main()
{
    int i,number;
    scanf("%d",&number);
    i=(int)sqrt(number);
    if(number==i*i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}