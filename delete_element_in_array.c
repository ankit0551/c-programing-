#include<stdio.h>
int main()
{
    int n,i,j,pos=0;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to delete: ");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        
        if(a[i]==j)
        {
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+2];
    }
    for(i=0;i<n-2;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}