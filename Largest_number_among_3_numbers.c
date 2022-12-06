#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>=B&&A>=C)
    {
        printf("%d",A);
    }
    if(B>=A&&B>=C)
    {
        printf("%d",B);
    }
    if(C>=A&&C>=B)
    {
        printf("%d",C);
    }
    return 0;
}