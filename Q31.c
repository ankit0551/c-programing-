#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("enter principle time and rate\n");
    scanf("%f %f %f",&p,&t,&r);
    printf("CI = %f",p*(pow((1+r/100),t)));
    return 0;
}