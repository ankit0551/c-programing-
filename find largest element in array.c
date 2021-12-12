#include<stdio.h>
int main()
{
	int n,i,max;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
		
	}
	printf("Largest element is: %d",max);
	return 0;
	
}
