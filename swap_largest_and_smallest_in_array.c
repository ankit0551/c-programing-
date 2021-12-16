#include<stdio.h>
int main()
{
	int n,i,max,min,temp,minpos=0,maxpos=0;
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
		{
            max=a[i];
		    maxpos=i;
        }	
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
        {
            min=a[i];
            minpos=i;
        }
	}
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
    return 0;

}