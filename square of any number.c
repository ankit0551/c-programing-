#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,result;
    b=2;
    printf("Enter the number to find its power\n");
    scanf("%d", &a);
    result=pow(a,b);
    printf("%f",result);
    return 0;
    
}