#include<stdio.h>
int main()
{
    int n,first_digit,last_digit;
    printf("Enter the number: ");
    scanf("%d",&n);
    last_digit=n%10;
    while(n>=10)
    {
        n/=10;
    }
    printf("Sum of First digit and Last digit = %d",n+last_digit);
    return 0;

}