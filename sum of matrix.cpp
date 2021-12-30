#include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("Enter the size of row and column: ");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n],sum[m][n];
	printf("Enter the elements of 1st Matrix.\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of 2nd Matrix.\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element: ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("Your 1st Matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Your 2nd Matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Your sum of Both Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
