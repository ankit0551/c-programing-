#include<stdio.h>
int main ()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i%2==0)
			printf("%d ",a[i][j]);
			
			else
			printf("%d ",a[i][3-1-j]); 
		}
		printf("\n");
	}
	return 0;
}