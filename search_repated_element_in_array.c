#include<stdio.h>
int main()
{
    int i,n,j,k=0;
    printf("Enter the size of element: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("position is: %d\n",i+1);
            k++;
        }
    }
    if(k==0)
    printf("Not found");

    return 0;
}