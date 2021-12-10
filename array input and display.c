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
	printf("your elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	return 0;
}
