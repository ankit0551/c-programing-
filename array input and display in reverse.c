#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Your elements are in reverse:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
