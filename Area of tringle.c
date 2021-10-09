#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()

{
	float a,b,c,s,area;
	printf("Enter the length of three sides of tringle :\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of tringle=%f",area);
	getch();
	return 0;
	
}
