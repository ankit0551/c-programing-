#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	int i,j=0,k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
		printf("Even elements are:\n");
		for(i=0;i<j;i++)
		{
			printf("%d\n",b[i]);
		}
		printf("Odd elements are:\n");
		for(i=0;i<k;i++)
		{
			printf("%d\n",c[i]);
		}
		
		
	
	return 0;
}
