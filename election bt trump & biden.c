#include<stdio.h>
int main()
{
	int t[10],b[10],i;

	for(i=0;i<10;i++)
	{
		printf("Enter the votes of Trump in state %d: ",i+1);
		scanf("%d",&t[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("Enter the votes of Biden in state %d: ",i+1);
		scanf("%d",&b[i]);
	}
	int h=0,l=0;
	for(i=0;i<10;i++)
	{
		if(t[i]<b[i])
		{
			printf("Winner in state %d is Biden.\n",i+1);
			h++;
		}
		else
		{
			printf("Winner in state %d is Trump.\n",i+1);
			l++;
		}
	}
	if(h<l)
	printf("Trump is the winner of President election\n");
	else if(h>l)
	printf("Biden is the winner of President election\n");
	else
    printf("Election is tie Between Trump and Biden.\n");
	
	return 0;
}
