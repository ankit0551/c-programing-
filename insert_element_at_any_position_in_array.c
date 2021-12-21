#include<stdio.h>
int main()
{
    int i,n,j,k,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to insert: ");
    scanf("%d",&j);
    printf("Enter the position: ");
    scanf("%d",&k);
    for(i=n-1;i>k;i--)
    {
        a[i]=a[i-1];
    }
    a[k-1]=j; 
    printf("Array after insertion:   ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;


}