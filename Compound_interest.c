#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f %f %f",&p,&r,&t);
    double ci;
    ci=p*(pow((1+r/100.00),t));
    printf("%.2f",ci);
}
