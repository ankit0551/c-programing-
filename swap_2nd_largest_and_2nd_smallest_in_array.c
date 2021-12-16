#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of Array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1 ;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    temp=a[n-2];
    a[n-2]=a[1];
    a[1]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    

}