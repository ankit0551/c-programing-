#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,result;
    printf("Enter the number to find its power\n");
    scanf("%d %d", &a,&b);
    result=pow(a,b);
    printf("%f",result);
    return 0;
    
}