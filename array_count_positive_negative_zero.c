#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    int i,pcount=0,ncount=0,zero=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        pcount++;
        else if(a[i]<0)
        ncount++;
        else
        zero++;
    }
    printf("Positive elements: %d\nNegative elements: %d\nzero elements: %d",pcount,ncount,zero);
    return 0;
}