#include<stdio.h>
int main()
{
    int n,i,j,pos=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Entity you wanna find: ");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
         if(a[i]==j)
         {
             pos=1;
             break;
         }    
    }
    if(pos==1)
    {
        printf("Position is: %d",i+1);
    }
    else
    printf("not found");

    return 0;



}