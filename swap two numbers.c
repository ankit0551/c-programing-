#include<stdio.h>
int main()
{
	int x,y;
	x=25;
	y=16;
	
	x=x+y;
	y=x-y;
	x=x-y;
	printf("x=%d\ny=%d",x,y);
	return 0;
}
