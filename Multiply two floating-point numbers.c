#include <stdio.h>

int main(void)
{
    float a,b,multiply;
	printf("This program multiply two Floating-point numbers.");
	printf(" Enter two numbers in the form: nnn nnn\n");
	scanf("%f%f", &a, &b);
	
	multiply=a*b;
	
	printf("the total is: %f\n\n", multiply);
		
}
