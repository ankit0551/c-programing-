#include<stdio.h>
int main()
{
	int n,i,min;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
		
	}
	printf("Smallest element is: %d",min);
	return 0;
	
}
