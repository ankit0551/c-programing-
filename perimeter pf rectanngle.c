#include<stdio.h>
int main()
{
	float l,b,p;
	printf("Enter length & width of rectangle :\n");
	scanf("%f%f",&l,&b);
	p=2*(l+b);
	printf("Perimeter of rectanngle= %f",p);
	return 0;
}
