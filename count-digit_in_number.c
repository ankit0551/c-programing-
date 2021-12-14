#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("%d",count);
    return 0;
}
