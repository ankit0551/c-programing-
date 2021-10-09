#include<stdio.h>
int main()
{
	float r,d,c,a,x;
	printf("Enter radius of circle :\n");
	scanf("%f",&r);
	x=3.14;
	d=2*r;
	printf("Diameter= %f unit\n",d);
	c=2*x*r;
	printf("Circumference= %f unit\n",c);
	a=x*r*r;
	printf("Area= %f sq unit\n",a);
	return 0;
	
}

