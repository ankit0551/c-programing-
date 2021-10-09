#include<stdio.h>
int main()
{
	float p,t,r,si;

    printf("enter the principal(amount), time, and rate: :\n");
	scanf("%f%f%f",&p,&t,&r);
	
	
	si=(p*t*r)/100;

	 printf("\nsimple interset=%.2f",si);
	 return 0;
	
}
	

