#include <stdio.h>
int main() {
    int a,b,quotient,remainder;
    printf("Enter dividend, divisor ");
    scanf("%d%d", &a,&b);
    
    
    quotient = a/b;

    remainder = a%b;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
