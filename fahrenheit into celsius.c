#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter tempreature in fahrnheit.\n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celsius= %f",c);
    return 0;
    
}